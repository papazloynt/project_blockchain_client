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

class BlockChainClient {
public:
    BlockChainClient();
    std::string name;
private:
    std::unique_ptr<blockchain::Blockchain::Stub> client;
    void Registration();
    void Authorization();
    void GetInfo();
    void AddSum();
    void Transaction();
};


#endif //SUGGESTCLIENT_CLIENT_HPP
