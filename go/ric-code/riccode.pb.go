// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.27.1-devel
// 	protoc        v3.7.0
// source: ric-code/riccode.proto

package riccode

import (
	context "context"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

type TranspileRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Id   string           `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	Code string           `protobuf:"bytes,2,opt,name=code,proto3" json:"code,omitempty"`
	Main string           `protobuf:"bytes,3,opt,name=main,proto3" json:"main,omitempty"`
	Defs []*LibDefinition `protobuf:"bytes,4,rep,name=defs,proto3" json:"defs,omitempty"`
}

func (x *TranspileRequest) Reset() {
	*x = TranspileRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_ric_code_riccode_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *TranspileRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*TranspileRequest) ProtoMessage() {}

func (x *TranspileRequest) ProtoReflect() protoreflect.Message {
	mi := &file_ric_code_riccode_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use TranspileRequest.ProtoReflect.Descriptor instead.
func (*TranspileRequest) Descriptor() ([]byte, []int) {
	return file_ric_code_riccode_proto_rawDescGZIP(), []int{0}
}

func (x *TranspileRequest) GetId() string {
	if x != nil {
		return x.Id
	}
	return ""
}

func (x *TranspileRequest) GetCode() string {
	if x != nil {
		return x.Code
	}
	return ""
}

func (x *TranspileRequest) GetMain() string {
	if x != nil {
		return x.Main
	}
	return ""
}

func (x *TranspileRequest) GetDefs() []*LibDefinition {
	if x != nil {
		return x.Defs
	}
	return nil
}

type TranspileResponse struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	CodeEs5 string        `protobuf:"bytes,1,opt,name=code_es5,json=codeEs5,proto3" json:"code_es5,omitempty"`
	Libs    []*LibRequest `protobuf:"bytes,2,rep,name=libs,proto3" json:"libs,omitempty"`
	Input   []*VarDecl    `protobuf:"bytes,3,rep,name=input,proto3" json:"input,omitempty"`
	Output  []*VarDecl    `protobuf:"bytes,4,rep,name=output,proto3" json:"output,omitempty"`
	Refs    []*InputRef   `protobuf:"bytes,5,rep,name=refs,proto3" json:"refs,omitempty"`
}

func (x *TranspileResponse) Reset() {
	*x = TranspileResponse{}
	if protoimpl.UnsafeEnabled {
		mi := &file_ric_code_riccode_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *TranspileResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*TranspileResponse) ProtoMessage() {}

func (x *TranspileResponse) ProtoReflect() protoreflect.Message {
	mi := &file_ric_code_riccode_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use TranspileResponse.ProtoReflect.Descriptor instead.
func (*TranspileResponse) Descriptor() ([]byte, []int) {
	return file_ric_code_riccode_proto_rawDescGZIP(), []int{1}
}

func (x *TranspileResponse) GetCodeEs5() string {
	if x != nil {
		return x.CodeEs5
	}
	return ""
}

func (x *TranspileResponse) GetLibs() []*LibRequest {
	if x != nil {
		return x.Libs
	}
	return nil
}

func (x *TranspileResponse) GetInput() []*VarDecl {
	if x != nil {
		return x.Input
	}
	return nil
}

func (x *TranspileResponse) GetOutput() []*VarDecl {
	if x != nil {
		return x.Output
	}
	return nil
}

func (x *TranspileResponse) GetRefs() []*InputRef {
	if x != nil {
		return x.Refs
	}
	return nil
}

type InputRef struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Name string     `protobuf:"bytes,1,opt,name=name,proto3" json:"name,omitempty"`
	Vars []*VarDecl `protobuf:"bytes,2,rep,name=vars,proto3" json:"vars,omitempty"`
}

func (x *InputRef) Reset() {
	*x = InputRef{}
	if protoimpl.UnsafeEnabled {
		mi := &file_ric_code_riccode_proto_msgTypes[2]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *InputRef) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*InputRef) ProtoMessage() {}

func (x *InputRef) ProtoReflect() protoreflect.Message {
	mi := &file_ric_code_riccode_proto_msgTypes[2]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use InputRef.ProtoReflect.Descriptor instead.
func (*InputRef) Descriptor() ([]byte, []int) {
	return file_ric_code_riccode_proto_rawDescGZIP(), []int{2}
}

func (x *InputRef) GetName() string {
	if x != nil {
		return x.Name
	}
	return ""
}

func (x *InputRef) GetVars() []*VarDecl {
	if x != nil {
		return x.Vars
	}
	return nil
}

type VarDecl struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Name    string `protobuf:"bytes,1,opt,name=name,proto3" json:"name,omitempty"`
	Type    string `protobuf:"bytes,2,opt,name=type,proto3" json:"type,omitempty"`
	Default string `protobuf:"bytes,3,opt,name=default,proto3" json:"default,omitempty"`
}

func (x *VarDecl) Reset() {
	*x = VarDecl{}
	if protoimpl.UnsafeEnabled {
		mi := &file_ric_code_riccode_proto_msgTypes[3]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *VarDecl) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*VarDecl) ProtoMessage() {}

func (x *VarDecl) ProtoReflect() protoreflect.Message {
	mi := &file_ric_code_riccode_proto_msgTypes[3]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use VarDecl.ProtoReflect.Descriptor instead.
func (*VarDecl) Descriptor() ([]byte, []int) {
	return file_ric_code_riccode_proto_rawDescGZIP(), []int{3}
}

func (x *VarDecl) GetName() string {
	if x != nil {
		return x.Name
	}
	return ""
}

func (x *VarDecl) GetType() string {
	if x != nil {
		return x.Type
	}
	return ""
}

func (x *VarDecl) GetDefault() string {
	if x != nil {
		return x.Default
	}
	return ""
}

type LibDefinition struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Name string `protobuf:"bytes,1,opt,name=name,proto3" json:"name,omitempty"`
	Def  string `protobuf:"bytes,2,opt,name=def,proto3" json:"def,omitempty"`
}

func (x *LibDefinition) Reset() {
	*x = LibDefinition{}
	if protoimpl.UnsafeEnabled {
		mi := &file_ric_code_riccode_proto_msgTypes[4]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *LibDefinition) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*LibDefinition) ProtoMessage() {}

func (x *LibDefinition) ProtoReflect() protoreflect.Message {
	mi := &file_ric_code_riccode_proto_msgTypes[4]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use LibDefinition.ProtoReflect.Descriptor instead.
func (*LibDefinition) Descriptor() ([]byte, []int) {
	return file_ric_code_riccode_proto_rawDescGZIP(), []int{4}
}

func (x *LibDefinition) GetName() string {
	if x != nil {
		return x.Name
	}
	return ""
}

func (x *LibDefinition) GetDef() string {
	if x != nil {
		return x.Def
	}
	return ""
}

type LibRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Name   string `protobuf:"bytes,1,opt,name=name,proto3" json:"name,omitempty"`
	Semver string `protobuf:"bytes,2,opt,name=semver,proto3" json:"semver,omitempty"`
	Local  bool   `protobuf:"varint,3,opt,name=local,proto3" json:"local,omitempty"`
}

func (x *LibRequest) Reset() {
	*x = LibRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_ric_code_riccode_proto_msgTypes[5]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *LibRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*LibRequest) ProtoMessage() {}

func (x *LibRequest) ProtoReflect() protoreflect.Message {
	mi := &file_ric_code_riccode_proto_msgTypes[5]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use LibRequest.ProtoReflect.Descriptor instead.
func (*LibRequest) Descriptor() ([]byte, []int) {
	return file_ric_code_riccode_proto_rawDescGZIP(), []int{5}
}

func (x *LibRequest) GetName() string {
	if x != nil {
		return x.Name
	}
	return ""
}

func (x *LibRequest) GetSemver() string {
	if x != nil {
		return x.Semver
	}
	return ""
}

func (x *LibRequest) GetLocal() bool {
	if x != nil {
		return x.Local
	}
	return false
}

type BundleEsRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Id   string `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	Code string `protobuf:"bytes,2,opt,name=code,proto3" json:"code,omitempty"`
	Main string `protobuf:"bytes,3,opt,name=main,proto3" json:"main,omitempty"`
}

