//
// Created by chastikov on 03.02.2021.
//

#ifndef SUGGESTCLIENT_CLIENT_HPP
#define SUGGESTCLIENT_CLIENT_HPP

// c++ headers
#include <iostream>
#include <string>

// gRPC Mainer
#include "blockchain.grpc.pb.h"
#include "blockchain.pb.h"

// gRPC
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>


enum Status{
    OK,
    ERROR
};

class BlockChainClient {
public:
    BlockChainClient();

    std::string Registration(const std::string& name);
    Status Authorization(const std::string& name,
                         const std::string& password );
    std::string GetInfo();
    Status AddSum(const uint32_t sum);
    Status Transaction(const std::string name_to,
                       const uint32_t sum);
private:
    std::unique_ptr<blockchain::Blockchain::Stub> client;
    std::string name_;
};



#endif //SUGGESTCLIENT_CLIENT_HPP
