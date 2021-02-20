// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ric-auth/ricauth.proto

#include "ric-auth/ricauth.pb.h"
#include "ric-auth/ricauth.grpc.pb.h"

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
namespace ric {
namespace auth {

static const char* RicAuth_method_names[] = {
  "/ric.auth.RicAuth/AuthObject",
  "/ric.auth.RicAuth/GetModelInfo",
  "/ric.auth.RicAuth/IssueCert",
  "/ric.auth.RicAuth/SendOffline",
  "/ric.auth.RicAuth/SendModelUpdate",
};

std::unique_ptr< RicAuth::Stub> RicAuth::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< RicAuth::Stub> stub(new RicAuth::Stub(channel));
  return stub;
}

RicAuth::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_AuthObject_(RicAuth_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetModelInfo_(RicAuth_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_IssueCert_(RicAuth_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendOffline_(RicAuth_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendModelUpdate_(RicAuth_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status RicAuth::Stub::AuthObject(::grpc::ClientContext* context, const ::ric::auth::AuthObjectRequest& request, ::ric::auth::AuthObjectResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_AuthObject_, context, request, response);
}

void RicAuth::Stub::experimental_async::AuthObject(::grpc::ClientContext* context, const ::ric::auth::AuthObjectRequest* request, ::ric::auth::AuthObjectResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_AuthObject_, context, request, response, std::move(f));
}

void RicAuth::Stub::experimental_async::AuthObject(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::auth::AuthObjectResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_AuthObject_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::auth::AuthObjectResponse>* RicAuth::Stub::AsyncAuthObjectRaw(::grpc::ClientContext* context, const ::ric::auth::AuthObjectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::auth::AuthObjectResponse>::Create(channel_.get(), cq, rpcmethod_AuthObject_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::auth::AuthObjectResponse>* RicAuth::Stub::PrepareAsyncAuthObjectRaw(::grpc::ClientContext* context, const ::ric::auth::AuthObjectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::auth::AuthObjectResponse>::Create(channel_.get(), cq, rpcmethod_AuthObject_, context, request, false);
}

::grpc::Status RicAuth::Stub::GetModelInfo(::grpc::ClientContext* context, const ::ric::auth::ModelInfoRequest& request, ::ric::auth::ModelInfoResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetModelInfo_, context, request, response);
}

void RicAuth::Stub::experimental_async::GetModelInfo(::grpc::ClientContext* context, const ::ric::auth::ModelInfoRequest* request, ::ric::auth::ModelInfoResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetModelInfo_, context, request, response, std::move(f));
}

void RicAuth::Stub::experimental_async::GetModelInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::auth::ModelInfoResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetModelInfo_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::auth::ModelInfoResponse>* RicAuth::Stub::AsyncGetModelInfoRaw(::grpc::ClientContext* context, const ::ric::auth::ModelInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::auth::ModelInfoResponse>::Create(channel_.get(), cq, rpcmethod_GetModelInfo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::auth::ModelInfoResponse>* RicAuth::Stub::PrepareAsyncGetModelInfoRaw(::grpc::ClientContext* context, const ::ric::auth::ModelInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::auth::ModelInfoResponse>::Create(channel_.get(), cq, rpcmethod_GetModelInfo_, context, request, false);
}

::grpc::Status RicAuth::Stub::IssueCert(::grpc::ClientContext* context, const ::ric::auth::IssueCertRequest& request, ::ric::auth::IssueCertResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_IssueCert_, context, request, response);
}

void RicAuth::Stub::experimental_async::IssueCert(::grpc::ClientContext* context, const ::ric::auth::IssueCertRequest* request, ::ric::auth::IssueCertResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_IssueCert_, context, request, response, std::move(f));
}

void RicAuth::Stub::experimental_async::IssueCert(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::auth::IssueCertResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_IssueCert_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::auth::IssueCertResponse>* RicAuth::Stub::AsyncIssueCertRaw(::grpc::ClientContext* context, const ::ric::auth::IssueCertRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::auth::IssueCertResponse>::Create(channel_.get(), cq, rpcmethod_IssueCert_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::auth::IssueCertResponse>* RicAuth::Stub::PrepareAsyncIssueCertRaw(::grpc::ClientContext* context, const ::ric::auth::IssueCertRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::auth::IssueCertResponse>::Create(channel_.get(), cq, rpcmethod_IssueCert_, context, request, false);
}

::grpc::Status RicAuth::Stub::SendOffline(::grpc::ClientContext* context, const ::ric::auth::ObjectGateRequest& request, ::ric::auth::ObjectGateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SendOffline_, context, request, response);
}

void RicAuth::Stub::experimental_async::SendOffline(::grpc::ClientContext* context, const ::ric::auth::ObjectGateRequest* request, ::ric::auth::ObjectGateResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SendOffline_, context, request, response, std::move(f));
}

void RicAuth::Stub::experimental_async::SendOffline(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::auth::ObjectGateResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SendOffline_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::auth::ObjectGateResponse>* RicAuth::Stub::AsyncSendOfflineRaw(::grpc::ClientContext* context, const ::ric::auth::ObjectGateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::auth::ObjectGateResponse>::Create(channel_.get(), cq, rpcmethod_SendOffline_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::auth::ObjectGateResponse>* RicAuth::Stub::PrepareAsyncSendOfflineRaw(::grpc::ClientContext* context, const ::ric::auth::ObjectGateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::auth::ObjectGateResponse>::Create(channel_.get(), cq, rpcmethod_SendOffline_, context, request, false);
}

::grpc::Status RicAuth::Stub::SendModelUpdate(::grpc::ClientContext* context, const ::ric::auth::ObjectGateRequest& request, ::ric::auth::ObjectGateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SendModelUpdate_, context, request, response);
}

void RicAuth::Stub::experimental_async::SendModelUpdate(::grpc::ClientContext* context, const ::ric::auth::ObjectGateRequest* request, ::ric::auth::ObjectGateResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SendModelUpdate_, context, request, response, std::move(f));
}

void RicAuth::Stub::experimental_async::SendModelUpdate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::auth::ObjectGateResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SendModelUpdate_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::auth::ObjectGateResponse>* RicAuth::Stub::AsyncSendModelUpdateRaw(::grpc::ClientContext* context, const ::ric::auth::ObjectGateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::auth::ObjectGateResponse>::Create(channel_.get(), cq, rpcmethod_SendModelUpdate_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::auth::ObjectGateResponse>* RicAuth::Stub::PrepareAsyncSendModelUpdateRaw(::grpc::ClientContext* context, const ::ric::auth::ObjectGateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::auth::ObjectGateResponse>::Create(channel_.get(), cq, rpcmethod_SendModelUpdate_, context, request, false);
}

RicAuth::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RicAuth_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RicAuth::Service, ::ric::auth::AuthObjectRequest, ::ric::auth::AuthObjectResponse>(
          std::mem_fn(&RicAuth::Service::AuthObject), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RicAuth_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RicAuth::Service, ::ric::auth::ModelInfoRequest, ::ric::auth::ModelInfoResponse>(
          std::mem_fn(&RicAuth::Service::GetModelInfo), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RicAuth_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RicAuth::Service, ::ric::auth::IssueCertRequest, ::ric::auth::IssueCertResponse>(
          std::mem_fn(&RicAuth::Service::IssueCert), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RicAuth_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RicAuth::Service, ::ric::auth::ObjectGateRequest, ::ric::auth::ObjectGateResponse>(
          std::mem_fn(&RicAuth::Service::SendOffline), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RicAuth_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RicAuth::Service, ::ric::auth::ObjectGateRequest, ::ric::auth::ObjectGateResponse>(
          std::mem_fn(&RicAuth::Service::SendModelUpdate), this)));
}

RicAuth::Service::~Service() {
}

::grpc::Status RicAuth::Service::AuthObject(::grpc::ServerContext* context, const ::ric::auth::AuthObjectRequest* request, ::ric::auth::AuthObjectResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RicAuth::Service::GetModelInfo(::grpc::ServerContext* context, const ::ric::auth::ModelInfoRequest* request, ::ric::auth::ModelInfoResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RicAuth::Service::IssueCert(::grpc::ServerContext* context, const ::ric::auth::IssueCertRequest* request, ::ric::auth::IssueCertResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RicAuth::Service::SendOffline(::grpc::ServerContext* context, const ::ric::auth::ObjectGateRequest* request, ::ric::auth::ObjectGateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RicAuth::Service::SendModelUpdate(::grpc::ServerContext* context, const ::ric::auth::ObjectGateRequest* request, ::ric::auth::ObjectGateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ric
}  // namespace auth

