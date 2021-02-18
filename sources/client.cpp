//
// Created by chastikov on 03.02.2021.
//

// private headers
#include "client.hpp"


BlockChainClient::BlockChainClient() {
    auto channel = grpc::CreateChannel("0.0.0.0:9090", grpc::InsecureChannelCredentials());
    client = blockchain::Blockchain::NewStub(channel);
}

std::string BlockChainClient::Registration(const std::string& name) {
    name_ = name;
    blockchain::RegistrationResponse response;
    grpc::ClientContext context;
    blockchain::RegistrationRequest request;
    request.set_name(name_);

    grpc::Status status = client->Registration(&context, request, &response);

    if (status.ok()){
        return response.password();
    }
        return "";

}

Status BlockChainClient::Authorization(const std::string& name,
                                       const std::string& password ) {
    blockchain::AuthorizationResponse response;
    grpc::ClientContext context;
    blockchain::AuthorizationRequest request;
    request.set_name(name);
    request.set_password(password);

    grpc::Status status = client->Authorization(&context, request, &response);

    if (status.ok()) {
        name_ = name;
        return OK;
    }
    return ERROR;
}

std::string BlockChainClient::GetInfo() {
    blockchain::InfoBalanceResponse response;
    grpc::ClientContext context;
    blockchain::InfoBalanceRequest request;
    request.set_name(name_);

    grpc::Status status = client->InfoBalance(&context, request, &response);

    if (status.ok()) {
        return response.sum();
    }
    return "";
}

Status BlockChainClient::AddSum(const uint32_t sum) {
    blockchain::AddMoneyResponse response;
    grpc::ClientContext context;
    blockchain::AddMoneyRequest request;
    request.set_name(name_);
    request.set_sum(sum);

    grpc::Status status = client->AddMoney(&context, request, &response);

    if (status.ok()) {
        return OK;
    }
    return ERROR;
}

Status BlockChainClient::Transaction(const std::string name_to,
                                   const uint32_t sum) {
    blockchain::TransactionResponse response;
    grpc::ClientContext context;
    blockchain::TransactionRequest request;
    request.set_client_from(name_);
    request.set_client_to(name_to);
    request.set_sum(sum);

    grpc::Status status = client->Transaction(&context, request, &response);

    if (status.ok()) {
        return OK;
    }
        return ERROR;
}
