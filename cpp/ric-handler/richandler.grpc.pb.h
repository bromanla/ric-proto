// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ric-handler/richandler.proto
#ifndef GRPC_ric_2dhandler_2frichandler_2eproto__INCLUDED
#define GRPC_ric_2dhandler_2frichandler_2eproto__INCLUDED

#include "ric-handler/richandler.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace ric {
namespace handler {

class Service final {
 public:
  static constexpr char const* service_full_name() {
    return "ric.handler.Service";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Exec(::grpc::ClientContext* context, const ::ric::handler::ExecRequest& request, ::ric::handler::ExecResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::ExecResponse>> AsyncExec(::grpc::ClientContext* context, const ::ric::handler::ExecRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::ExecResponse>>(AsyncExecRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::ExecResponse>> PrepareAsyncExec(::grpc::ClientContext* context, const ::ric::handler::ExecRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::ExecResponse>>(PrepareAsyncExecRaw(context, request, cq));
    }
    virtual ::grpc::Status GetObjectInfo(::grpc::ClientContext* context, const ::ric::handler::GetObjectInfoRequest& request, ::ric::handler::GetObjectInfoResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::GetObjectInfoResponse>> AsyncGetObjectInfo(::grpc::ClientContext* context, const ::ric::handler::GetObjectInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::GetObjectInfoResponse>>(AsyncGetObjectInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::GetObjectInfoResponse>> PrepareAsyncGetObjectInfo(::grpc::ClientContext* context, const ::ric::handler::GetObjectInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::GetObjectInfoResponse>>(PrepareAsyncGetObjectInfoRaw(context, request, cq));
    }
    virtual ::grpc::Status ForceLinksUpdate(::grpc::ClientContext* context, const ::ric::handler::ForceLinksUpdateRequest& request, ::ric::handler::EmptyResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::EmptyResponse>> AsyncForceLinksUpdate(::grpc::ClientContext* context, const ::ric::handler::ForceLinksUpdateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::EmptyResponse>>(AsyncForceLinksUpdateRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::EmptyResponse>> PrepareAsyncForceLinksUpdate(::grpc::ClientContext* context, const ::ric::handler::ForceLinksUpdateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::EmptyResponse>>(PrepareAsyncForceLinksUpdateRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void Exec(::grpc::ClientContext* context, const ::ric::handler::ExecRequest* request, ::ric::handler::ExecResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Exec(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::handler::ExecResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetObjectInfo(::grpc::ClientContext* context, const ::ric::handler::GetObjectInfoRequest* request, ::ric::handler::GetObjectInfoResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetObjectInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::handler::GetObjectInfoResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void ForceLinksUpdate(::grpc::ClientContext* context, const ::ric::handler::ForceLinksUpdateRequest* request, ::ric::handler::EmptyResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void ForceLinksUpdate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::handler::EmptyResponse* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::ExecResponse>* AsyncExecRaw(::grpc::ClientContext* context, const ::ric::handler::ExecRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::ExecResponse>* PrepareAsyncExecRaw(::grpc::ClientContext* context, const ::ric::handler::ExecRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::GetObjectInfoResponse>* AsyncGetObjectInfoRaw(::grpc::ClientContext* context, const ::ric::handler::GetObjectInfoRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::GetObjectInfoResponse>* PrepareAsyncGetObjectInfoRaw(::grpc::ClientContext* context, const ::ric::handler::GetObjectInfoRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::EmptyResponse>* AsyncForceLinksUpdateRaw(::grpc::ClientContext* context, const ::ric::handler::ForceLinksUpdateRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ric::handler::EmptyResponse>* PrepareAsyncForceLinksUpdateRaw(::grpc::ClientContext* context, const ::ric::handler::ForceLinksUpdateRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Exec(::grpc::ClientContext* context, const ::ric::handler::ExecRequest& request, ::ric::handler::ExecResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::handler::ExecResponse>> AsyncExec(::grpc::ClientContext* context, const ::ric::handler::ExecRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::handler::ExecResponse>>(AsyncExecRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::handler::ExecResponse>> PrepareAsyncExec(::grpc::ClientContext* context, const ::ric::handler::ExecRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::handler::ExecResponse>>(PrepareAsyncExecRaw(context, request, cq));
    }
    ::grpc::Status GetObjectInfo(::grpc::ClientContext* context, const ::ric::handler::GetObjectInfoRequest& request, ::ric::handler::GetObjectInfoResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::handler::GetObjectInfoResponse>> AsyncGetObjectInfo(::grpc::ClientContext* context, const ::ric::handler::GetObjectInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::handler::GetObjectInfoResponse>>(AsyncGetObjectInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::handler::GetObjectInfoResponse>> PrepareAsyncGetObjectInfo(::grpc::ClientContext* context, const ::ric::handler::GetObjectInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::handler::GetObjectInfoResponse>>(PrepareAsyncGetObjectInfoRaw(context, request, cq));
    }
    ::grpc::Status ForceLinksUpdate(::grpc::ClientContext* context, const ::ric::handler::ForceLinksUpdateRequest& request, ::ric::handler::EmptyResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::handler::EmptyResponse>> AsyncForceLinksUpdate(::grpc::ClientContext* context, const ::ric::handler::ForceLinksUpdateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::handler::EmptyResponse>>(AsyncForceLinksUpdateRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::handler::EmptyResponse>> PrepareAsyncForceLinksUpdate(::grpc::ClientContext* context, const ::ric::handler::ForceLinksUpdateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::handler::EmptyResponse>>(PrepareAsyncForceLinksUpdateRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void Exec(::grpc::ClientContext* context, const ::ric::handler::ExecRequest* request, ::ric::handler::ExecResponse* response, std::function<void(::grpc::Status)>) override;
      void Exec(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::handler::ExecResponse* response, std::function<void(::grpc::Status)>) override;
      void GetObjectInfo(::grpc::ClientContext* context, const ::ric::handler::GetObjectInfoRequest* request, ::ric::handler::GetObjectInfoResponse* response, std::function<void(::grpc::Status)>) override;
      void GetObjectInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::handler::GetObjectInfoResponse* response, std::function<void(::grpc::Status)>) override;
      void ForceLinksUpdate(::grpc::ClientContext* context, const ::ric::handler::ForceLinksUpdateRequest* request, ::ric::handler::EmptyResponse* response, std::function<void(::grpc::Status)>) override;
      void ForceLinksUpdate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::handler::EmptyResponse* response, std::function<void(::grpc::Status)>) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::ric::handler::ExecResponse>* AsyncExecRaw(::grpc::ClientContext* context, const ::ric::handler::ExecRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ric::handler::ExecResponse>* PrepareAsyncExecRaw(::grpc::ClientContext* context, const ::ric::handler::ExecRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ric::handler::GetObjectInfoResponse>* AsyncGetObjectInfoRaw(::grpc::ClientContext* context, const ::ric::handler::GetObjectInfoRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ric::handler::GetObjectInfoResponse>* PrepareAsyncGetObjectInfoRaw(::grpc::ClientContext* context, const ::ric::handler::GetObjectInfoRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ric::handler::EmptyResponse>* AsyncForceLinksUpdateRaw(::grpc::ClientContext* context, const ::ric::handler::ForceLinksUpdateRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ric::handler::EmptyResponse>* PrepareAsyncForceLinksUpdateRaw(::grpc::ClientContext* context, const ::ric::handler::ForceLinksUpdateRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Exec_;
    const ::grpc::internal::RpcMethod rpcmethod_GetObjectInfo_;
    const ::grpc::internal::RpcMethod rpcmethod_ForceLinksUpdate_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Exec(::grpc::ServerContext* context, const ::ric::handler::ExecRequest* request, ::ric::handler::ExecResponse* response);
    virtual ::grpc::Status GetObjectInfo(::grpc::ServerContext* context, const ::ric::handler::GetObjectInfoRequest* request, ::ric::handler::GetObjectInfoResponse* response);
    virtual ::grpc::Status ForceLinksUpdate(::grpc::ServerContext* context, const ::ric::handler::ForceLinksUpdateRequest* request, ::ric::handler::EmptyResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Exec : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Exec() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Exec() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Exec(::grpc::ServerContext* context, const ::ric::handler::ExecRequest* request, ::ric::handler::ExecResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestExec(::grpc::ServerContext* context, ::ric::handler::ExecRequest* request, ::grpc::ServerAsyncResponseWriter< ::ric::handler::ExecResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetObjectInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetObjectInfo() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetObjectInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetObjectInfo(::grpc::ServerContext* context, const ::ric::handler::GetObjectInfoRequest* request, ::ric::handler::GetObjectInfoResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetObjectInfo(::grpc::ServerContext* context, ::ric::handler::GetObjectInfoRequest* request, ::grpc::ServerAsyncResponseWriter< ::ric::handler::GetObjectInfoResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ForceLinksUpdate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ForceLinksUpdate() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_ForceLinksUpdate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ForceLinksUpdate(::grpc::ServerContext* context, const ::ric::handler::ForceLinksUpdateRequest* request, ::ric::handler::EmptyResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestForceLinksUpdate(::grpc::ServerContext* context, ::ric::handler::ForceLinksUpdateRequest* request, ::grpc::ServerAsyncResponseWriter< ::ric::handler::EmptyResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Exec<WithAsyncMethod_GetObjectInfo<WithAsyncMethod_ForceLinksUpdate<Service > > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Exec : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_Exec() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::ric::handler::ExecRequest, ::ric::handler::ExecResponse>(
          [this](::grpc::ServerContext* context,
                 const ::ric::handler::ExecRequest* request,
                 ::ric::handler::ExecResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->Exec(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_Exec() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Exec(::grpc::ServerContext* context, const ::ric::handler::ExecRequest* request, ::ric::handler::ExecResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void Exec(::grpc::ServerContext* context, const ::ric::handler::ExecRequest* request, ::ric::handler::ExecResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetObjectInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_GetObjectInfo() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::ric::handler::GetObjectInfoRequest, ::ric::handler::GetObjectInfoResponse>(
          [this](::grpc::ServerContext* context,
                 const ::ric::handler::GetObjectInfoRequest* request,
                 ::ric::handler::GetObjectInfoResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->GetObjectInfo(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_GetObjectInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetObjectInfo(::grpc::ServerContext* context, const ::ric::handler::GetObjectInfoRequest* request, ::ric::handler::GetObjectInfoResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void GetObjectInfo(::grpc::ServerContext* context, const ::ric::handler::GetObjectInfoRequest* request, ::ric::handler::GetObjectInfoResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_ForceLinksUpdate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_ForceLinksUpdate() {
      ::grpc::Service::experimental().MarkMethodCallback(2,
        new ::grpc::internal::CallbackUnaryHandler< ::ric::handler::ForceLinksUpdateRequest, ::ric::handler::EmptyResponse>(
          [this](::grpc::ServerContext* context,
                 const ::ric::handler::ForceLinksUpdateRequest* request,
                 ::ric::handler::EmptyResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->ForceLinksUpdate(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_ForceLinksUpdate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ForceLinksUpdate(::grpc::ServerContext* context, const ::ric::handler::ForceLinksUpdateRequest* request, ::ric::handler::EmptyResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void ForceLinksUpdate(::grpc::ServerContext* context, const ::ric::handler::ForceLinksUpdateRequest* request, ::ric::handler::EmptyResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_Exec<ExperimentalWithCallbackMethod_GetObjectInfo<ExperimentalWithCallbackMethod_ForceLinksUpdate<Service > > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Exec : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Exec() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Exec() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Exec(::grpc::ServerContext* context, const ::ric::handler::ExecRequest* request, ::ric::handler::ExecResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetObjectInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetObjectInfo() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetObjectInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetObjectInfo(::grpc::ServerContext* context, const ::ric::handler::GetObjectInfoRequest* request, ::ric::handler::GetObjectInfoResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ForceLinksUpdate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ForceLinksUpdate() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_ForceLinksUpdate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ForceLinksUpdate(::grpc::ServerContext* context, const ::ric::handler::ForceLinksUpdateRequest* request, ::ric::handler::EmptyResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Exec : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_Exec() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Exec() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Exec(::grpc::ServerContext* context, const ::ric::handler::ExecRequest* request, ::ric::handler::ExecResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestExec(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetObjectInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_GetObjectInfo() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_GetObjectInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetObjectInfo(::grpc::ServerContext* context, const ::ric::handler::GetObjectInfoRequest* request, ::ric::handler::GetObjectInfoResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetObjectInfo(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_ForceLinksUpdate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_ForceLinksUpdate() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_ForceLinksUpdate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ForceLinksUpdate(::grpc::ServerContext* context, const ::ric::handler::ForceLinksUpdateRequest* request, ::ric::handler::EmptyResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestForceLinksUpdate(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Exec : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_Exec() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->Exec(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_Exec() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Exec(::grpc::ServerContext* context, const ::ric::handler::ExecRequest* request, ::ric::handler::ExecResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void Exec(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetObjectInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_GetObjectInfo() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->GetObjectInfo(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_GetObjectInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetObjectInfo(::grpc::ServerContext* context, const ::ric::handler::GetObjectInfoRequest* request, ::ric::handler::GetObjectInfoResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void GetObjectInfo(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_ForceLinksUpdate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_ForceLinksUpdate() {
      ::grpc::Service::experimental().MarkMethodRawCallback(2,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->ForceLinksUpdate(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_ForceLinksUpdate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ForceLinksUpdate(::grpc::ServerContext* context, const ::ric::handler::ForceLinksUpdateRequest* request, ::ric::handler::EmptyResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void ForceLinksUpdate(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Exec : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Exec() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::ric::handler::ExecRequest, ::ric::handler::ExecResponse>(std::bind(&WithStreamedUnaryMethod_Exec<BaseClass>::StreamedExec, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Exec() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Exec(::grpc::ServerContext* context, const ::ric::handler::ExecRequest* request, ::ric::handler::ExecResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedExec(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ric::handler::ExecRequest,::ric::handler::ExecResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetObjectInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_GetObjectInfo() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::ric::handler::GetObjectInfoRequest, ::ric::handler::GetObjectInfoResponse>(std::bind(&WithStreamedUnaryMethod_GetObjectInfo<BaseClass>::StreamedGetObjectInfo, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetObjectInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetObjectInfo(::grpc::ServerContext* context, const ::ric::handler::GetObjectInfoRequest* request, ::ric::handler::GetObjectInfoResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetObjectInfo(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ric::handler::GetObjectInfoRequest,::ric::handler::GetObjectInfoResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ForceLinksUpdate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_ForceLinksUpdate() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler< ::ric::handler::ForceLinksUpdateRequest, ::ric::handler::EmptyResponse>(std::bind(&WithStreamedUnaryMethod_ForceLinksUpdate<BaseClass>::StreamedForceLinksUpdate, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_ForceLinksUpdate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ForceLinksUpdate(::grpc::ServerContext* context, const ::ric::handler::ForceLinksUpdateRequest* request, ::ric::handler::EmptyResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedForceLinksUpdate(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ric::handler::ForceLinksUpdateRequest,::ric::handler::EmptyResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Exec<WithStreamedUnaryMethod_GetObjectInfo<WithStreamedUnaryMethod_ForceLinksUpdate<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Exec<WithStreamedUnaryMethod_GetObjectInfo<WithStreamedUnaryMethod_ForceLinksUpdate<Service > > > StreamedService;
};

}  // namespace handler
}  // namespace ric


#endif  // GRPC_ric_2dhandler_2frichandler_2eproto__INCLUDED