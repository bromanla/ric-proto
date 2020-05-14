// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ric-smpp/ric-smpp.proto
#ifndef GRPC_ric_2dsmpp_2fric_2dsmpp_2eproto__INCLUDED
#define GRPC_ric_2dsmpp_2fric_2dsmpp_2eproto__INCLUDED

#include "ric-smpp/ric-smpp.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace ric {
namespace smpp {

class SMPP final {
 public:
  static constexpr char const* service_full_name() {
    return "ric.smpp.SMPP";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Send(::grpc::ClientContext* context, const ::ric::smpp::SendRequest& request, ::ric::smpp::SendResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::smpp::SendResponse>> AsyncSend(::grpc::ClientContext* context, const ::ric::smpp::SendRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::smpp::SendResponse>>(AsyncSendRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::smpp::SendResponse>> PrepareAsyncSend(::grpc::ClientContext* context, const ::ric::smpp::SendRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::smpp::SendResponse>>(PrepareAsyncSendRaw(context, request, cq));
    }
    virtual ::grpc::Status Status(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest& request, ::ric::smpp::StatusResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::smpp::StatusResponse>> AsyncStatus(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::smpp::StatusResponse>>(AsyncStatusRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::smpp::StatusResponse>> PrepareAsyncStatus(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ric::smpp::StatusResponse>>(PrepareAsyncStatusRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void Send(::grpc::ClientContext* context, const ::ric::smpp::SendRequest* request, ::ric::smpp::SendResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Send(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::smpp::SendResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void Send(::grpc::ClientContext* context, const ::ric::smpp::SendRequest* request, ::ric::smpp::SendResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void Send(::grpc::ClientContext* context, const ::ric::smpp::SendRequest* request, ::ric::smpp::SendResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void Send(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::smpp::SendResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void Send(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::smpp::SendResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      virtual void Status(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest* request, ::ric::smpp::StatusResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Status(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::smpp::StatusResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void Status(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest* request, ::ric::smpp::StatusResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void Status(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest* request, ::ric::smpp::StatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void Status(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::smpp::StatusResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void Status(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::smpp::StatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ric::smpp::SendResponse>* AsyncSendRaw(::grpc::ClientContext* context, const ::ric::smpp::SendRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ric::smpp::SendResponse>* PrepareAsyncSendRaw(::grpc::ClientContext* context, const ::ric::smpp::SendRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ric::smpp::StatusResponse>* AsyncStatusRaw(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ric::smpp::StatusResponse>* PrepareAsyncStatusRaw(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Send(::grpc::ClientContext* context, const ::ric::smpp::SendRequest& request, ::ric::smpp::SendResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::smpp::SendResponse>> AsyncSend(::grpc::ClientContext* context, const ::ric::smpp::SendRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::smpp::SendResponse>>(AsyncSendRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::smpp::SendResponse>> PrepareAsyncSend(::grpc::ClientContext* context, const ::ric::smpp::SendRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::smpp::SendResponse>>(PrepareAsyncSendRaw(context, request, cq));
    }
    ::grpc::Status Status(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest& request, ::ric::smpp::StatusResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::smpp::StatusResponse>> AsyncStatus(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::smpp::StatusResponse>>(AsyncStatusRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::smpp::StatusResponse>> PrepareAsyncStatus(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ric::smpp::StatusResponse>>(PrepareAsyncStatusRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void Send(::grpc::ClientContext* context, const ::ric::smpp::SendRequest* request, ::ric::smpp::SendResponse* response, std::function<void(::grpc::Status)>) override;
      void Send(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::smpp::SendResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void Send(::grpc::ClientContext* context, const ::ric::smpp::SendRequest* request, ::ric::smpp::SendResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void Send(::grpc::ClientContext* context, const ::ric::smpp::SendRequest* request, ::ric::smpp::SendResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void Send(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::smpp::SendResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void Send(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::smpp::SendResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void Status(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest* request, ::ric::smpp::StatusResponse* response, std::function<void(::grpc::Status)>) override;
      void Status(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::smpp::StatusResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void Status(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest* request, ::ric::smpp::StatusResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void Status(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest* request, ::ric::smpp::StatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void Status(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::smpp::StatusResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void Status(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ric::smpp::StatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
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
    ::grpc::ClientAsyncResponseReader< ::ric::smpp::SendResponse>* AsyncSendRaw(::grpc::ClientContext* context, const ::ric::smpp::SendRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ric::smpp::SendResponse>* PrepareAsyncSendRaw(::grpc::ClientContext* context, const ::ric::smpp::SendRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ric::smpp::StatusResponse>* AsyncStatusRaw(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ric::smpp::StatusResponse>* PrepareAsyncStatusRaw(::grpc::ClientContext* context, const ::ric::smpp::StatusRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Send_;
    const ::grpc::internal::RpcMethod rpcmethod_Status_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Send(::grpc::ServerContext* context, const ::ric::smpp::SendRequest* request, ::ric::smpp::SendResponse* response);
    virtual ::grpc::Status Status(::grpc::ServerContext* context, const ::ric::smpp::StatusRequest* request, ::ric::smpp::StatusResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Send() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Send(::grpc::ServerContext* /*context*/, const ::ric::smpp::SendRequest* /*request*/, ::ric::smpp::SendResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSend(::grpc::ServerContext* context, ::ric::smpp::SendRequest* request, ::grpc::ServerAsyncResponseWriter< ::ric::smpp::SendResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Status : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Status() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Status() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Status(::grpc::ServerContext* /*context*/, const ::ric::smpp::StatusRequest* /*request*/, ::ric::smpp::StatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStatus(::grpc::ServerContext* context, ::ric::smpp::StatusRequest* request, ::grpc::ServerAsyncResponseWriter< ::ric::smpp::StatusResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Send<WithAsyncMethod_Status<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_Send() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::ric::smpp::SendRequest, ::ric::smpp::SendResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::ric::smpp::SendRequest* request, ::ric::smpp::SendResponse* response) { return this->Send(context, request, response); }));}
    void SetMessageAllocatorFor_Send(
        ::grpc::experimental::MessageAllocator< ::ric::smpp::SendRequest, ::ric::smpp::SendResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::ric::smpp::SendRequest, ::ric::smpp::SendResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_Send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Send(::grpc::ServerContext* /*context*/, const ::ric::smpp::SendRequest* /*request*/, ::ric::smpp::SendResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Send(
      ::grpc::CallbackServerContext* /*context*/, const ::ric::smpp::SendRequest* /*request*/, ::ric::smpp::SendResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Send(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::ric::smpp::SendRequest* /*request*/, ::ric::smpp::SendResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Status : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_Status() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::ric::smpp::StatusRequest, ::ric::smpp::StatusResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::ric::smpp::StatusRequest* request, ::ric::smpp::StatusResponse* response) { return this->Status(context, request, response); }));}
    void SetMessageAllocatorFor_Status(
        ::grpc::experimental::MessageAllocator< ::ric::smpp::StatusRequest, ::ric::smpp::StatusResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::ric::smpp::StatusRequest, ::ric::smpp::StatusResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_Status() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Status(::grpc::ServerContext* /*context*/, const ::ric::smpp::StatusRequest* /*request*/, ::ric::smpp::StatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Status(
      ::grpc::CallbackServerContext* /*context*/, const ::ric::smpp::StatusRequest* /*request*/, ::ric::smpp::StatusResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Status(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::ric::smpp::StatusRequest* /*request*/, ::ric::smpp::StatusResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_Send<ExperimentalWithCallbackMethod_Status<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_Send<ExperimentalWithCallbackMethod_Status<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Send() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Send(::grpc::ServerContext* /*context*/, const ::ric::smpp::SendRequest* /*request*/, ::ric::smpp::SendResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Status : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Status() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Status() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Status(::grpc::ServerContext* /*context*/, const ::ric::smpp::StatusRequest* /*request*/, ::ric::smpp::StatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Send() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Send(::grpc::ServerContext* /*context*/, const ::ric::smpp::SendRequest* /*request*/, ::ric::smpp::SendResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSend(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Status : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Status() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Status() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Status(::grpc::ServerContext* /*context*/, const ::ric::smpp::StatusRequest* /*request*/, ::ric::smpp::StatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStatus(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_Send() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Send(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_Send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Send(::grpc::ServerContext* /*context*/, const ::ric::smpp::SendRequest* /*request*/, ::ric::smpp::SendResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Send(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Send(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Status : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_Status() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(1,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Status(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_Status() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Status(::grpc::ServerContext* /*context*/, const ::ric::smpp::StatusRequest* /*request*/, ::ric::smpp::StatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Status(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Status(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Send() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::ric::smpp::SendRequest, ::ric::smpp::SendResponse>(std::bind(&WithStreamedUnaryMethod_Send<BaseClass>::StreamedSend, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Send(::grpc::ServerContext* /*context*/, const ::ric::smpp::SendRequest* /*request*/, ::ric::smpp::SendResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSend(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ric::smpp::SendRequest,::ric::smpp::SendResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Status : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Status() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::ric::smpp::StatusRequest, ::ric::smpp::StatusResponse>(std::bind(&WithStreamedUnaryMethod_Status<BaseClass>::StreamedStatus, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Status() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Status(::grpc::ServerContext* /*context*/, const ::ric::smpp::StatusRequest* /*request*/, ::ric::smpp::StatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedStatus(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ric::smpp::StatusRequest,::ric::smpp::StatusResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Send<WithStreamedUnaryMethod_Status<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Send<WithStreamedUnaryMethod_Status<Service > > StreamedService;
};

}  // namespace smpp
}  // namespace ric


#endif  // GRPC_ric_2dsmpp_2fric_2dsmpp_2eproto__INCLUDED
