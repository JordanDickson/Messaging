// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TelemetryPacket.proto

#ifndef PROTOBUF_TelemetryPacket_2eproto__INCLUDED
#define PROTOBUF_TelemetryPacket_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace uavforge {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_TelemetryPacket_2eproto();
void protobuf_AssignDesc_TelemetryPacket_2eproto();
void protobuf_ShutdownFile_TelemetryPacket_2eproto();

class TelemetryPacket;

// ===================================================================

class TelemetryPacket : public ::google::protobuf::Message {
 public:
  TelemetryPacket();
  virtual ~TelemetryPacket();

  TelemetryPacket(const TelemetryPacket& from);

  inline TelemetryPacket& operator=(const TelemetryPacket& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TelemetryPacket& default_instance();

  void Swap(TelemetryPacket* other);

  // implements Message ----------------------------------------------

  TelemetryPacket* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TelemetryPacket& from);
  void MergeFrom(const TelemetryPacket& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 seqNo = 1;
  inline bool has_seqno() const;
  inline void clear_seqno();
  static const int kSeqNoFieldNumber = 1;
  inline ::google::protobuf::int32 seqno() const;
  inline void set_seqno(::google::protobuf::int32 value);

  // required float accx = 2;
  inline bool has_accx() const;
  inline void clear_accx();
  static const int kAccxFieldNumber = 2;
  inline float accx() const;
  inline void set_accx(float value);

  // required float accy = 3;
  inline bool has_accy() const;
  inline void clear_accy();
  static const int kAccyFieldNumber = 3;
  inline float accy() const;
  inline void set_accy(float value);

  // required float accz = 4;
  inline bool has_accz() const;
  inline void clear_accz();
  static const int kAcczFieldNumber = 4;
  inline float accz() const;
  inline void set_accz(float value);

  // required float pitch = 5;
  inline bool has_pitch() const;
  inline void clear_pitch();
  static const int kPitchFieldNumber = 5;
  inline float pitch() const;
  inline void set_pitch(float value);

  // required float roll = 6;
  inline bool has_roll() const;
  inline void clear_roll();
  static const int kRollFieldNumber = 6;
  inline float roll() const;
  inline void set_roll(float value);

  // required float yaw = 7;
  inline bool has_yaw() const;
  inline void clear_yaw();
  static const int kYawFieldNumber = 7;
  inline float yaw() const;
  inline void set_yaw(float value);

  // required double lat = 8;
  inline bool has_lat() const;
  inline void clear_lat();
  static const int kLatFieldNumber = 8;
  inline double lat() const;
  inline void set_lat(double value);

  // required double lng = 9;
  inline bool has_lng() const;
  inline void clear_lng();
  static const int kLngFieldNumber = 9;
  inline double lng() const;
  inline void set_lng(double value);

  // required float alt = 10;
  inline bool has_alt() const;
  inline void clear_alt();
  static const int kAltFieldNumber = 10;
  inline float alt() const;
  inline void set_alt(float value);

  // required float speed = 11;
  inline bool has_speed() const;
  inline void clear_speed();
  static const int kSpeedFieldNumber = 11;
  inline float speed() const;
  inline void set_speed(float value);

  // required int32 barometer = 12;
  inline bool has_barometer() const;
  inline void clear_barometer();
  static const int kBarometerFieldNumber = 12;
  inline ::google::protobuf::int32 barometer() const;
  inline void set_barometer(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:uavforge.TelemetryPacket)
 private:
  inline void set_has_seqno();
  inline void clear_has_seqno();
  inline void set_has_accx();
  inline void clear_has_accx();
  inline void set_has_accy();
  inline void clear_has_accy();
  inline void set_has_accz();
  inline void clear_has_accz();
  inline void set_has_pitch();
  inline void clear_has_pitch();
  inline void set_has_roll();
  inline void clear_has_roll();
  inline void set_has_yaw();
  inline void clear_has_yaw();
  inline void set_has_lat();
  inline void clear_has_lat();
  inline void set_has_lng();
  inline void clear_has_lng();
  inline void set_has_alt();
  inline void clear_has_alt();
  inline void set_has_speed();
  inline void clear_has_speed();
  inline void set_has_barometer();
  inline void clear_has_barometer();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 seqno_;
  float accx_;
  float accy_;
  float accz_;
  float pitch_;
  float roll_;
  double lat_;
  float yaw_;
  float alt_;
  double lng_;
  float speed_;
  ::google::protobuf::int32 barometer_;
  friend void  protobuf_AddDesc_TelemetryPacket_2eproto();
  friend void protobuf_AssignDesc_TelemetryPacket_2eproto();
  friend void protobuf_ShutdownFile_TelemetryPacket_2eproto();

  void InitAsDefaultInstance();
  static TelemetryPacket* default_instance_;
};
// ===================================================================


// ===================================================================

// TelemetryPacket

// required int32 seqNo = 1;
inline bool TelemetryPacket::has_seqno() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TelemetryPacket::set_has_seqno() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TelemetryPacket::clear_has_seqno() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TelemetryPacket::clear_seqno() {
  seqno_ = 0;
  clear_has_seqno();
}
inline ::google::protobuf::int32 TelemetryPacket::seqno() const {
  // @@protoc_insertion_point(field_get:uavforge.TelemetryPacket.seqNo)
  return seqno_;
}
inline void TelemetryPacket::set_seqno(::google::protobuf::int32 value) {
  set_has_seqno();
  seqno_ = value;
  // @@protoc_insertion_point(field_set:uavforge.TelemetryPacket.seqNo)
}

// required float accx = 2;
inline bool TelemetryPacket::has_accx() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TelemetryPacket::set_has_accx() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TelemetryPacket::clear_has_accx() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TelemetryPacket::clear_accx() {
  accx_ = 0;
  clear_has_accx();
}
inline float TelemetryPacket::accx() const {
  // @@protoc_insertion_point(field_get:uavforge.TelemetryPacket.accx)
  return accx_;
}
inline void TelemetryPacket::set_accx(float value) {
  set_has_accx();
  accx_ = value;
  // @@protoc_insertion_point(field_set:uavforge.TelemetryPacket.accx)
}

// required float accy = 3;
inline bool TelemetryPacket::has_accy() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TelemetryPacket::set_has_accy() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TelemetryPacket::clear_has_accy() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TelemetryPacket::clear_accy() {
  accy_ = 0;
  clear_has_accy();
}
inline float TelemetryPacket::accy() const {
  // @@protoc_insertion_point(field_get:uavforge.TelemetryPacket.accy)
  return accy_;
}
inline void TelemetryPacket::set_accy(float value) {
  set_has_accy();
  accy_ = value;
  // @@protoc_insertion_point(field_set:uavforge.TelemetryPacket.accy)
}

// required float accz = 4;
inline bool TelemetryPacket::has_accz() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TelemetryPacket::set_has_accz() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TelemetryPacket::clear_has_accz() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TelemetryPacket::clear_accz() {
  accz_ = 0;
  clear_has_accz();
}
inline float TelemetryPacket::accz() const {
  // @@protoc_insertion_point(field_get:uavforge.TelemetryPacket.accz)
  return accz_;
}
inline void TelemetryPacket::set_accz(float value) {
  set_has_accz();
  accz_ = value;
  // @@protoc_insertion_point(field_set:uavforge.TelemetryPacket.accz)
}

// required float pitch = 5;
inline bool TelemetryPacket::has_pitch() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void TelemetryPacket::set_has_pitch() {
  _has_bits_[0] |= 0x00000010u;
}
inline void TelemetryPacket::clear_has_pitch() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void TelemetryPacket::clear_pitch() {
  pitch_ = 0;
  clear_has_pitch();
}
inline float TelemetryPacket::pitch() const {
  // @@protoc_insertion_point(field_get:uavforge.TelemetryPacket.pitch)
  return pitch_;
}
inline void TelemetryPacket::set_pitch(float value) {
  set_has_pitch();
  pitch_ = value;
  // @@protoc_insertion_point(field_set:uavforge.TelemetryPacket.pitch)
}

// required float roll = 6;
inline bool TelemetryPacket::has_roll() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void TelemetryPacket::set_has_roll() {
  _has_bits_[0] |= 0x00000020u;
}
inline void TelemetryPacket::clear_has_roll() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void TelemetryPacket::clear_roll() {
  roll_ = 0;
  clear_has_roll();
}
inline float TelemetryPacket::roll() const {
  // @@protoc_insertion_point(field_get:uavforge.TelemetryPacket.roll)
  return roll_;
}
inline void TelemetryPacket::set_roll(float value) {
  set_has_roll();
  roll_ = value;
  // @@protoc_insertion_point(field_set:uavforge.TelemetryPacket.roll)
}

// required float yaw = 7;
inline bool TelemetryPacket::has_yaw() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void TelemetryPacket::set_has_yaw() {
  _has_bits_[0] |= 0x00000040u;
}
inline void TelemetryPacket::clear_has_yaw() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void TelemetryPacket::clear_yaw() {
  yaw_ = 0;
  clear_has_yaw();
}
inline float TelemetryPacket::yaw() const {
  // @@protoc_insertion_point(field_get:uavforge.TelemetryPacket.yaw)
  return yaw_;
}
inline void TelemetryPacket::set_yaw(float value) {
  set_has_yaw();
  yaw_ = value;
  // @@protoc_insertion_point(field_set:uavforge.TelemetryPacket.yaw)
}

// required double lat = 8;
inline bool TelemetryPacket::has_lat() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void TelemetryPacket::set_has_lat() {
  _has_bits_[0] |= 0x00000080u;
}
inline void TelemetryPacket::clear_has_lat() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void TelemetryPacket::clear_lat() {
  lat_ = 0;
  clear_has_lat();
}
inline double TelemetryPacket::lat() const {
  // @@protoc_insertion_point(field_get:uavforge.TelemetryPacket.lat)
  return lat_;
}
inline void TelemetryPacket::set_lat(double value) {
  set_has_lat();
  lat_ = value;
  // @@protoc_insertion_point(field_set:uavforge.TelemetryPacket.lat)
}

// required double lng = 9;
inline bool TelemetryPacket::has_lng() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void TelemetryPacket::set_has_lng() {
  _has_bits_[0] |= 0x00000100u;
}
inline void TelemetryPacket::clear_has_lng() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void TelemetryPacket::clear_lng() {
  lng_ = 0;
  clear_has_lng();
}
inline double TelemetryPacket::lng() const {
  // @@protoc_insertion_point(field_get:uavforge.TelemetryPacket.lng)
  return lng_;
}
inline void TelemetryPacket::set_lng(double value) {
  set_has_lng();
  lng_ = value;
  // @@protoc_insertion_point(field_set:uavforge.TelemetryPacket.lng)
}

// required float alt = 10;
inline bool TelemetryPacket::has_alt() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void TelemetryPacket::set_has_alt() {
  _has_bits_[0] |= 0x00000200u;
}
inline void TelemetryPacket::clear_has_alt() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void TelemetryPacket::clear_alt() {
  alt_ = 0;
  clear_has_alt();
}
inline float TelemetryPacket::alt() const {
  // @@protoc_insertion_point(field_get:uavforge.TelemetryPacket.alt)
  return alt_;
}
inline void TelemetryPacket::set_alt(float value) {
  set_has_alt();
  alt_ = value;
  // @@protoc_insertion_point(field_set:uavforge.TelemetryPacket.alt)
}

// required float speed = 11;
inline bool TelemetryPacket::has_speed() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void TelemetryPacket::set_has_speed() {
  _has_bits_[0] |= 0x00000400u;
}
inline void TelemetryPacket::clear_has_speed() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void TelemetryPacket::clear_speed() {
  speed_ = 0;
  clear_has_speed();
}
inline float TelemetryPacket::speed() const {
  // @@protoc_insertion_point(field_get:uavforge.TelemetryPacket.speed)
  return speed_;
}
inline void TelemetryPacket::set_speed(float value) {
  set_has_speed();
  speed_ = value;
  // @@protoc_insertion_point(field_set:uavforge.TelemetryPacket.speed)
}

// required int32 barometer = 12;
inline bool TelemetryPacket::has_barometer() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void TelemetryPacket::set_has_barometer() {
  _has_bits_[0] |= 0x00000800u;
}
inline void TelemetryPacket::clear_has_barometer() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void TelemetryPacket::clear_barometer() {
  barometer_ = 0;
  clear_has_barometer();
}
inline ::google::protobuf::int32 TelemetryPacket::barometer() const {
  // @@protoc_insertion_point(field_get:uavforge.TelemetryPacket.barometer)
  return barometer_;
}
inline void TelemetryPacket::set_barometer(::google::protobuf::int32 value) {
  set_has_barometer();
  barometer_ = value;
  // @@protoc_insertion_point(field_set:uavforge.TelemetryPacket.barometer)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace uavforge

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_TelemetryPacket_2eproto__INCLUDED
