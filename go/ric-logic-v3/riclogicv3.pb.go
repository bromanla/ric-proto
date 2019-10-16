// Code generated by protoc-gen-go. DO NOT EDIT.
// source: ric-logic-v3/riclogicv3.proto

package riclogicv3

import (
	context "context"
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	grpc "google.golang.org/grpc"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type StepCategory int32

const (
	StepCategory_INVALID    StepCategory = 0
	StepCategory_INFO       StepCategory = 1
	StepCategory_LOG        StepCategory = 2
	StepCategory_TRANSITION StepCategory = 3
	StepCategory_ACTION     StepCategory = 4
	StepCategory_ERROR      StepCategory = 5
	StepCategory_HALTED     StepCategory = 6
)

var StepCategory_name = map[int32]string{
	0: "INVALID",
	1: "INFO",
	2: "LOG",
	3: "TRANSITION",
	4: "ACTION",
	5: "ERROR",
	6: "HALTED",
}

var StepCategory_value = map[string]int32{
	"INVALID":    0,
	"INFO":       1,
	"LOG":        2,
	"TRANSITION": 3,
	"ACTION":     4,
	"ERROR":      5,
	"HALTED":     6,
}

func (x StepCategory) String() string {
	return proto.EnumName(StepCategory_name, int32(x))
}

func (StepCategory) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_f49a1e7f677937ad, []int{0}
}

