// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ric-notify/ricnotify.proto

#include "ric-notify/ricnotify.pb.h"
#include "ric-notify/ricnotify.grpc.pb.h"

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
namespace notify {

static const char* SMPP_method_names[] = {
  "/ric.notify.SMPP/Send",
  "/ric.notify.SMPP/Status",
  "/ric.notify.SMPP/GatewayInfo",
  "/ric.notify.SMPP/CheckGateway",
};

std::unique_ptr< SMPP::Stub> SMPP::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SMPP::Stub> stub(new SMPP::Stub(channel));
  return stub;
}

SMPP::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Send_(SMPP_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Status_(SMPP_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GatewayInfo_(SMPP_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CheckGateway_(SMPP_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status SMPP::Stub::Send(::grpc::ClientContext* context, const ::ric::notify::SMPPSendRequest& request, ::ric::notify::SMPPSendResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Send_, context, request, response);
}

void SMPP::Stub::experimental_async::Send(::grpc::ClientContext* context, const ::ric::notify::SMPPSendRequest* request, ::ric::notify::SMPPSendResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Send_, context, request, response, std::move(f));
}

void SMPP::Stub::experimental_async::Send(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::notify::SMPPSendResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Send_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::notify::SMPPSendResponse>* SMPP::Stub::AsyncSendRaw(::grpc::ClientContext* context, const ::ric::notify::SMPPSendRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::SMPPSendResponse>::Create(channel_.get(), cq, rpcmethod_Send_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::notify::SMPPSendResponse>* SMPP::Stub::PrepareAsyncSendRaw(::grpc::ClientContext* context, const ::ric::notify::SMPPSendRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::SMPPSendResponse>::Create(channel_.get(), cq, rpcmethod_Send_, context, request, false);
}

::grpc::Status SMPP::Stub::Status(::grpc::ClientContext* context, const ::ric::notify::SMPPStatusRequest& request, ::ric::notify::SMPPStatusResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Status_, context, request, response);
}

void SMPP::Stub::experimental_async::Status(::grpc::ClientContext* context, const ::ric::notify::SMPPStatusRequest* request, ::ric::notify::SMPPStatusResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Status_, context, request, response, std::move(f));
}

void SMPP::Stub::experimental_async::Status(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::notify::SMPPStatusResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Status_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::notify::SMPPStatusResponse>* SMPP::Stub::AsyncStatusRaw(::grpc::ClientContext* context, const ::ric::notify::SMPPStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::SMPPStatusResponse>::Create(channel_.get(), cq, rpcmethod_Status_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::notify::SMPPStatusResponse>* SMPP::Stub::PrepareAsyncStatusRaw(::grpc::ClientContext* context, const ::ric::notify::SMPPStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::SMPPStatusResponse>::Create(channel_.get(), cq, rpcmethod_Status_, context, request, false);
}

::grpc::Status SMPP::Stub::GatewayInfo(::grpc::ClientContext* context, const ::ric::notify::SMPPGatewayInfoRequest& request, ::ric::notify::SMPPGatewayInfoResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GatewayInfo_, context, request, response);
}

void SMPP::Stub::experimental_async::GatewayInfo(::grpc::ClientContext* context, const ::ric::notify::SMPPGatewayInfoRequest* request, ::ric::notify::SMPPGatewayInfoResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GatewayInfo_, context, request, response, std::move(f));
}

void SMPP::Stub::experimental_async::GatewayInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::notify::SMPPGatewayInfoResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GatewayInfo_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::notify::SMPPGatewayInfoResponse>* SMPP::Stub::AsyncGatewayInfoRaw(::grpc::ClientContext* context, const ::ric::notify::SMPPGatewayInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::SMPPGatewayInfoResponse>::Create(channel_.get(), cq, rpcmethod_GatewayInfo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::notify::SMPPGatewayInfoResponse>* SMPP::Stub::PrepareAsyncGatewayInfoRaw(::grpc::ClientContext* context, const ::ric::notify::SMPPGatewayInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::SMPPGatewayInfoResponse>::Create(channel_.get(), cq, rpcmethod_GatewayInfo_, context, request, false);
}

::grpc::Status SMPP::Stub::CheckGateway(::grpc::ClientContext* context, const ::ric::notify::SMPPCheckGatewayRequest& request, ::ric::notify::SMPPCheckGatewayResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CheckGateway_, context, request, response);
}

void SMPP::Stub::experimental_async::CheckGateway(::grpc::ClientContext* context, const ::ric::notify::SMPPCheckGatewayRequest* request, ::ric::notify::SMPPCheckGatewayResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CheckGateway_, context, request, response, std::move(f));
}

void SMPP::Stub::experimental_async::CheckGateway(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::notify::SMPPCheckGatewayResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CheckGateway_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::notify::SMPPCheckGatewayResponse>* SMPP::Stub::AsyncCheckGatewayRaw(::grpc::ClientContext* context, const ::ric::notify::SMPPCheckGatewayRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::SMPPCheckGatewayResponse>::Create(channel_.get(), cq, rpcmethod_CheckGateway_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::notify::SMPPCheckGatewayResponse>* SMPP::Stub::PrepareAsyncCheckGatewayRaw(::grpc::ClientContext* context, const ::ric::notify::SMPPCheckGatewayRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::SMPPCheckGatewayResponse>::Create(channel_.get(), cq, rpcmethod_CheckGateway_, context, request, false);
}

SMPP::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SMPP_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SMPP::Service, ::ric::notify::SMPPSendRequest, ::ric::notify::SMPPSendResponse>(
          std::mem_fn(&SMPP::Service::Send), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SMPP_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SMPP::Service, ::ric::notify::SMPPStatusRequest, ::ric::notify::SMPPStatusResponse>(
          std::mem_fn(&SMPP::Service::Status), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SMPP_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SMPP::Service, ::ric::notify::SMPPGatewayInfoRequest, ::ric::notify::SMPPGatewayInfoResponse>(
          std::mem_fn(&SMPP::Service::GatewayInfo), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SMPP_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SMPP::Service, ::ric::notify::SMPPCheckGatewayRequest, ::ric::notify::SMPPCheckGatewayResponse>(
          std::mem_fn(&SMPP::Service::CheckGateway), this)));
}

SMPP::Service::~Service() {
}

::grpc::Status SMPP::Service::Send(::grpc::ServerContext* context, const ::ric::notify::SMPPSendRequest* request, ::ric::notify::SMPPSendResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SMPP::Service::Status(::grpc::ServerContext* context, const ::ric::notify::SMPPStatusRequest* request, ::ric::notify::SMPPStatusResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SMPP::Service::GatewayInfo(::grpc::ServerContext* context, const ::ric::notify::SMPPGatewayInfoRequest* request, ::ric::notify::SMPPGatewayInfoResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SMPP::Service::CheckGateway(::grpc::ServerContext* context, const ::ric::notify::SMPPCheckGatewayRequest* request, ::ric::notify::SMPPCheckGatewayResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* SMTP_method_names[] = {
  "/ric.notify.SMTP/Send",
  "/ric.notify.SMTP/GatewayInfo",
  "/ric.notify.SMTP/CheckGateway",
};

std::unique_ptr< SMTP::Stub> SMTP::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SMTP::Stub> stub(new SMTP::Stub(channel));
  return stub;
}

SMTP::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Send_(SMTP_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GatewayInfo_(SMTP_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CheckGateway_(SMTP_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status SMTP::Stub::Send(::grpc::ClientContext* context, const ::ric::notify::SMTPSendRequest& request, ::ric::notify::SMTPSendResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Send_, context, request, response);
}

void SMTP::Stub::experimental_async::Send(::grpc::ClientContext* context, const ::ric::notify::SMTPSendRequest* request, ::ric::notify::SMTPSendResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Send_, context, request, response, std::move(f));
}

void SMTP::Stub::experimental_async::Send(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::notify::SMTPSendResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Send_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::notify::SMTPSendResponse>* SMTP::Stub::AsyncSendRaw(::grpc::ClientContext* context, const ::ric::notify::SMTPSendRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::SMTPSendResponse>::Create(channel_.get(), cq, rpcmethod_Send_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::notify::SMTPSendResponse>* SMTP::Stub::PrepareAsyncSendRaw(::grpc::ClientContext* context, const ::ric::notify::SMTPSendRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::SMTPSendResponse>::Create(channel_.get(), cq, rpcmethod_Send_, context, request, false);
}

::grpc::Status SMTP::Stub::GatewayInfo(::grpc::ClientContext* context, const ::ric::notify::SMTPGatewayInfoRequest& request, ::ric::notify::SMTPGatewayInfoResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GatewayInfo_, context, request, response);
}

void SMTP::Stub::experimental_async::GatewayInfo(::grpc::ClientContext* context, const ::ric::notify::SMTPGatewayInfoRequest* request, ::ric::notify::SMTPGatewayInfoResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GatewayInfo_, context, request, response, std::move(f));
}

void SMTP::Stub::experimental_async::GatewayInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::notify::SMTPGatewayInfoResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GatewayInfo_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::notify::SMTPGatewayInfoResponse>* SMTP::Stub::AsyncGatewayInfoRaw(::grpc::ClientContext* context, const ::ric::notify::SMTPGatewayInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::SMTPGatewayInfoResponse>::Create(channel_.get(), cq, rpcmethod_GatewayInfo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::notify::SMTPGatewayInfoResponse>* SMTP::Stub::PrepareAsyncGatewayInfoRaw(::grpc::ClientContext* context, const ::ric::notify::SMTPGatewayInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::SMTPGatewayInfoResponse>::Create(channel_.get(), cq, rpcmethod_GatewayInfo_, context, request, false);
}

::grpc::Status SMTP::Stub::CheckGateway(::grpc::ClientContext* context, const ::ric::notify::SMTPCheckGatewayRequest& request, ::ric::notify::SMTPCheckGatewayResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CheckGateway_, context, request, response);
}

void SMTP::Stub::experimental_async::CheckGateway(::grpc::ClientContext* context, const ::ric::notify::SMTPCheckGatewayRequest* request, ::ric::notify::SMTPCheckGatewayResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CheckGateway_, context, request, response, std::move(f));
}

void SMTP::Stub::experimental_async::CheckGateway(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::notify::SMTPCheckGatewayResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CheckGateway_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::notify::SMTPCheckGatewayResponse>* SMTP::Stub::AsyncCheckGatewayRaw(::grpc::ClientContext* context, const ::ric::notify::SMTPCheckGatewayRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::SMTPCheckGatewayResponse>::Create(channel_.get(), cq, rpcmethod_CheckGateway_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::notify::SMTPCheckGatewayResponse>* SMTP::Stub::PrepareAsyncCheckGatewayRaw(::grpc::ClientContext* context, const ::ric::notify::SMTPCheckGatewayRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::SMTPCheckGatewayResponse>::Create(channel_.get(), cq, rpcmethod_CheckGateway_, context, request, false);
}

SMTP::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SMTP_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SMTP::Service, ::ric::notify::SMTPSendRequest, ::ric::notify::SMTPSendResponse>(
          std::mem_fn(&SMTP::Service::Send), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SMTP_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SMTP::Service, ::ric::notify::SMTPGatewayInfoRequest, ::ric::notify::SMTPGatewayInfoResponse>(
          std::mem_fn(&SMTP::Service::GatewayInfo), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SMTP_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SMTP::Service, ::ric::notify::SMTPCheckGatewayRequest, ::ric::notify::SMTPCheckGatewayResponse>(
          std::mem_fn(&SMTP::Service::CheckGateway), this)));
}

SMTP::Service::~Service() {
}

::grpc::Status SMTP::Service::Send(::grpc::ServerContext* context, const ::ric::notify::SMTPSendRequest* request, ::ric::notify::SMTPSendResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SMTP::Service::GatewayInfo(::grpc::ServerContext* context, const ::ric::notify::SMTPGatewayInfoRequest* request, ::ric::notify::SMTPGatewayInfoResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SMTP::Service::CheckGateway(::grpc::ServerContext* context, const ::ric::notify::SMTPCheckGatewayRequest* request, ::ric::notify::SMTPCheckGatewayResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* Push_method_names[] = {
  "/ric.notify.Push/Send",
  "/ric.notify.Push/SendData",
};

std::unique_ptr< Push::Stub> Push::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Push::Stub> stub(new Push::Stub(channel));
  return stub;
}

Push::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Send_(Push_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendData_(Push_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Push::Stub::Send(::grpc::ClientContext* context, const ::ric::notify::PushSendRequest& request, ::ric::notify::PushSendResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Send_, context, request, response);
}

void Push::Stub::experimental_async::Send(::grpc::ClientContext* context, const ::ric::notify::PushSendRequest* request, ::ric::notify::PushSendResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Send_, context, request, response, std::move(f));
}

void Push::Stub::experimental_async::Send(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::notify::PushSendResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Send_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::notify::PushSendResponse>* Push::Stub::AsyncSendRaw(::grpc::ClientContext* context, const ::ric::notify::PushSendRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::PushSendResponse>::Create(channel_.get(), cq, rpcmethod_Send_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::notify::PushSendResponse>* Push::Stub::PrepareAsyncSendRaw(::grpc::ClientContext* context, const ::ric::notify::PushSendRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::PushSendResponse>::Create(channel_.get(), cq, rpcmethod_Send_, context, request, false);
}

::grpc::Status Push::Stub::SendData(::grpc::ClientContext* context, const ::ric::notify::PushDataMessageRequest& request, ::ric::notify::PushDataMessageResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SendData_, context, request, response);
}

void Push::Stub::experimental_async::SendData(::grpc::ClientContext* context, const ::ric::notify::PushDataMessageRequest* request, ::ric::notify::PushDataMessageResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SendData_, context, request, response, std::move(f));
}

void Push::Stub::experimental_async::SendData(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::notify::PushDataMessageResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SendData_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::notify::PushDataMessageResponse>* Push::Stub::AsyncSendDataRaw(::grpc::ClientContext* context, const ::ric::notify::PushDataMessageRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::PushDataMessageResponse>::Create(channel_.get(), cq, rpcmethod_SendData_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::notify::PushDataMessageResponse>* Push::Stub::PrepareAsyncSendDataRaw(::grpc::ClientContext* context, const ::ric::notify::PushDataMessageRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::PushDataMessageResponse>::Create(channel_.get(), cq, rpcmethod_SendData_, context, request, false);
}

Push::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Push_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Push::Service, ::ric::notify::PushSendRequest, ::ric::notify::PushSendResponse>(
          std::mem_fn(&Push::Service::Send), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Push_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Push::Service, ::ric::notify::PushDataMessageRequest, ::ric::notify::PushDataMessageResponse>(
          std::mem_fn(&Push::Service::SendData), this)));
}

Push::Service::~Service() {
}

::grpc::Status Push::Service::Send(::grpc::ServerContext* context, const ::ric::notify::PushSendRequest* request, ::ric::notify::PushSendResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Push::Service::SendData(::grpc::ServerContext* context, const ::ric::notify::PushDataMessageRequest* request, ::ric::notify::PushDataMessageResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* HTTP_method_names[] = {
  "/ric.notify.HTTP/Request",
};

std::unique_ptr< HTTP::Stub> HTTP::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< HTTP::Stub> stub(new HTTP::Stub(channel));
  return stub;
}

HTTP::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Request_(HTTP_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status HTTP::Stub::Request(::grpc::ClientContext* context, const ::ric::notify::HTTPRequest& request, ::ric::notify::HTTPResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Request_, context, request, response);
}

void HTTP::Stub::experimental_async::Request(::grpc::ClientContext* context, const ::ric::notify::HTTPRequest* request, ::ric::notify::HTTPResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Request_, context, request, response, std::move(f));
}

void HTTP::Stub::experimental_async::Request(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::notify::HTTPResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Request_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::notify::HTTPResponse>* HTTP::Stub::AsyncRequestRaw(::grpc::ClientContext* context, const ::ric::notify::HTTPRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::HTTPResponse>::Create(channel_.get(), cq, rpcmethod_Request_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::notify::HTTPResponse>* HTTP::Stub::PrepareAsyncRequestRaw(::grpc::ClientContext* context, const ::ric::notify::HTTPRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::HTTPResponse>::Create(channel_.get(), cq, rpcmethod_Request_, context, request, false);
}

HTTP::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      HTTP_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< HTTP::Service, ::ric::notify::HTTPRequest, ::ric::notify::HTTPResponse>(
          std::mem_fn(&HTTP::Service::Request), this)));
}

HTTP::Service::~Service() {
}

::grpc::Status HTTP::Service::Request(::grpc::ServerContext* context, const ::ric::notify::HTTPRequest* request, ::ric::notify::HTTPResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* Notifier_method_names[] = {
  "/ric.notify.Notifier/Init",
  "/ric.notify.Notifier/Send",
};

std::unique_ptr< Notifier::Stub> Notifier::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Notifier::Stub> stub(new Notifier::Stub(channel));
  return stub;
}

Notifier::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Init_(Notifier_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Send_(Notifier_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Notifier::Stub::Init(::grpc::ClientContext* context, const ::ric::notify::NotifierInitRequest& request, ::ric::notify::NotifierInitResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Init_, context, request, response);
}

void Notifier::Stub::experimental_async::Init(::grpc::ClientContext* context, const ::ric::notify::NotifierInitRequest* request, ::ric::notify::NotifierInitResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Init_, context, request, response, std::move(f));
}

void Notifier::Stub::experimental_async::Init(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::notify::NotifierInitResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Init_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::notify::NotifierInitResponse>* Notifier::Stub::AsyncInitRaw(::grpc::ClientContext* context, const ::ric::notify::NotifierInitRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::NotifierInitResponse>::Create(channel_.get(), cq, rpcmethod_Init_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::notify::NotifierInitResponse>* Notifier::Stub::PrepareAsyncInitRaw(::grpc::ClientContext* context, const ::ric::notify::NotifierInitRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::NotifierInitResponse>::Create(channel_.get(), cq, rpcmethod_Init_, context, request, false);
}

::grpc::Status Notifier::Stub::Send(::grpc::ClientContext* context, const ::ric::notify::NotifierSendRequest& request, ::ric::notify::NotifierSendResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Send_, context, request, response);
}

void Notifier::Stub::experimental_async::Send(::grpc::ClientContext* context, const ::ric::notify::NotifierSendRequest* request, ::ric::notify::NotifierSendResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Send_, context, request, response, std::move(f));
}

void Notifier::Stub::experimental_async::Send(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::notify::NotifierSendResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Send_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::ric::notify::NotifierSendResponse>* Notifier::Stub::AsyncSendRaw(::grpc::ClientContext* context, const ::ric::notify::NotifierSendRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::NotifierSendResponse>::Create(channel_.get(), cq, rpcmethod_Send_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::notify::NotifierSendResponse>* Notifier::Stub::PrepareAsyncSendRaw(::grpc::ClientContext* context, const ::ric::notify::NotifierSendRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ric::notify::NotifierSendResponse>::Create(channel_.get(), cq, rpcmethod_Send_, context, request, false);
}

Notifier::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Notifier_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Notifier::Service, ::ric::notify::NotifierInitRequest, ::ric::notify::NotifierInitResponse>(
          std::mem_fn(&Notifier::Service::Init), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Notifier_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Notifier::Service, ::ric::notify::NotifierSendRequest, ::ric::notify::NotifierSendResponse>(
          std::mem_fn(&Notifier::Service::Send), this)));
}

Notifier::Service::~Service() {
}

::grpc::Status Notifier::Service::Init(::grpc::ServerContext* context, const ::ric::notify::NotifierInitRequest* request, ::ric::notify::NotifierInitResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Notifier::Service::Send(::grpc::ServerContext* context, const ::ric::notify::NotifierSendRequest* request, ::ric::notify::NotifierSendResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ric
}  // namespace notify

