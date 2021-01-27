// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: lora-agent/loraagent.proto

#include "lora-agent/loraagent.pb.h"
#include "lora-agent/loraagent.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace lora {
namespace agent {

static const char* DeviceService_method_names[] = {
  "/lora.agent.DeviceService/Create",
  "/lora.agent.DeviceService/Delete",
};

std::unique_ptr< DeviceService::Stub> DeviceService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< DeviceService::Stub> stub(new DeviceService::Stub(channel));
  return stub;
}

DeviceService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Create_(DeviceService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Delete_(DeviceService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status DeviceService::Stub::Create(::grpc::ClientContext* context, const ::lora::agent::CreateRequest& request, ::lora::agent::EmptyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Create_, context, request, response);
}

void DeviceService::Stub::experimental_async::Create(::grpc::ClientContext* context, const ::lora::agent::CreateRequest* request, ::lora::agent::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Create_, context, request, response, std::move(f));
}

void DeviceService::Stub::experimental_async::Create(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::lora::agent::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Create_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::lora::agent::EmptyResponse>* DeviceService::Stub::AsyncCreateRaw(::grpc::ClientContext* context, const ::lora::agent::CreateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::lora::agent::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_Create_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::lora::agent::EmptyResponse>* DeviceService::Stub::PrepareAsyncCreateRaw(::grpc::ClientContext* context, const ::lora::agent::CreateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::lora::agent::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_Create_, context, request, false);
}

::grpc::Status DeviceService::Stub::Delete(::grpc::ClientContext* context, const ::lora::agent::DeleteRequest& request, ::lora::agent::EmptyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Delete_, context, request, response);
}

void DeviceService::Stub::experimental_async::Delete(::grpc::ClientContext* context, const ::lora::agent::DeleteRequest* request, ::lora::agent::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, std::move(f));
}

void DeviceService::Stub::experimental_async::Delete(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::lora::agent::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::lora::agent::EmptyResponse>* DeviceService::Stub::AsyncDeleteRaw(::grpc::ClientContext* context, const ::lora::agent::DeleteRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::lora::agent::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_Delete_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::lora::agent::EmptyResponse>* DeviceService::Stub::PrepareAsyncDeleteRaw(::grpc::ClientContext* context, const ::lora::agent::DeleteRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::lora::agent::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_Delete_, context, request, false);
}

DeviceService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DeviceService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DeviceService::Service, ::lora::agent::CreateRequest, ::lora::agent::EmptyResponse>(
          std::mem_fn(&DeviceService::Service::Create), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DeviceService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DeviceService::Service, ::lora::agent::DeleteRequest, ::lora::agent::EmptyResponse>(
          std::mem_fn(&DeviceService::Service::Delete), this)));
}

DeviceService::Service::~Service() {
}

::grpc::Status DeviceService::Service::Create(::grpc::ServerContext* context, const ::lora::agent::CreateRequest* request, ::lora::agent::EmptyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DeviceService::Service::Delete(::grpc::ServerContext* context, const ::lora::agent::DeleteRequest* request, ::lora::agent::EmptyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace lora
}  // namespace agent

