#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>

#include "suggest.grpc.pb.h"
#include "suggest.pb.h"

#include "client.hpp"

using grpc::ClientContext;
using grpc::Status;
using suggest::SuggestRequest;
using suggest::SuggestResponse;
using suggest::Suggest;

int main(int argc, char** argv) {

  auto channel = grpc::CreateChannel("0.0.0.0:9090", grpc::InsecureChannelCredentials());
  auto client = Suggest::NewStub(channel);
  SuggestResponse response;
  ClientContext context;
  SuggestRequest request;
  request.set_input("hel");
  Status status = client->Answer(&context, request, &response);

  if (status.ok()) {
      auto vec = response.suggest_answer();
      for (const auto& elem : vec) {
          std::cout << elem.text() << ' ' << elem.position() << std::endl;
  } else {
    return -1;
  }
}
