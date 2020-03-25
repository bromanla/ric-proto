// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ric-action/ricaction.proto

#include "ric-action/ricaction.pb.h"
#include "ric-action/ricaction.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace ric {
namespace action {

static const char* FunctionControl_method_names[] = {
  "/ric.action.FunctionControl/Call",
  "/ric.action.FunctionControl/Scale",
  "/ric.action.FunctionControl/Delete",
  "/ric.action.FunctionControl/UpdateOrDeploy",
  "/ric.action.FunctionControl/Logs",
  "/ric.action.FunctionControl/Info",
};

std::unique_ptr< FunctionControl::Stub> FunctionControl::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< FunctionControl::Stub> stub(new FunctionControl::Stub(channel));
  return stub;
}

FunctionControl::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Call_(FunctionControl_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Scale_(FunctionControl_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Delete_(FunctionControl_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateOrDeploy_(FunctionControl_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Logs_(FunctionControl_method_names[4], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_Info_(FunctionControl_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status FunctionControl::Stub::Call(::grpc::ClientContext* context, const ::ric::action::CallRequest& request, ::ric::action::CallResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Call_, context, request, response);
}

void FunctionControl::Stub::experimental_async::Call(::grpc::ClientContext* context, const ::ric::action::CallRequest* request, ::ric::action::CallResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Call_, context, request, response, std::move(f));
}

void FunctionControl::Stub::experimental_async::Call(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::action::CallResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Call_, context, request, response, std::move(f));
}

void FunctionControl::Stub::experimental_async::Call(::grpc::ClientContext* context, const ::ric::action::CallRequest* request, ::ric::action::CallResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Call_, context, request, response, reactor);
}

void FunctionControl::Stub::experimental_async::Call(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::action::CallResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Call_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ric::action::CallResponse>* FunctionControl::Stub::AsyncCallRaw(::grpc::ClientContext* context, const ::ric::action::CallRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ric::action::CallResponse>::Create(channel_.get(), cq, rpcmethod_Call_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::action::CallResponse>* FunctionControl::Stub::PrepareAsyncCallRaw(::grpc::ClientContext* context, const ::ric::action::CallRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ric::action::CallResponse>::Create(channel_.get(), cq, rpcmethod_Call_, context, request, false);
}

::grpc::Status FunctionControl::Stub::Scale(::grpc::ClientContext* context, const ::ric::action::ScaleRequest& request, ::ric::action::EmptyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Scale_, context, request, response);
}

void FunctionControl::Stub::experimental_async::Scale(::grpc::ClientContext* context, const ::ric::action::ScaleRequest* request, ::ric::action::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Scale_, context, request, response, std::move(f));
}

void FunctionControl::Stub::experimental_async::Scale(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::action::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Scale_, context, request, response, std::move(f));
}

void FunctionControl::Stub::experimental_async::Scale(::grpc::ClientContext* context, const ::ric::action::ScaleRequest* request, ::ric::action::EmptyResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Scale_, context, request, response, reactor);
}

void FunctionControl::Stub::experimental_async::Scale(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::action::EmptyResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Scale_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ric::action::EmptyResponse>* FunctionControl::Stub::AsyncScaleRaw(::grpc::ClientContext* context, const ::ric::action::ScaleRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ric::action::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_Scale_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::action::EmptyResponse>* FunctionControl::Stub::PrepareAsyncScaleRaw(::grpc::ClientContext* context, const ::ric::action::ScaleRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ric::action::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_Scale_, context, request, false);
}

::grpc::Status FunctionControl::Stub::Delete(::grpc::ClientContext* context, const ::ric::action::DeleteRequest& request, ::ric::action::EmptyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Delete_, context, request, response);
}

void FunctionControl::Stub::experimental_async::Delete(::grpc::ClientContext* context, const ::ric::action::DeleteRequest* request, ::ric::action::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, std::move(f));
}

void FunctionControl::Stub::experimental_async::Delete(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::action::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, std::move(f));
}

void FunctionControl::Stub::experimental_async::Delete(::grpc::ClientContext* context, const ::ric::action::DeleteRequest* request, ::ric::action::EmptyResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, reactor);
}

void FunctionControl::Stub::experimental_async::Delete(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::action::EmptyResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Delete_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ric::action::EmptyResponse>* FunctionControl::Stub::AsyncDeleteRaw(::grpc::ClientContext* context, const ::ric::action::DeleteRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ric::action::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_Delete_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::action::EmptyResponse>* FunctionControl::Stub::PrepareAsyncDeleteRaw(::grpc::ClientContext* context, const ::ric::action::DeleteRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ric::action::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_Delete_, context, request, false);
}

::grpc::Status FunctionControl::Stub::UpdateOrDeploy(::grpc::ClientContext* context, const ::ric::action::UpdateOrDeployRequest& request, ::ric::action::UpdateOrDeployResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateOrDeploy_, context, request, response);
}

