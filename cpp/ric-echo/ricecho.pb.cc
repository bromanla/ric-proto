// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ric-echo/ricecho.proto

#include "ric-echo/ricecho.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace ric {
namespace echo {
class EchoRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EchoRequest> _instance;
} _EchoRequest_default_instance_;
class EchoReplyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EchoReply> _instance;
} _EchoReply_default_instance_;
}  // namespace echo
}  // namespace ric
static void InitDefaultsEchoRequest_ric_2decho_2fricecho_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ric::echo::_EchoRequest_default_instance_;
    new (ptr) ::ric::echo::EchoRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ric::echo::EchoRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_EchoRequest_ric_2decho_2fricecho_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsEchoRequest_ric_2decho_2fricecho_2eproto}, {}};

static void InitDefaultsEchoReply_ric_2decho_2fricecho_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ric::echo::_EchoReply_default_instance_;
    new (ptr) ::ric::echo::EchoReply();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ric::echo::EchoReply::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_EchoReply_ric_2decho_2fricecho_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsEchoReply_ric_2decho_2fricecho_2eproto}, {}};

void InitDefaults_ric_2decho_2fricecho_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_EchoRequest_ric_2decho_2fricecho_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_EchoReply_ric_2decho_2fricecho_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_ric_2decho_2fricecho_2eproto[2];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_ric_2decho_2fricecho_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_ric_2decho_2fricecho_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_ric_2decho_2fricecho_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ric::echo::EchoRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ric::echo::EchoRequest, name_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ric::echo::EchoReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ric::echo::EchoReply, message_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ric::echo::EchoRequest)},
  { 6, -1, sizeof(::ric::echo::EchoReply)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ric::echo::_EchoRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::ric::echo::_EchoReply_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_ric_2decho_2fricecho_2eproto = {
  {}, AddDescriptors_ric_2decho_2fricecho_2eproto, "ric-echo/ricecho.proto", schemas,
  file_default_instances, TableStruct_ric_2decho_2fricecho_2eproto::offsets,
  file_level_metadata_ric_2decho_2fricecho_2eproto, 2, file_level_enum_descriptors_ric_2decho_2fricecho_2eproto, file_level_service_descriptors_ric_2decho_2fricecho_2eproto,
};

const char descriptor_table_protodef_ric_2decho_2fricecho_2eproto[] =
  "\n\026ric-echo/ricecho.proto\022\010ric.echo\"\033\n\013Ec"
  "hoRequest\022\014\n\004name\030\001 \001(\t\"\034\n\tEchoReply\022\017\n\007"
  "message\030\001 \001(\t2>\n\004Echo\0226\n\010SayHello\022\025.ric."
  "echo.EchoRequest\032\023.ric.echo.EchoReplyB\024Z"
  "\022./ric-echo;ricechob\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_ric_2decho_2fricecho_2eproto = {
  false, InitDefaults_ric_2decho_2fricecho_2eproto, 
  descriptor_table_protodef_ric_2decho_2fricecho_2eproto,
  "ric-echo/ricecho.proto", &assign_descriptors_table_ric_2decho_2fricecho_2eproto, 187,
};

void AddDescriptors_ric_2decho_2fricecho_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_ric_2decho_2fricecho_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ric_2decho_2fricecho_2eproto = []() { AddDescriptors_ric_2decho_2fricecho_2eproto(); return true; }();
namespace ric {
namespace echo {

// ===================================================================

void EchoRequest::InitAsDefaultInstance() {
}
class EchoRequest::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EchoRequest::kNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EchoRequest::EchoRequest()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ric.echo.EchoRequest)
}
EchoRequest::EchoRequest(const EchoRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  // @@protoc_insertion_point(copy_constructor:ric.echo.EchoRequest)
}

void EchoRequest::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_EchoRequest_ric_2decho_2fricecho_2eproto.base);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

EchoRequest::~EchoRequest() {
  // @@protoc_insertion_point(destructor:ric.echo.EchoRequest)
  SharedDtor();
}

void EchoRequest::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void EchoRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const EchoRequest& EchoRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_EchoRequest_ric_2decho_2fricecho_2eproto.base);
  return *internal_default_instance();
}


void EchoRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:ric.echo.EchoRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* EchoRequest::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<EchoRequest*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("ric.echo.EchoRequest.name");
        object = msg->mutable_name();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool EchoRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ric.echo.EchoRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ric.echo.EchoRequest.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ric.echo.EchoRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ric.echo.EchoRequest)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void EchoRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ric.echo.EchoRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ric.echo.EchoRequest.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ric.echo.EchoRequest)
}