func (x *BundleEsRequest) Reset() {
	*x = BundleEsRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_ric_code_riccode_proto_msgTypes[6]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *BundleEsRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*BundleEsRequest) ProtoMessage() {}

func (x *BundleEsRequest) ProtoReflect() protoreflect.Message {
	mi := &file_ric_code_riccode_proto_msgTypes[6]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use BundleEsRequest.ProtoReflect.Descriptor instead.
func (*BundleEsRequest) Descriptor() ([]byte, []int) {
	return file_ric_code_riccode_proto_rawDescGZIP(), []int{6}
}

func (x *BundleEsRequest) GetId() string {
	if x != nil {
		return x.Id
	}
	return ""
}

func (x *BundleEsRequest) GetCode() string {
	if x != nil {
		return x.Code
	}
	return ""
}

func (x *BundleEsRequest) GetMain() string {
	if x != nil {
		return x.Main
	}
	return ""
}

type BundleEsProgress struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Message string `protobuf:"bytes,1,opt,name=message,proto3" json:"message,omitempty"`
	Result  string `protobuf:"bytes,2,opt,name=result,proto3" json:"result,omitempty"`
	Error   string `protobuf:"bytes,3,opt,name=error,proto3" json:"error,omitempty"`
}

func (x *BundleEsProgress) Reset() {
	*x = BundleEsProgress{}
	if protoimpl.UnsafeEnabled {
		mi := &file_ric_code_riccode_proto_msgTypes[7]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *BundleEsProgress) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*BundleEsProgress) ProtoMessage() {}

