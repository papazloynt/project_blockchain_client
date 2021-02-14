//
// Created by chastikov on 03.02.2021.
//
// private headers
#include "client.hpp"


[[noreturn]] BlockChainClient::BlockChainClient() {
    auto channel = grpc::CreateChannel("0.0.0.0:9090", grpc::InsecureChannelCredentials());
    client = blockchain::Blockchain::NewStub(channel);

    std::cout << "Welcome to our service, in order to"
                 " start working with it, you need to log in"
                 " or register.\n"
              << "Press 1 to enter the system.\n"
              << "Press 2 to register in the system." << std::endl;
    short p;
    std::cin >> p;
    while ( (p != 1) && (p != 2) ) {
        std::cout << "Unknown command! "
                     "Please enter correct command number"
                  << std::endl;
        std::cin >> p;
    }
        switch (p) {
            case 1:
                Authorization();
                break;
            case 2:
                Registration();
                break;
        }

    while (true) {
        std::cout << "Service functionality:\n"
                     "Enter 1 to make a transaction.\n"
                     "Enter 2 to top up your balance.\n"
                     "Enter 3 to get balance data.\n"
                     "Enter 4 to log out." << std::endl;
        std::cin >> p;

        switch (p) {
            case 1:
                Transaction();
                break;
            case 2:
                AddSum();
                break;
            case 3:
                GetInfo();
                break;
            case 4:
                std::cout << "Goodbye :)" << std::endl;
                exit(2);
            default:
                std::cout << "Unknown command!";
                break;
        }


    }
}

void BlockChainClient::Registration() {
    std::cout << "Please input your login:" << std::endl;
    std::cin >> name;

    blockchain::RegistrationResponse response;
    grpc::ClientContext context;
    blockchain::RegistrationRequest request;
    request.set_name(name);

    grpc::Status status = client->Registration(&context, request, &response);

    if (status.ok()){
        std::cout << "You have successfully registered,"
                     " your password:" << std::endl
                     << response.password() << std::endl
                     << "Don't forget it" << std::endl;
    } else {
        // генерация исключения или код ошибки
        std::cout << "Something went wrong,"
                     " please try again later.\n" <<
                     "Most likely, the name you are entering"
                     " already exists."<< std::endl;
        exit(1);
    }
}


void BlockChainClient::Authorization() {
    bool flag = false;
    while(!flag) {
        std::cout << "Please input your login:" << std::endl;
        std::cin >> name;

        std::cout << "Please input your password:" << std::endl;
        std::string password;
        std::cin >> password;

        blockchain::AuthorizationResponse response;
        grpc::ClientContext context;
        blockchain::AuthorizationRequest request;
        request.set_name(name);
        request.set_password(password);

        grpc::Status status = client->Authorization(&context, request, &response);

        if (status.ok()) {
            std::cout << "You have successfully logged in!" << std::endl
                      << std::endl << std::endl;
            flag = true;
        } else {
            std::cout << "Wrong login or password! Please try again." << std::endl;
        }
    }
}

void BlockChainClient::GetInfo() {
    blockchain::InfoBalanceResponse response;
    grpc::ClientContext context;
    blockchain::InfoBalanceRequest request;
    request.set_name(name);

    grpc::Status status = client->InfoBalance(&context, request, &response);

    if (status.ok()) {
        std::cout << "Your balance = " << response.sum()
        << " tokens." << std::endl;
    } else {
        std::cout << "Something went wrong,"
                     " please try again later." << std::endl;
    }
}

void BlockChainClient::AddSum() {
    std::cout << "Please input the amount "
                 "you want to deposit." << std::endl;
    uint32_t sum;
    std::cin >> sum;

    blockchain::AddMoneyResponse response;
    grpc::ClientContext context;
    blockchain::AddMoneyRequest request;
    request.set_name(name);
    request.set_sum(sum);

    grpc::Status status = client->AddMoney(&context, request, &response);

    if (status.ok()) {
        std::cout << "You have successfully deposited "
                     "the amount into your account." << std::endl;
    } else {
        std::cout << "Something went wrong,"
                     " please try again later." << std::endl;
    }
}

void BlockChainClient::Transaction() {
    std::cout << "Please enter the username to whom"
                 " you want to transfer tokens: " << std::endl;
    std::string name_to;
    std::cin >> name_to;

    std::cout << "Enter the amount to transfer: " << std::endl;
    uint32_t sum;
    std::cin >> sum;

    blockchain::TransactionResponse response;
    grpc::ClientContext context;
    blockchain::TransactionRequest request;
    request.set_client_from(name);
    request.set_client_to(name_to);
    request.set_sum(sum);

    grpc::Status status = client->Transaction(&context, request, &response);

    if (status.ok()) {
        std::cout << "Transaction completed successfully" << std::endl;
    } else {
        std::cout << "There is no such user or you do not have enough tokens." << std::endl;
    }
}