type AutomatonStats struct {
	Started              int32    `protobuf:"varint,1,opt,name=started,proto3" json:"started,omitempty"`
	Transitions          int32    `protobuf:"varint,2,opt,name=transitions,proto3" json:"transitions,omitempty"`
	Actions              int32    `protobuf:"varint,3,opt,name=actions,proto3" json:"actions,omitempty"`
	Packets              int32    `protobuf:"varint,4,opt,name=packets,proto3" json:"packets,omitempty"`
	Events               int32    `protobuf:"varint,5,opt,name=events,proto3" json:"events,omitempty"`
	Halted               string   `protobuf:"bytes,6,opt,name=halted,proto3" json:"halted,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *AutomatonStats) Reset()         { *m = AutomatonStats{} }
func (m *AutomatonStats) String() string { return proto.CompactTextString(m) }
func (*AutomatonStats) ProtoMessage()    {}
func (*AutomatonStats) Descriptor() ([]byte, []int) {
	return fileDescriptor_f49a1e7f677937ad, []int{0}
}

func (m *AutomatonStats) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_AutomatonStats.Unmarshal(m, b)
}
func (m *AutomatonStats) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_AutomatonStats.Marshal(b, m, deterministic)
}
func (m *AutomatonStats) XXX_Merge(src proto.Message) {
	xxx_messageInfo_AutomatonStats.Merge(m, src)
}
func (m *AutomatonStats) XXX_Size() int {
	return xxx_messageInfo_AutomatonStats.Size(m)
}
func (m *AutomatonStats) XXX_DiscardUnknown() {
	xxx_messageInfo_AutomatonStats.DiscardUnknown(m)
}

var xxx_messageInfo_AutomatonStats proto.InternalMessageInfo

func (m *AutomatonStats) GetStarted() int32 {
	if m != nil {
		return m.Started
	}
	return 0
}

func (m *AutomatonStats) GetTransitions() int32 {
	if m != nil {
		return m.Transitions
	}
	return 0
}

func (m *AutomatonStats) GetActions() int32 {
	if m != nil {
		return m.Actions
	}
	return 0
}

func (m *AutomatonStats) GetPackets() int32 {
	if m != nil {
		return m.Packets
	}
	return 0
}

func (m *AutomatonStats) GetEvents() int32 {
	if m != nil {
		return m.Events
	}
	return 0
}

func (m *AutomatonStats) GetHalted() string {
	if m != nil {
		return m.Halted
	}
	return ""
}

type StartAutomatonRequest struct {
	ObjectId             string   `protobuf:"bytes,1,opt,name=object_id,json=objectId,proto3" json:"object_id,omitempty"`
	AutomatonId          string   `protobuf:"bytes,2,opt,name=automaton_id,json=automatonId,proto3" json:"automaton_id,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *StartAutomatonRequest) Reset()         { *m = StartAutomatonRequest{} }
func (m *StartAutomatonRequest) String() string { return proto.CompactTextString(m) }
func (*StartAutomatonRequest) ProtoMessage()    {}
func (*StartAutomatonRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_f49a1e7f677937ad, []int{1}
}

func (m *StartAutomatonRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_StartAutomatonRequest.Unmarshal(m, b)
}
func (m *StartAutomatonRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_StartAutomatonRequest.Marshal(b, m, deterministic)
}
func (m *StartAutomatonRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_StartAutomatonRequest.Merge(m, src)
}
func (m *StartAutomatonRequest) XXX_Size() int {
	return xxx_messageInfo_StartAutomatonRequest.Size(m)
}
func (m *StartAutomatonRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_StartAutomatonRequest.DiscardUnknown(m)
}

var xxx_messageInfo_StartAutomatonRequest proto.InternalMessageInfo

func (m *StartAutomatonRequest) GetObjectId() string {
	if m != nil {
		return m.ObjectId
	}
	return ""
}

func (m *StartAutomatonRequest) GetAutomatonId() string {
	if m != nil {
		return m.AutomatonId
	}
	return ""
}

type StartAutomatonResponse struct {
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *StartAutomatonResponse) Reset()         { *m = StartAutomatonResponse{} }
func (m *StartAutomatonResponse) String() string { return proto.CompactTextString(m) }
func (*StartAutomatonResponse) ProtoMessage()    {}
func (*StartAutomatonResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_f49a1e7f677937ad, []int{2}
}

func (m *StartAutomatonResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_StartAutomatonResponse.Unmarshal(m, b)
}
func (m *StartAutomatonResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_StartAutomatonResponse.Marshal(b, m, deterministic)
}
func (m *StartAutomatonResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_StartAutomatonResponse.Merge(m, src)
}
func (m *StartAutomatonResponse) XXX_Size() int {
	return xxx_messageInfo_StartAutomatonResponse.Size(m)
}
func (m *StartAutomatonResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_StartAutomatonResponse.DiscardUnknown(m)
}

var xxx_messageInfo_StartAutomatonResponse proto.InternalMessageInfo

type GetRuntimeInfoRequest struct {
	ObjectId             string   `protobuf:"bytes,1,opt,name=object_id,json=objectId,proto3" json:"object_id,omitempty"`
	AutomatonId          string   `protobuf:"bytes,2,opt,name=automaton_id,json=automatonId,proto3" json:"automaton_id,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *GetRuntimeInfoRequest) Reset()         { *m = GetRuntimeInfoRequest{} }
func (m *GetRuntimeInfoRequest) String() string { return proto.CompactTextString(m) }
func (*GetRuntimeInfoRequest) ProtoMessage()    {}
func (*GetRuntimeInfoRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_f49a1e7f677937ad, []int{3}
}

func (m *GetRuntimeInfoRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_GetRuntimeInfoRequest.Unmarshal(m, b)
}
func (m *GetRuntimeInfoRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_GetRuntimeInfoRequest.Marshal(b, m, deterministic)
}
func (m *GetRuntimeInfoRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_GetRuntimeInfoRequest.Merge(m, src)
}
func (m *GetRuntimeInfoRequest) XXX_Size() int {
	return xxx_messageInfo_GetRuntimeInfoRequest.Size(m)
}
func (m *GetRuntimeInfoRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_GetRuntimeInfoRequest.DiscardUnknown(m)
}

var xxx_messageInfo_GetRuntimeInfoRequest proto.InternalMessageInfo

func (m *GetRuntimeInfoRequest) GetObjectId() string {
	if m != nil {
		return m.ObjectId
	}
	return ""
}

func (m *GetRuntimeInfoRequest) GetAutomatonId() string {
	if m != nil {
		return m.AutomatonId
	}
	return ""
}

type StopAutomatonRequest struct {
	ObjectId             string   `protobuf:"bytes,1,opt,name=object_id,json=objectId,proto3" json:"object_id,omitempty"`
	AutomatonId          string   `protobuf:"bytes,2,opt,name=automaton_id,json=automatonId,proto3" json:"automaton_id,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *StopAutomatonRequest) Reset()         { *m = StopAutomatonRequest{} }
func (m *StopAutomatonRequest) String() string { return proto.CompactTextString(m) }
func (*StopAutomatonRequest) ProtoMessage()    {}
func (*StopAutomatonRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_f49a1e7f677937ad, []int{4}
}

func (m *StopAutomatonRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_StopAutomatonRequest.Unmarshal(m, b)
}
func (m *StopAutomatonRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_StopAutomatonRequest.Marshal(b, m, deterministic)
}
func (m *StopAutomatonRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_StopAutomatonRequest.Merge(m, src)
}
func (m *StopAutomatonRequest) XXX_Size() int {
	return xxx_messageInfo_StopAutomatonRequest.Size(m)
}
func (m *StopAutomatonRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_StopAutomatonRequest.DiscardUnknown(m)
}

var xxx_messageInfo_StopAutomatonRequest proto.InternalMessageInfo

func (m *StopAutomatonRequest) GetObjectId() string {
	if m != nil {
		return m.ObjectId
	}
	return ""
}

func (m *StopAutomatonRequest) GetAutomatonId() string {
	if m != nil {
		return m.AutomatonId
	}
	return ""
}

type StopAutomatonResponse struct {
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *StopAutomatonResponse) Reset()         { *m = StopAutomatonResponse{} }
func (m *StopAutomatonResponse) String() string { return proto.CompactTextString(m) }
func (*StopAutomatonResponse) ProtoMessage()    {}
func (*StopAutomatonResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_f49a1e7f677937ad, []int{5}
}

func (m *StopAutomatonResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_StopAutomatonResponse.Unmarshal(m, b)
}
func (m *StopAutomatonResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_StopAutomatonResponse.Marshal(b, m, deterministic)
}
func (m *StopAutomatonResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_StopAutomatonResponse.Merge(m, src)
}
func (m *StopAutomatonResponse) XXX_Size() int {
	return xxx_messageInfo_StopAutomatonResponse.Size(m)
}
func (m *StopAutomatonResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_StopAutomatonResponse.DiscardUnknown(m)
}

var xxx_messageInfo_StopAutomatonResponse proto.InternalMessageInfo

type RuntimeLogResponse struct {
	ObjectId             string       `protobuf:"bytes,1,opt,name=object_id,json=objectId,proto3" json:"object_id,omitempty"`
	AutomatonId          string       `protobuf:"bytes,2,opt,name=automaton_id,json=automatonId,proto3" json:"automaton_id,omitempty"`
	Ts                   int32        `protobuf:"varint,3,opt,name=ts,proto3" json:"ts,omitempty"`
	State                string       `protobuf:"bytes,4,opt,name=state,proto3" json:"state,omitempty"`
	Transition           string       `protobuf:"bytes,5,opt,name=transition,proto3" json:"transition,omitempty"`
	Category             StepCategory `protobuf:"varint,6,opt,name=category,proto3,enum=ric.logic.v3.StepCategory" json:"category,omitempty"`
	Message              string       `protobuf:"bytes,7,opt,name=message,proto3" json:"message,omitempty"`
	Ctx                  string       `protobuf:"bytes,8,opt,name=ctx,proto3" json:"ctx,omitempty"`
	Final                bool         `protobuf:"varint,9,opt,name=final,proto3" json:"final,omitempty"`
	XXX_NoUnkeyedLiteral struct{}     `json:"-"`
	XXX_unrecognized     []byte       `json:"-"`
	XXX_sizecache        int32        `json:"-"`
}

func (m *RuntimeLogResponse) Reset()         { *m = RuntimeLogResponse{} }
func (m *RuntimeLogResponse) String() string { return proto.CompactTextString(m) }
func (*RuntimeLogResponse) ProtoMessage()    {}
func (*RuntimeLogResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_f49a1e7f677937ad, []int{6}
}

func (m *RuntimeLogResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_RuntimeLogResponse.Unmarshal(m, b)
}
func (m *RuntimeLogResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_RuntimeLogResponse.Marshal(b, m, deterministic)
}
func (m *RuntimeLogResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_RuntimeLogResponse.Merge(m, src)
}
func (m *RuntimeLogResponse) XXX_Size() int {
	return xxx_messageInfo_RuntimeLogResponse.Size(m)
}
func (m *RuntimeLogResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_RuntimeLogResponse.DiscardUnknown(m)
}

var xxx_messageInfo_RuntimeLogResponse proto.InternalMessageInfo

func (m *RuntimeLogResponse) GetObjectId() string {
	if m != nil {
		return m.ObjectId
	}
	return ""
}

func (m *RuntimeLogResponse) GetAutomatonId() string {
	if m != nil {
		return m.AutomatonId
	}
	return ""
}

func (m *RuntimeLogResponse) GetTs() int32 {
	if m != nil {
		return m.Ts
	}
	return 0
}

func (m *RuntimeLogResponse) GetState() string {
	if m != nil {
		return m.State
	}
	return ""
}

func (m *RuntimeLogResponse) GetTransition() string {
	if m != nil {
		return m.Transition
	}
	return ""
}

func (m *RuntimeLogResponse) GetCategory() StepCategory {
	if m != nil {
		return m.Category
	}
	return StepCategory_INVALID
}

func (m *RuntimeLogResponse) GetMessage() string {
	if m != nil {
		return m.Message
	}
	return ""
}

func (m *RuntimeLogResponse) GetCtx() string {
	if m != nil {
		return m.Ctx
	}
	return ""
}

func (m *RuntimeLogResponse) GetFinal() bool {
	if m != nil {
		return m.Final
	}
	return false
}

func init() {
	proto.RegisterEnum("ric.logic.v3.StepCategory", StepCategory_name, StepCategory_value)
	proto.RegisterType((*AutomatonStats)(nil), "ric.logic.v3.AutomatonStats")
	proto.RegisterType((*StartAutomatonRequest)(nil), "ric.logic.v3.StartAutomatonRequest")
	proto.RegisterType((*StartAutomatonResponse)(nil), "ric.logic.v3.StartAutomatonResponse")
	proto.RegisterType((*GetRuntimeInfoRequest)(nil), "ric.logic.v3.GetRuntimeInfoRequest")
	proto.RegisterType((*StopAutomatonRequest)(nil), "ric.logic.v3.StopAutomatonRequest")
	proto.RegisterType((*StopAutomatonResponse)(nil), "ric.logic.v3.StopAutomatonResponse")
	proto.RegisterType((*RuntimeLogResponse)(nil), "ric.logic.v3.RuntimeLogResponse")
}

func init() { proto.RegisterFile("ric-logic-v3/riclogicv3.proto", fileDescriptor_f49a1e7f677937ad) }

var fileDescriptor_f49a1e7f677937ad = []byte{
	// 558 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xac, 0x54, 0xdb, 0x6e, 0xd3, 0x40,
	0x10, 0x8d, 0x9d, 0xe6, 0xe2, 0x69, 0x88, 0xcc, 0xa8, 0x14, 0x2b, 0x5c, 0x14, 0x5c, 0x1e, 0x2a,
	0xa4, 0x06, 0xd4, 0x48, 0xbc, 0x87, 0xb6, 0x14, 0x4b, 0x56, 0x22, 0x6d, 0xaa, 0x82, 0x2a, 0x55,
	0x68, 0xeb, 0x6e, 0x83, 0xa1, 0xf5, 0x06, 0xef, 0x24, 0x82, 0x37, 0x3e, 0x82, 0x0f, 0xe1, 0x13,
	0xd1, 0xae, 0xed, 0x34, 0x4e, 0xab, 0x0a, 0x89, 0xbe, 0xed, 0x39, 0x33, 0x7b, 0x66, 0xc6, 0x73,
	0xbc, 0xf0, 0x2c, 0x8d, 0xa3, 0x9d, 0x4b, 0x39, 0x89, 0xa3, 0x9d, 0x79, 0xff, 0x75, 0x1a, 0x47,
	0xe6, 0x3c, 0xef, 0xf7, 0xa6, 0xa9, 0x24, 0x89, 0xad, 0x34, 0x8e, 0x7a, 0x86, 0xea, 0xcd, 0xfb,
	0xfe, 0x1f, 0x0b, 0xda, 0x83, 0x19, 0xc9, 0x2b, 0x4e, 0x32, 0x19, 0x13, 0x27, 0x85, 0x1e, 0x34,
	0x14, 0xf1, 0x94, 0xc4, 0xb9, 0x67, 0x75, 0xad, 0xed, 0x1a, 0x2b, 0x20, 0x76, 0x61, 0x9d, 0x52,
	0x9e, 0xa8, 0x98, 0x62, 0x99, 0x28, 0xcf, 0x36, 0xd1, 0x65, 0x4a, 0xdf, 0xe5, 0x51, 0x16, 0xad,
	0x66, 0x77, 0x73, 0xa8, 0x23, 0x53, 0x1e, 0x7d, 0x13, 0xa4, 0xbc, 0xb5, 0x2c, 0x92, 0x43, 0xdc,
	0x84, 0xba, 0x98, 0x8b, 0x84, 0x94, 0x57, 0x33, 0x81, 0x1c, 0x69, 0xfe, 0x0b, 0xbf, 0xd4, 0x6d,
	0xd4, 0xbb, 0xd6, 0xb6, 0xc3, 0x72, 0xe4, 0x7f, 0x84, 0x47, 0x63, 0xdd, 0xd0, 0xa2, 0x6d, 0x26,
	0xbe, 0xcf, 0x84, 0x22, 0x7c, 0x02, 0x8e, 0x3c, 0xfb, 0x2a, 0x22, 0xfa, 0x1c, 0x67, 0xad, 0x3b,
	0xac, 0x99, 0x11, 0xc1, 0x39, 0xbe, 0x80, 0x16, 0x2f, 0x2e, 0xe8, 0xb8, 0x6d, 0xe2, 0xeb, 0x0b,
	0x2e, 0x38, 0xf7, 0x3d, 0xd8, 0x5c, 0x15, 0x56, 0x53, 0x99, 0x28, 0xa1, 0x4b, 0x1e, 0x0a, 0x62,
	0xb3, 0x84, 0xe2, 0x2b, 0x11, 0x24, 0x17, 0xf2, 0xbe, 0x4a, 0x1e, 0xc3, 0xc6, 0x98, 0xe4, 0xf4,
	0xde, 0x47, 0x79, 0xac, 0xbf, 0x51, 0x49, 0x37, 0x9f, 0xe4, 0xb7, 0x0d, 0x98, 0xcf, 0x11, 0xca,
	0x49, 0x41, 0xff, 0x6f, 0x3d, 0x6c, 0x83, 0x4d, 0xc5, 0xca, 0x6d, 0x52, 0xb8, 0x01, 0x35, 0x45,
	0x9c, 0x84, 0xd9, 0xb5, 0xc3, 0x32, 0x80, 0xcf, 0x01, 0xae, 0xcd, 0x62, 0xb6, 0xed, 0xb0, 0x25,
	0x06, 0xdf, 0x42, 0x33, 0xe2, 0x24, 0x26, 0x32, 0xfd, 0x69, 0x76, 0xde, 0xde, 0xed, 0xf4, 0x96,
	0xdd, 0xda, 0x1b, 0x93, 0x98, 0xee, 0xe5, 0x19, 0x6c, 0x91, 0xab, 0xbd, 0x75, 0x25, 0x94, 0xe2,
	0x13, 0xe1, 0x35, 0x8c, 0x68, 0x01, 0xd1, 0x85, 0x6a, 0x44, 0x3f, 0xbc, 0xa6, 0x61, 0xf5, 0x51,
	0x77, 0x76, 0x11, 0x27, 0xfc, 0xd2, 0x73, 0xba, 0xd6, 0x76, 0x93, 0x65, 0xe0, 0x15, 0x87, 0xd6,
	0xb2, 0x36, 0xae, 0x43, 0x23, 0x18, 0x1e, 0x0f, 0xc2, 0x60, 0xdf, 0xad, 0x60, 0x13, 0xd6, 0x82,
	0xe1, 0xfb, 0x91, 0x6b, 0x61, 0x03, 0xaa, 0xe1, 0xe8, 0xd0, 0xb5, 0xb1, 0x0d, 0x70, 0xc4, 0x06,
	0xc3, 0x71, 0x70, 0x14, 0x8c, 0x86, 0x6e, 0x15, 0x01, 0xea, 0x83, 0x3d, 0x73, 0x5e, 0x43, 0x07,
	0x6a, 0x07, 0x8c, 0x8d, 0x98, 0x5b, 0xd3, 0xf4, 0x87, 0x41, 0x78, 0x74, 0xb0, 0xef, 0xd6, 0x77,
	0x7f, 0x55, 0x01, 0x58, 0x1c, 0x85, 0x7a, 0x96, 0xe3, 0x3e, 0x9e, 0x42, 0xbb, 0x6c, 0x36, 0xdc,
	0x5a, 0x9d, 0xf5, 0x16, 0x8f, 0x77, 0x5e, 0xde, 0x9d, 0x94, 0x6f, 0xb9, 0x82, 0x9f, 0xe0, 0xe1,
	0xa1, 0xa0, 0x95, 0x3f, 0x7b, 0xa5, 0xc2, 0xad, 0x96, 0xee, 0x3c, 0x2d, 0x27, 0x95, 0x25, 0xfc,
	0x0a, 0x9e, 0x82, 0xbb, 0xac, 0x1c, 0xca, 0xc9, 0x3f, 0x0a, 0x77, 0xcb, 0x49, 0x37, 0x5d, 0xe8,
	0x57, 0xde, 0x58, 0x78, 0x02, 0x0f, 0x4a, 0xce, 0x45, 0x7f, 0x75, 0xe2, 0x9b, 0xbf, 0x4b, 0x67,
	0xeb, 0xce, 0x9c, 0x42, 0xfd, 0x5d, 0xeb, 0x04, 0xae, 0x9f, 0xc3, 0xb3, 0xba, 0x79, 0x0f, 0xfb,
	0x7f, 0x03, 0x00, 0x00, 0xff, 0xff, 0x9f, 0x15, 0x36, 0xb6, 0x30, 0x05, 0x00, 0x00,
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConn

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion4

// RicLogicV3Client is the client API for RicLogicV3 service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type RicLogicV3Client interface {
	StartAutomaton(ctx context.Context, in *StartAutomatonRequest, opts ...grpc.CallOption) (*StartAutomatonResponse, error)
	GetAutomatonStats(ctx context.Context, in *GetRuntimeInfoRequest, opts ...grpc.CallOption) (*AutomatonStats, error)
	GetAutomatonLogs(ctx context.Context, in *GetRuntimeInfoRequest, opts ...grpc.CallOption) (RicLogicV3_GetAutomatonLogsClient, error)
	StopAutomaton(ctx context.Context, in *StopAutomatonRequest, opts ...grpc.CallOption) (*StopAutomatonResponse, error)
}

type ricLogicV3Client struct {
	cc *grpc.ClientConn
}

func NewRicLogicV3Client(cc *grpc.ClientConn) RicLogicV3Client {
	return &ricLogicV3Client{cc}
}

func (c *ricLogicV3Client) StartAutomaton(ctx context.Context, in *StartAutomatonRequest, opts ...grpc.CallOption) (*StartAutomatonResponse, error) {
	out := new(StartAutomatonResponse)
	err := c.cc.Invoke(ctx, "/ric.logic.v3.RicLogicV3/StartAutomaton", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *ricLogicV3Client) GetAutomatonStats(ctx context.Context, in *GetRuntimeInfoRequest, opts ...grpc.CallOption) (*AutomatonStats, error) {
	out := new(AutomatonStats)
	err := c.cc.Invoke(ctx, "/ric.logic.v3.RicLogicV3/GetAutomatonStats", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *ricLogicV3Client) GetAutomatonLogs(ctx context.Context, in *GetRuntimeInfoRequest, opts ...grpc.CallOption) (RicLogicV3_GetAutomatonLogsClient, error) {
	stream, err := c.cc.NewStream(ctx, &_RicLogicV3_serviceDesc.Streams[0], "/ric.logic.v3.RicLogicV3/GetAutomatonLogs", opts...)
	if err != nil {
		return nil, err
	}
	x := &ricLogicV3GetAutomatonLogsClient{stream}
	if err := x.ClientStream.SendMsg(in); err != nil {
		return nil, err
	}
	if err := x.ClientStream.CloseSend(); err != nil {
		return nil, err
	}
	return x, nil
}

type RicLogicV3_GetAutomatonLogsClient interface {
	Recv() (*RuntimeLogResponse, error)
	grpc.ClientStream
}

type ricLogicV3GetAutomatonLogsClient struct {
	grpc.ClientStream
}

func (x *ricLogicV3GetAutomatonLogsClient) Recv() (*RuntimeLogResponse, error) {
	m := new(RuntimeLogResponse)
	if err := x.ClientStream.RecvMsg(m); err != nil {
		return nil, err
	}
	return m, nil
}

func (c *ricLogicV3Client) StopAutomaton(ctx context.Context, in *StopAutomatonRequest, opts ...grpc.CallOption) (*StopAutomatonResponse, error) {
	out := new(StopAutomatonResponse)
	err := c.cc.Invoke(ctx, "/ric.logic.v3.RicLogicV3/StopAutomaton", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// RicLogicV3Server is the server API for RicLogicV3 service.
type RicLogicV3Server interface {
	StartAutomaton(context.Context, *StartAutomatonRequest) (*StartAutomatonResponse, error)
	GetAutomatonStats(context.Context, *GetRuntimeInfoRequest) (*AutomatonStats, error)
	GetAutomatonLogs(*GetRuntimeInfoRequest, RicLogicV3_GetAutomatonLogsServer) error
	StopAutomaton(context.Context, *StopAutomatonRequest) (*StopAutomatonResponse, error)
}

func RegisterRicLogicV3Server(s *grpc.Server, srv RicLogicV3Server) {
	s.RegisterService(&_RicLogicV3_serviceDesc, srv)
}

func _RicLogicV3_StartAutomaton_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(StartAutomatonRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(RicLogicV3Server).StartAutomaton(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/ric.logic.v3.RicLogicV3/StartAutomaton",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(RicLogicV3Server).StartAutomaton(ctx, req.(*StartAutomatonRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _RicLogicV3_GetAutomatonStats_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(GetRuntimeInfoRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(RicLogicV3Server).GetAutomatonStats(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/ric.logic.v3.RicLogicV3/GetAutomatonStats",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(RicLogicV3Server).GetAutomatonStats(ctx, req.(*GetRuntimeInfoRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _RicLogicV3_GetAutomatonLogs_Handler(srv interface{}, stream grpc.ServerStream) error {
	m := new(GetRuntimeInfoRequest)
	if err := stream.RecvMsg(m); err != nil {
		return err
	}
	return srv.(RicLogicV3Server).GetAutomatonLogs(m, &ricLogicV3GetAutomatonLogsServer{stream})
}

type RicLogicV3_GetAutomatonLogsServer interface {
	Send(*RuntimeLogResponse) error
	grpc.ServerStream
}

type ricLogicV3GetAutomatonLogsServer struct {
	grpc.ServerStream
}

func (x *ricLogicV3GetAutomatonLogsServer) Send(m *RuntimeLogResponse) error {
	return x.ServerStream.SendMsg(m)
}

func _RicLogicV3_StopAutomaton_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(StopAutomatonRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(RicLogicV3Server).StopAutomaton(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/ric.logic.v3.RicLogicV3/StopAutomaton",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(RicLogicV3Server).StopAutomaton(ctx, req.(*StopAutomatonRequest))
	}
	return interceptor(ctx, in, info, handler)
}

var _RicLogicV3_serviceDesc = grpc.ServiceDesc{
	ServiceName: "ric.logic.v3.RicLogicV3",
	HandlerType: (*RicLogicV3Server)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "StartAutomaton",
			Handler:    _RicLogicV3_StartAutomaton_Handler,
		},
		{
			MethodName: "GetAutomatonStats",
			Handler:    _RicLogicV3_GetAutomatonStats_Handler,
		},
		{
			MethodName: "StopAutomaton",
			Handler:    _RicLogicV3_StopAutomaton_Handler,
		},
	},
	Streams: []grpc.StreamDesc{
		{
			StreamName:    "GetAutomatonLogs",
			Handler:       _RicLogicV3_GetAutomatonLogs_Handler,
			ServerStreams: true,
		},
	},
	Metadata: "ric-logic-v3/riclogicv3.proto",
}