func (x *BundleEsProgress) ProtoReflect() protoreflect.Message {
	mi := &file_ric_code_riccode_proto_msgTypes[7]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use BundleEsProgress.ProtoReflect.Descriptor instead.
func (*BundleEsProgress) Descriptor() ([]byte, []int) {
	return file_ric_code_riccode_proto_rawDescGZIP(), []int{7}
}

func (x *BundleEsProgress) GetMessage() string {
	if x != nil {
		return x.Message
	}
	return ""
}

func (x *BundleEsProgress) GetResult() string {
	if x != nil {
		return x.Result
	}
	return ""
}

func (x *BundleEsProgress) GetError() string {
	if x != nil {
		return x.Error
	}
	return ""
}

type ParseConditionRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Id      string            `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	Code    string            `protobuf:"bytes,2,opt,name=code,proto3" json:"code,omitempty"`
	Aliases map[string]string `protobuf:"bytes,3,rep,name=aliases,proto3" json:"aliases,omitempty" protobuf_key:"bytes,1,opt,name=key,proto3" protobuf_val:"bytes,2,opt,name=value,proto3"`
}

func (x *ParseConditionRequest) Reset() {
	*x = ParseConditionRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_ric_code_riccode_proto_msgTypes[8]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ParseConditionRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ParseConditionRequest) ProtoMessage() {}

func (x *ParseConditionRequest) ProtoReflect() protoreflect.Message {
	mi := &file_ric_code_riccode_proto_msgTypes[8]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ParseConditionRequest.ProtoReflect.Descriptor instead.
func (*ParseConditionRequest) Descriptor() ([]byte, []int) {
	return file_ric_code_riccode_proto_rawDescGZIP(), []int{8}
}

func (x *ParseConditionRequest) GetId() string {
	if x != nil {
		return x.Id
	}
	return ""
}

func (x *ParseConditionRequest) GetCode() string {
	if x != nil {
		return x.Code
	}
	return ""
}

func (x *ParseConditionRequest) GetAliases() map[string]string {
	if x != nil {
		return x.Aliases
	}
	return nil
}

type ParseConditionResponse struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Compiled string `protobuf:"bytes,1,opt,name=compiled,proto3" json:"compiled,omitempty"`
}

func (x *ParseConditionResponse) Reset() {
	*x = ParseConditionResponse{}
	if protoimpl.UnsafeEnabled {
		mi := &file_ric_code_riccode_proto_msgTypes[9]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ParseConditionResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ParseConditionResponse) ProtoMessage() {}

func (x *ParseConditionResponse) ProtoReflect() protoreflect.Message {
	mi := &file_ric_code_riccode_proto_msgTypes[9]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ParseConditionResponse.ProtoReflect.Descriptor instead.
func (*ParseConditionResponse) Descriptor() ([]byte, []int) {
	return file_ric_code_riccode_proto_rawDescGZIP(), []int{9}
}

func (x *ParseConditionResponse) GetCompiled() string {
	if x != nil {
		return x.Compiled
	}
	return ""
}

var File_ric_code_riccode_proto protoreflect.FileDescriptor

var file_ric_code_riccode_proto_rawDesc = []byte{
	0x0a, 0x16, 0x72, 0x69, 0x63, 0x2d, 0x63, 0x6f, 0x64, 0x65, 0x2f, 0x72, 0x69, 0x63, 0x63, 0x6f,
	0x64, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12, 0x08, 0x72, 0x69, 0x63, 0x2e, 0x63, 0x6f,
	0x64, 0x65, 0x22, 0x77, 0x0a, 0x10, 0x54, 0x72, 0x61, 0x6e, 0x73, 0x70, 0x69, 0x6c, 0x65, 0x52,
	0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x12, 0x0e, 0x0a, 0x02, 0x69, 0x64, 0x18, 0x01, 0x20, 0x01,
	0x28, 0x09, 0x52, 0x02, 0x69, 0x64, 0x12, 0x12, 0x0a, 0x04, 0x63, 0x6f, 0x64, 0x65, 0x18, 0x02,
	0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x63, 0x6f, 0x64, 0x65, 0x12, 0x12, 0x0a, 0x04, 0x6d, 0x61,
	0x69, 0x6e, 0x18, 0x03, 0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x6d, 0x61, 0x69, 0x6e, 0x12, 0x2b,
	0x0a, 0x04, 0x64, 0x65, 0x66, 0x73, 0x18, 0x04, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x17, 0x2e, 0x72,
	0x69, 0x63, 0x2e, 0x63, 0x6f, 0x64, 0x65, 0x2e, 0x4c, 0x69, 0x62, 0x44, 0x65, 0x66, 0x69, 0x6e,
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x52, 0x04, 0x64, 0x65, 0x66, 0x73, 0x22, 0xd4, 0x01, 0x0a, 0x11,
	0x54, 0x72, 0x61, 0x6e, 0x73, 0x70, 0x69, 0x6c, 0x65, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73,
	0x65, 0x12, 0x19, 0x0a, 0x08, 0x63, 0x6f, 0x64, 0x65, 0x5f, 0x65, 0x73, 0x35, 0x18, 0x01, 0x20,
	0x01, 0x28, 0x09, 0x52, 0x07, 0x63, 0x6f, 0x64, 0x65, 0x45, 0x73, 0x35, 0x12, 0x28, 0x0a, 0x04,
	0x6c, 0x69, 0x62, 0x73, 0x18, 0x02, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x14, 0x2e, 0x72, 0x69, 0x63,
	0x2e, 0x63, 0x6f, 0x64, 0x65, 0x2e, 0x4c, 0x69, 0x62, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74,
	0x52, 0x04, 0x6c, 0x69, 0x62, 0x73, 0x12, 0x27, 0x0a, 0x05, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x18,
	0x03, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x11, 0x2e, 0x72, 0x69, 0x63, 0x2e, 0x63, 0x6f, 0x64, 0x65,
	0x2e, 0x56, 0x61, 0x72, 0x44, 0x65, 0x63, 0x6c, 0x52, 0x05, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x12,
	0x29, 0x0a, 0x06, 0x6f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x18, 0x04, 0x20, 0x03, 0x28, 0x0b, 0x32,
	0x11, 0x2e, 0x72, 0x69, 0x63, 0x2e, 0x63, 0x6f, 0x64, 0x65, 0x2e, 0x56, 0x61, 0x72, 0x44, 0x65,
	0x63, 0x6c, 0x52, 0x06, 0x6f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x12, 0x26, 0x0a, 0x04, 0x72, 0x65,
	0x66, 0x73, 0x18, 0x05, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x12, 0x2e, 0x72, 0x69, 0x63, 0x2e, 0x63,
	0x6f, 0x64, 0x65, 0x2e, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x52, 0x65, 0x66, 0x52, 0x04, 0x72, 0x65,
	0x66, 0x73, 0x22, 0x45, 0x0a, 0x08, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x52, 0x65, 0x66, 0x12, 0x12,
	0x0a, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x6e, 0x61,
	0x6d, 0x65, 0x12, 0x25, 0x0a, 0x04, 0x76, 0x61, 0x72, 0x73, 0x18, 0x02, 0x20, 0x03, 0x28, 0x0b,
	0x32, 0x11, 0x2e, 0x72, 0x69, 0x63, 0x2e, 0x63, 0x6f, 0x64, 0x65, 0x2e, 0x56, 0x61, 0x72, 0x44,
	0x65, 0x63, 0x6c, 0x52, 0x04, 0x76, 0x61, 0x72, 0x73, 0x22, 0x4b, 0x0a, 0x07, 0x56, 0x61, 0x72,
	0x44, 0x65, 0x63, 0x6c, 0x12, 0x12, 0x0a, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x18, 0x01, 0x20, 0x01,
	0x28, 0x09, 0x52, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x12, 0x12, 0x0a, 0x04, 0x74, 0x79, 0x70, 0x65,
	0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x74, 0x79, 0x70, 0x65, 0x12, 0x18, 0x0a, 0x07,
	0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x18, 0x03, 0x20, 0x01, 0x28, 0x09, 0x52, 0x07, 0x64,
	0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x22, 0x35, 0x0a, 0x0d, 0x4c, 0x69, 0x62, 0x44, 0x65, 0x66,
	0x69, 0x6e, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x12, 0x12, 0x0a, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x18,
	0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x12, 0x10, 0x0a, 0x03, 0x64,
	0x65, 0x66, 0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x52, 0x03, 0x64, 0x65, 0x66, 0x22, 0x4e, 0x0a,
	0x0a, 0x4c, 0x69, 0x62, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x12, 0x12, 0x0a, 0x04, 0x6e,
	0x61, 0x6d, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x12,
	0x16, 0x0a, 0x06, 0x73, 0x65, 0x6d, 0x76, 0x65, 0x72, 0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x52,
	0x06, 0x73, 0x65, 0x6d, 0x76, 0x65, 0x72, 0x12, 0x14, 0x0a, 0x05, 0x6c, 0x6f, 0x63, 0x61, 0x6c,
	0x18, 0x03, 0x20, 0x01, 0x28, 0x08, 0x52, 0x05, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x22, 0x49, 0x0a,
	0x0f, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x45, 0x73, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74,
	0x12, 0x0e, 0x0a, 0x02, 0x69, 0x64, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x02, 0x69, 0x64,
	0x12, 0x12, 0x0a, 0x04, 0x63, 0x6f, 0x64, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x52, 0x04,
	0x63, 0x6f, 0x64, 0x65, 0x12, 0x12, 0x0a, 0x04, 0x6d, 0x61, 0x69, 0x6e, 0x18, 0x03, 0x20, 0x01,
	0x28, 0x09, 0x52, 0x04, 0x6d, 0x61, 0x69, 0x6e, 0x22, 0x5a, 0x0a, 0x10, 0x42, 0x75, 0x6e, 0x64,
	0x6c, 0x65, 0x45, 0x73, 0x50, 0x72, 0x6f, 0x67, 0x72, 0x65, 0x73, 0x73, 0x12, 0x18, 0x0a, 0x07,
	0x6d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x07, 0x6d,
	0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x12, 0x16, 0x0a, 0x06, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74,
	0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x52, 0x06, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x12, 0x14,
	0x0a, 0x05, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x18, 0x03, 0x20, 0x01, 0x28, 0x09, 0x52, 0x05, 0x65,
	0x72, 0x72, 0x6f, 0x72, 0x22, 0xbf, 0x01, 0x0a, 0x15, 0x50, 0x61, 0x72, 0x73, 0x65, 0x43, 0x6f,
	0x6e, 0x64, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x12, 0x0e,
	0x0a, 0x02, 0x69, 0x64, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x02, 0x69, 0x64, 0x12, 0x12,
	0x0a, 0x04, 0x63, 0x6f, 0x64, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x63, 0x6f,
	0x64, 0x65, 0x12, 0x46, 0x0a, 0x07, 0x61, 0x6c, 0x69, 0x61, 0x73, 0x65, 0x73, 0x18, 0x03, 0x20,
	0x03, 0x28, 0x0b, 0x32, 0x2c, 0x2e, 0x72, 0x69, 0x63, 0x2e, 0x63, 0x6f, 0x64, 0x65, 0x2e, 0x50,
	0x61, 0x72, 0x73, 0x65, 0x43, 0x6f, 0x6e, 0x64, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x52, 0x65, 0x71,
	0x75, 0x65, 0x73, 0x74, 0x2e, 0x41, 0x6c, 0x69, 0x61, 0x73, 0x65, 0x73, 0x45, 0x6e, 0x74, 0x72,
	0x79, 0x52, 0x07, 0x61, 0x6c, 0x69, 0x61, 0x73, 0x65, 0x73, 0x1a, 0x3a, 0x0a, 0x0c, 0x41, 0x6c,
	0x69, 0x61, 0x73, 0x65, 0x73, 0x45, 0x6e, 0x74, 0x72, 0x79, 0x12, 0x10, 0x0a, 0x03, 0x6b, 0x65,
	0x79, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x03, 0x6b, 0x65, 0x79, 0x12, 0x14, 0x0a, 0x05,
	0x76, 0x61, 0x6c, 0x75, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x52, 0x05, 0x76, 0x61, 0x6c,
	0x75, 0x65, 0x3a, 0x02, 0x38, 0x01, 0x22, 0x34, 0x0a, 0x16, 0x50, 0x61, 0x72, 0x73, 0x65, 0x43,
	0x6f, 0x6e, 0x64, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65,
	0x12, 0x1a, 0x0a, 0x08, 0x63, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x64, 0x18, 0x01, 0x20, 0x01,
	0x28, 0x09, 0x52, 0x08, 0x63, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x64, 0x32, 0xec, 0x01, 0x0a,
	0x07, 0x52, 0x69, 0x63, 0x43, 0x6f, 0x64, 0x65, 0x12, 0x47, 0x0a, 0x0c, 0x54, 0x72, 0x61, 0x6e,
	0x73, 0x70, 0x69, 0x6c, 0x65, 0x45, 0x73, 0x36, 0x12, 0x1a, 0x2e, 0x72, 0x69, 0x63, 0x2e, 0x63,
	0x6f, 0x64, 0x65, 0x2e, 0x54, 0x72, 0x61, 0x6e, 0x73, 0x70, 0x69, 0x6c, 0x65, 0x52, 0x65, 0x71,
	0x75, 0x65, 0x73, 0x74, 0x1a, 0x1b, 0x2e, 0x72, 0x69, 0x63, 0x2e, 0x63, 0x6f, 0x64, 0x65, 0x2e,
	0x54, 0x72, 0x61, 0x6e, 0x73, 0x70, 0x69, 0x6c, 0x65, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73,
	0x65, 0x12, 0x43, 0x0a, 0x08, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x45, 0x73, 0x12, 0x19, 0x2e,
	0x72, 0x69, 0x63, 0x2e, 0x63, 0x6f, 0x64, 0x65, 0x2e, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x45,
	0x73, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x1a, 0x1a, 0x2e, 0x72, 0x69, 0x63, 0x2e, 0x63,
	0x6f, 0x64, 0x65, 0x2e, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x45, 0x73, 0x50, 0x72, 0x6f, 0x67,
	0x72, 0x65, 0x73, 0x73, 0x30, 0x01, 0x12, 0x53, 0x0a, 0x0e, 0x50, 0x61, 0x72, 0x73, 0x65, 0x43,
	0x6f, 0x6e, 0x64, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x12, 0x1f, 0x2e, 0x72, 0x69, 0x63, 0x2e, 0x63,
	0x6f, 0x64, 0x65, 0x2e, 0x50, 0x61, 0x72, 0x73, 0x65, 0x43, 0x6f, 0x6e, 0x64, 0x69, 0x74, 0x69,
	0x6f, 0x6e, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x1a, 0x20, 0x2e, 0x72, 0x69, 0x63, 0x2e,
	0x63, 0x6f, 0x64, 0x65, 0x2e, 0x50, 0x61, 0x72, 0x73, 0x65, 0x43, 0x6f, 0x6e, 0x64, 0x69, 0x74,
	0x69, 0x6f, 0x6e, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x42, 0x14, 0x5a, 0x12, 0x2e,
	0x2f, 0x72, 0x69, 0x63, 0x2d, 0x63, 0x6f, 0x64, 0x65, 0x3b, 0x72, 0x69, 0x63, 0x63, 0x6f, 0x64,
	0x65, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_ric_code_riccode_proto_rawDescOnce sync.Once
	file_ric_code_riccode_proto_rawDescData = file_ric_code_riccode_proto_rawDesc
)

func file_ric_code_riccode_proto_rawDescGZIP() []byte {
	file_ric_code_riccode_proto_rawDescOnce.Do(func() {
		file_ric_code_riccode_proto_rawDescData = protoimpl.X.CompressGZIP(file_ric_code_riccode_proto_rawDescData)
	})
	return file_ric_code_riccode_proto_rawDescData
}

var file_ric_code_riccode_proto_msgTypes = make([]protoimpl.MessageInfo, 11)
var file_ric_code_riccode_proto_goTypes = []interface{}{
	(*TranspileRequest)(nil),       // 0: ric.code.TranspileRequest
	(*TranspileResponse)(nil),      // 1: ric.code.TranspileResponse
	(*InputRef)(nil),               // 2: ric.code.InputRef
	(*VarDecl)(nil),                // 3: ric.code.VarDecl
	(*LibDefinition)(nil),          // 4: ric.code.LibDefinition
	(*LibRequest)(nil),             // 5: ric.code.LibRequest
	(*BundleEsRequest)(nil),        // 6: ric.code.BundleEsRequest
	(*BundleEsProgress)(nil),       // 7: ric.code.BundleEsProgress
	(*ParseConditionRequest)(nil),  // 8: ric.code.ParseConditionRequest
	(*ParseConditionResponse)(nil), // 9: ric.code.ParseConditionResponse
	nil,                            // 10: ric.code.ParseConditionRequest.AliasesEntry
}
var file_ric_code_riccode_proto_depIdxs = []int32{
	4,  // 0: ric.code.TranspileRequest.defs:type_name -> ric.code.LibDefinition
	5,  // 1: ric.code.TranspileResponse.libs:type_name -> ric.code.LibRequest
	3,  // 2: ric.code.TranspileResponse.input:type_name -> ric.code.VarDecl
	3,  // 3: ric.code.TranspileResponse.output:type_name -> ric.code.VarDecl
	2,  // 4: ric.code.TranspileResponse.refs:type_name -> ric.code.InputRef
	3,  // 5: ric.code.InputRef.vars:type_name -> ric.code.VarDecl
	10, // 6: ric.code.ParseConditionRequest.aliases:type_name -> ric.code.ParseConditionRequest.AliasesEntry
	0,  // 7: ric.code.RicCode.TranspileEs6:input_type -> ric.code.TranspileRequest
	6,  // 8: ric.code.RicCode.BundleEs:input_type -> ric.code.BundleEsRequest
	8,  // 9: ric.code.RicCode.ParseCondition:input_type -> ric.code.ParseConditionRequest
	1,  // 10: ric.code.RicCode.TranspileEs6:output_type -> ric.code.TranspileResponse
	7,  // 11: ric.code.RicCode.BundleEs:output_type -> ric.code.BundleEsProgress
	9,  // 12: ric.code.RicCode.ParseCondition:output_type -> ric.code.ParseConditionResponse
	10, // [10:13] is the sub-list for method output_type
	7,  // [7:10] is the sub-list for method input_type
	7,  // [7:7] is the sub-list for extension type_name
	7,  // [7:7] is the sub-list for extension extendee
	0,  // [0:7] is the sub-list for field type_name
}

func init() { file_ric_code_riccode_proto_init() }
func file_ric_code_riccode_proto_init() {
	if File_ric_code_riccode_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_ric_code_riccode_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*TranspileRequest); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_ric_code_riccode_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*TranspileResponse); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_ric_code_riccode_proto_msgTypes[2].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*InputRef); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_ric_code_riccode_proto_msgTypes[3].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*VarDecl); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_ric_code_riccode_proto_msgTypes[4].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*LibDefinition); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_ric_code_riccode_proto_msgTypes[5].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*LibRequest); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_ric_code_riccode_proto_msgTypes[6].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*BundleEsRequest); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_ric_code_riccode_proto_msgTypes[7].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*BundleEsProgress); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_ric_code_riccode_proto_msgTypes[8].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ParseConditionRequest); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_ric_code_riccode_proto_msgTypes[9].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ParseConditionResponse); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_ric_code_riccode_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   11,
			NumExtensions: 0,
			NumServices:   1,
		},
		GoTypes:           file_ric_code_riccode_proto_goTypes,
		DependencyIndexes: file_ric_code_riccode_proto_depIdxs,
		MessageInfos:      file_ric_code_riccode_proto_msgTypes,
	}.Build()
	File_ric_code_riccode_proto = out.File
	file_ric_code_riccode_proto_rawDesc = nil
	file_ric_code_riccode_proto_goTypes = nil
	file_ric_code_riccode_proto_depIdxs = nil
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConnInterface

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion6

// RicCodeClient is the client API for RicCode service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type RicCodeClient interface {
	TranspileEs6(ctx context.Context, in *TranspileRequest, opts ...grpc.CallOption) (*TranspileResponse, error)
	BundleEs(ctx context.Context, in *BundleEsRequest, opts ...grpc.CallOption) (RicCode_BundleEsClient, error)
	ParseCondition(ctx context.Context, in *ParseConditionRequest, opts ...grpc.CallOption) (*ParseConditionResponse, error)
}

type ricCodeClient struct {
	cc grpc.ClientConnInterface
}

func NewRicCodeClient(cc grpc.ClientConnInterface) RicCodeClient {
	return &ricCodeClient{cc}
}

func (c *ricCodeClient) TranspileEs6(ctx context.Context, in *TranspileRequest, opts ...grpc.CallOption) (*TranspileResponse, error) {
	out := new(TranspileResponse)
	err := c.cc.Invoke(ctx, "/ric.code.RicCode/TranspileEs6", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *ricCodeClient) BundleEs(ctx context.Context, in *BundleEsRequest, opts ...grpc.CallOption) (RicCode_BundleEsClient, error) {
	stream, err := c.cc.NewStream(ctx, &_RicCode_serviceDesc.Streams[0], "/ric.code.RicCode/BundleEs", opts...)
	if err != nil {
		return nil, err
	}
	x := &ricCodeBundleEsClient{stream}
	if err := x.ClientStream.SendMsg(in); err != nil {
		return nil, err
	}
	if err := x.ClientStream.CloseSend(); err != nil {
		return nil, err
	}
	return x, nil
}

type RicCode_BundleEsClient interface {
	Recv() (*BundleEsProgress, error)
	grpc.ClientStream
}

type ricCodeBundleEsClient struct {
	grpc.ClientStream
}

func (x *ricCodeBundleEsClient) Recv() (*BundleEsProgress, error) {
	m := new(BundleEsProgress)
	if err := x.ClientStream.RecvMsg(m); err != nil {
		return nil, err
	}
	return m, nil
}

func (c *ricCodeClient) ParseCondition(ctx context.Context, in *ParseConditionRequest, opts ...grpc.CallOption) (*ParseConditionResponse, error) {
	out := new(ParseConditionResponse)
	err := c.cc.Invoke(ctx, "/ric.code.RicCode/ParseCondition", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// RicCodeServer is the server API for RicCode service.
type RicCodeServer interface {
	TranspileEs6(context.Context, *TranspileRequest) (*TranspileResponse, error)
	BundleEs(*BundleEsRequest, RicCode_BundleEsServer) error
	ParseCondition(context.Context, *ParseConditionRequest) (*ParseConditionResponse, error)
}

// UnimplementedRicCodeServer can be embedded to have forward compatible implementations.
type UnimplementedRicCodeServer struct {
}

func (*UnimplementedRicCodeServer) TranspileEs6(context.Context, *TranspileRequest) (*TranspileResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method TranspileEs6 not implemented")
}
func (*UnimplementedRicCodeServer) BundleEs(*BundleEsRequest, RicCode_BundleEsServer) error {
	return status.Errorf(codes.Unimplemented, "method BundleEs not implemented")
}
func (*UnimplementedRicCodeServer) ParseCondition(context.Context, *ParseConditionRequest) (*ParseConditionResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method ParseCondition not implemented")
}

func RegisterRicCodeServer(s *grpc.Server, srv RicCodeServer) {
	s.RegisterService(&_RicCode_serviceDesc, srv)
}

func _RicCode_TranspileEs6_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(TranspileRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(RicCodeServer).TranspileEs6(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/ric.code.RicCode/TranspileEs6",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(RicCodeServer).TranspileEs6(ctx, req.(*TranspileRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _RicCode_BundleEs_Handler(srv interface{}, stream grpc.ServerStream) error {
	m := new(BundleEsRequest)
	if err := stream.RecvMsg(m); err != nil {
		return err
	}
	return srv.(RicCodeServer).BundleEs(m, &ricCodeBundleEsServer{stream})
}

type RicCode_BundleEsServer interface {
	Send(*BundleEsProgress) error
	grpc.ServerStream
}

type ricCodeBundleEsServer struct {
	grpc.ServerStream
}

func (x *ricCodeBundleEsServer) Send(m *BundleEsProgress) error {
	return x.ServerStream.SendMsg(m)
}

func _RicCode_ParseCondition_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(ParseConditionRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(RicCodeServer).ParseCondition(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/ric.code.RicCode/ParseCondition",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(RicCodeServer).ParseCondition(ctx, req.(*ParseConditionRequest))
	}
	return interceptor(ctx, in, info, handler)
}

var _RicCode_serviceDesc = grpc.ServiceDesc{
	ServiceName: "ric.code.RicCode",
	HandlerType: (*RicCodeServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "TranspileEs6",
			Handler:    _RicCode_TranspileEs6_Handler,
		},
		{
			MethodName: "ParseCondition",
			Handler:    _RicCode_ParseCondition_Handler,
		},
	},
	Streams: []grpc.StreamDesc{
		{
			StreamName:    "BundleEs",
			Handler:       _RicCode_BundleEs_Handler,
			ServerStreams: true,
		},
	},
	Metadata: "ric-code/riccode.proto",
}