void FunctionControl::Stub::experimental_async::UpdateOrDeploy(::grpc::ClientContext* context, const ::ric::action::UpdateOrDeployRequest* request, ::ric::action::UpdateOrDeployResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateOrDeploy_, context, request, response, std::move(f));
}

void FunctionControl::Stub::experimental_async::UpdateOrDeploy(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::action::UpdateOrDeployResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateOrDeploy_, context, request, response, std::move(f));
}

void FunctionControl::Stub::experimental_async::UpdateOrDeploy(::grpc::ClientContext* context, const ::ric::action::UpdateOrDeployRequest* request, ::ric::action::UpdateOrDeployResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_UpdateOrDeploy_, context, request, response, reactor);
}

void FunctionControl::Stub::experimental_async::UpdateOrDeploy(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::action::UpdateOrDeployResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_UpdateOrDeploy_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ric::action::UpdateOrDeployResponse>* FunctionControl::Stub::AsyncUpdateOrDeployRaw(::grpc::ClientContext* context, const ::ric::action::UpdateOrDeployRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ric::action::UpdateOrDeployResponse>::Create(channel_.get(), cq, rpcmethod_UpdateOrDeploy_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::action::UpdateOrDeployResponse>* FunctionControl::Stub::PrepareAsyncUpdateOrDeployRaw(::grpc::ClientContext* context, const ::ric::action::UpdateOrDeployRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ric::action::UpdateOrDeployResponse>::Create(channel_.get(), cq, rpcmethod_UpdateOrDeploy_, context, request, false);
}

::grpc::ClientReader< ::ric::action::LogsResponse>* FunctionControl::Stub::LogsRaw(::grpc::ClientContext* context, const ::ric::action::LogsRequest& request) {
  return ::grpc_impl::internal::ClientReaderFactory< ::ric::action::LogsResponse>::Create(channel_.get(), rpcmethod_Logs_, context, request);
}

void FunctionControl::Stub::experimental_async::Logs(::grpc::ClientContext* context, ::ric::action::LogsRequest* request, ::grpc::experimental::ClientReadReactor< ::ric::action::LogsResponse>* reactor) {
  ::grpc_impl::internal::ClientCallbackReaderFactory< ::ric::action::LogsResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_Logs_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::ric::action::LogsResponse>* FunctionControl::Stub::AsyncLogsRaw(::grpc::ClientContext* context, const ::ric::action::LogsRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncReaderFactory< ::ric::action::LogsResponse>::Create(channel_.get(), cq, rpcmethod_Logs_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::ric::action::LogsResponse>* FunctionControl::Stub::PrepareAsyncLogsRaw(::grpc::ClientContext* context, const ::ric::action::LogsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncReaderFactory< ::ric::action::LogsResponse>::Create(channel_.get(), cq, rpcmethod_Logs_, context, request, false, nullptr);
}

::grpc::Status FunctionControl::Stub::Info(::grpc::ClientContext* context, const ::ric::action::InfoRequest& request, ::ric::action::InfoResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Info_, context, request, response);
}

void FunctionControl::Stub::experimental_async::Info(::grpc::ClientContext* context, const ::ric::action::InfoRequest* request, ::ric::action::InfoResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Info_, context, request, response, std::move(f));
}

void FunctionControl::Stub::experimental_async::Info(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::action::InfoResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Info_, context, request, response, std::move(f));
}

void FunctionControl::Stub::experimental_async::Info(::grpc::ClientContext* context, const ::ric::action::InfoRequest* request, ::ric::action::InfoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Info_, context, request, response, reactor);
}

void FunctionControl::Stub::experimental_async::Info(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::action::InfoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Info_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ric::action::InfoResponse>* FunctionControl::Stub::AsyncInfoRaw(::grpc::ClientContext* context, const ::ric::action::InfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ric::action::InfoResponse>::Create(channel_.get(), cq, rpcmethod_Info_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::action::InfoResponse>* FunctionControl::Stub::PrepareAsyncInfoRaw(::grpc::ClientContext* context, const ::ric::action::InfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ric::action::InfoResponse>::Create(channel_.get(), cq, rpcmethod_Info_, context, request, false);
}

FunctionControl::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FunctionControl_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FunctionControl::Service, ::ric::action::CallRequest, ::ric::action::CallResponse>(
          std::mem_fn(&FunctionControl::Service::Call), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FunctionControl_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FunctionControl::Service, ::ric::action::ScaleRequest, ::ric::action::EmptyResponse>(
          std::mem_fn(&FunctionControl::Service::Scale), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FunctionControl_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FunctionControl::Service, ::ric::action::DeleteRequest, ::ric::action::EmptyResponse>(
          std::mem_fn(&FunctionControl::Service::Delete), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FunctionControl_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FunctionControl::Service, ::ric::action::UpdateOrDeployRequest, ::ric::action::UpdateOrDeployResponse>(
          std::mem_fn(&FunctionControl::Service::UpdateOrDeploy), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FunctionControl_method_names[4],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< FunctionControl::Service, ::ric::action::LogsRequest, ::ric::action::LogsResponse>(
          std::mem_fn(&FunctionControl::Service::Logs), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FunctionControl_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FunctionControl::Service, ::ric::action::InfoRequest, ::ric::action::InfoResponse>(
          std::mem_fn(&FunctionControl::Service::Info), this)));
}

FunctionControl::Service::~Service() {
}

::grpc::Status FunctionControl::Service::Call(::grpc::ServerContext* context, const ::ric::action::CallRequest* request, ::ric::action::CallResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FunctionControl::Service::Scale(::grpc::ServerContext* context, const ::ric::action::ScaleRequest* request, ::ric::action::EmptyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FunctionControl::Service::Delete(::grpc::ServerContext* context, const ::ric::action::DeleteRequest* request, ::ric::action::EmptyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FunctionControl::Service::UpdateOrDeploy(::grpc::ServerContext* context, const ::ric::action::UpdateOrDeployRequest* request, ::ric::action::UpdateOrDeployResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FunctionControl::Service::Logs(::grpc::ServerContext* context, const ::ric::action::LogsRequest* request, ::grpc::ServerWriter< ::ric::action::LogsResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FunctionControl::Service::Info(::grpc::ServerContext* context, const ::ric::action::InfoRequest* request, ::ric::action::InfoResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* PublicAPI_method_names[] = {
  "/ric.action.PublicAPI/History",
  "/ric.action.PublicAPI/SendEvent",
};

std::unique_ptr< PublicAPI::Stub> PublicAPI::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< PublicAPI::Stub> stub(new PublicAPI::Stub(channel));
  return stub;
}

PublicAPI::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_History_(PublicAPI_method_names[0], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_SendEvent_(PublicAPI_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReader< ::ric::action::HistoryResponse>* PublicAPI::Stub::HistoryRaw(::grpc::ClientContext* context, const ::ric::action::HistoryRequest& request) {
  return ::grpc_impl::internal::ClientReaderFactory< ::ric::action::HistoryResponse>::Create(channel_.get(), rpcmethod_History_, context, request);
}

void PublicAPI::Stub::experimental_async::History(::grpc::ClientContext* context, ::ric::action::HistoryRequest* request, ::grpc::experimental::ClientReadReactor< ::ric::action::HistoryResponse>* reactor) {
  ::grpc_impl::internal::ClientCallbackReaderFactory< ::ric::action::HistoryResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_History_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::ric::action::HistoryResponse>* PublicAPI::Stub::AsyncHistoryRaw(::grpc::ClientContext* context, const ::ric::action::HistoryRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncReaderFactory< ::ric::action::HistoryResponse>::Create(channel_.get(), cq, rpcmethod_History_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::ric::action::HistoryResponse>* PublicAPI::Stub::PrepareAsyncHistoryRaw(::grpc::ClientContext* context, const ::ric::action::HistoryRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncReaderFactory< ::ric::action::HistoryResponse>::Create(channel_.get(), cq, rpcmethod_History_, context, request, false, nullptr);
}

::grpc::Status PublicAPI::Stub::SendEvent(::grpc::ClientContext* context, const ::ric::action::EventRequest& request, ::ric::action::EmptyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SendEvent_, context, request, response);
}

void PublicAPI::Stub::experimental_async::SendEvent(::grpc::ClientContext* context, const ::ric::action::EventRequest* request, ::ric::action::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SendEvent_, context, request, response, std::move(f));
}

void PublicAPI::Stub::experimental_async::SendEvent(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::action::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SendEvent_, context, request, response, std::move(f));
}

void PublicAPI::Stub::experimental_async::SendEvent(::grpc::ClientContext* context, const ::ric::action::EventRequest* request, ::ric::action::EmptyResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SendEvent_, context, request, response, reactor);
}

void PublicAPI::Stub::experimental_async::SendEvent(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::action::EmptyResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SendEvent_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ric::action::EmptyResponse>* PublicAPI::Stub::AsyncSendEventRaw(::grpc::ClientContext* context, const ::ric::action::EventRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ric::action::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_SendEvent_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ric::action::EmptyResponse>* PublicAPI::Stub::PrepareAsyncSendEventRaw(::grpc::ClientContext* context, const ::ric::action::EventRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ric::action::EmptyResponse>::Create(channel_.get(), cq, rpcmethod_SendEvent_, context, request, false);
}

PublicAPI::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PublicAPI_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< PublicAPI::Service, ::ric::action::HistoryRequest, ::ric::action::HistoryResponse>(
          std::mem_fn(&PublicAPI::Service::History), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PublicAPI_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PublicAPI::Service, ::ric::action::EventRequest, ::ric::action::EmptyResponse>(
          std::mem_fn(&PublicAPI::Service::SendEvent), this)));
}

PublicAPI::Service::~Service() {
}

::grpc::Status PublicAPI::Service::History(::grpc::ServerContext* context, const ::ric::action::HistoryRequest* request, ::grpc::ServerWriter< ::ric::action::HistoryResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PublicAPI::Service::SendEvent(::grpc::ServerContext* context, const ::ric::action::EventRequest* request, ::ric::action::EmptyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ric
}  // namespace action