::google::protobuf::uint8* EchoRequest::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ric.echo.EchoRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ric.echo.EchoRequest.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ric.echo.EchoRequest)
  return target;
}

size_t EchoRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ric.echo.EchoRequest)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EchoRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ric.echo.EchoRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const EchoRequest* source =
      ::google::protobuf::DynamicCastToGenerated<EchoRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ric.echo.EchoRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ric.echo.EchoRequest)
    MergeFrom(*source);
  }
}

void EchoRequest::MergeFrom(const EchoRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ric.echo.EchoRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
}

void EchoRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ric.echo.EchoRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EchoRequest::CopyFrom(const EchoRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ric.echo.EchoRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EchoRequest::IsInitialized() const {
  return true;
}

void EchoRequest::Swap(EchoRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EchoRequest::InternalSwap(EchoRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata EchoRequest::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_ric_2decho_2fricecho_2eproto);
  return ::file_level_metadata_ric_2decho_2fricecho_2eproto[kIndexInFileMessages];
}


// ===================================================================

void EchoReply::InitAsDefaultInstance() {
}
class EchoReply::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EchoReply::kMessageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EchoReply::EchoReply()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ric.echo.EchoReply)
}
EchoReply::EchoReply(const EchoReply& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.message().size() > 0) {
    message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
  // @@protoc_insertion_point(copy_constructor:ric.echo.EchoReply)
}

void EchoReply::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_EchoReply_ric_2decho_2fricecho_2eproto.base);
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

EchoReply::~EchoReply() {
  // @@protoc_insertion_point(destructor:ric.echo.EchoReply)
  SharedDtor();
}

void EchoReply::SharedDtor() {
  message_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void EchoReply::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const EchoReply& EchoReply::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_EchoReply_ric_2decho_2fricecho_2eproto.base);
  return *internal_default_instance();
}


void EchoReply::Clear() {
// @@protoc_insertion_point(message_clear_start:ric.echo.EchoReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* EchoReply::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<EchoReply*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string message = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("ric.echo.EchoReply.message");
        object = msg->mutable_message();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool EchoReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ric.echo.EchoReply)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string message = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->message().data(), static_cast<int>(this->message().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ric.echo.EchoReply.message"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ric.echo.EchoReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ric.echo.EchoReply)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void EchoReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ric.echo.EchoReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string message = 1;
  if (this->message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->message().data(), static_cast<int>(this->message().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ric.echo.EchoReply.message");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->message(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ric.echo.EchoReply)
}

::google::protobuf::uint8* EchoReply::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ric.echo.EchoReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string message = 1;
  if (this->message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->message().data(), static_cast<int>(this->message().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ric.echo.EchoReply.message");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->message(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ric.echo.EchoReply)
  return target;
}

size_t EchoReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ric.echo.EchoReply)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string message = 1;
  if (this->message().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->message());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EchoReply::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ric.echo.EchoReply)
  GOOGLE_DCHECK_NE(&from, this);
  const EchoReply* source =
      ::google::protobuf::DynamicCastToGenerated<EchoReply>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ric.echo.EchoReply)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ric.echo.EchoReply)
    MergeFrom(*source);
  }
}

void EchoReply::MergeFrom(const EchoReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ric.echo.EchoReply)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.message().size() > 0) {

    message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
}

void EchoReply::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ric.echo.EchoReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EchoReply::CopyFrom(const EchoReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ric.echo.EchoReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EchoReply::IsInitialized() const {
  return true;
}

void EchoReply::Swap(EchoReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EchoReply::InternalSwap(EchoReply* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  message_.Swap(&other->message_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata EchoReply::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_ric_2decho_2fricecho_2eproto);
  return ::file_level_metadata_ric_2decho_2fricecho_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace echo
}  // namespace ric
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::ric::echo::EchoRequest* Arena::CreateMaybeMessage< ::ric::echo::EchoRequest >(Arena* arena) {
  return Arena::CreateInternal< ::ric::echo::EchoRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::ric::echo::EchoReply* Arena::CreateMaybeMessage< ::ric::echo::EchoReply >(Arena* arena) {
  return Arena::CreateInternal< ::ric::echo::EchoReply >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
