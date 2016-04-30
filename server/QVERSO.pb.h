// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: QVERSO.proto

#ifndef PROTOBUF_QVERSO_2eproto__INCLUDED
#define PROTOBUF_QVERSO_2eproto__INCLUDED

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

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_QVERSO_2eproto();
void protobuf_AssignDesc_QVERSO_2eproto();
void protobuf_ShutdownFile_QVERSO_2eproto();

class QVERSO;

// ===================================================================

class QVERSO : public ::google::protobuf::Message {
 public:
  QVERSO();
  virtual ~QVERSO();

  QVERSO(const QVERSO& from);

  inline QVERSO& operator=(const QVERSO& from) {
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
  static const QVERSO& default_instance();

  void Swap(QVERSO* other);

  // implements Message ----------------------------------------------

  QVERSO* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const QVERSO& from);
  void MergeFrom(const QVERSO& from);
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

  // optional bool login = 1;
  inline bool has_login() const;
  inline void clear_login();
  static const int kLoginFieldNumber = 1;
  inline bool login() const;
  inline void set_login(bool value);

  // optional string username = 2;
  inline bool has_username() const;
  inline void clear_username();
  static const int kUsernameFieldNumber = 2;
  inline const ::std::string& username() const;
  inline void set_username(const ::std::string& value);
  inline void set_username(const char* value);
  inline void set_username(const char* value, size_t size);
  inline ::std::string* mutable_username();
  inline ::std::string* release_username();
  inline void set_allocated_username(::std::string* username);

  // optional string password = 3;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 3;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  inline void set_allocated_password(::std::string* password);

  // @@protoc_insertion_point(class_scope:QVERSO)
 private:
  inline void set_has_login();
  inline void clear_has_login();
  inline void set_has_username();
  inline void clear_has_username();
  inline void set_has_password();
  inline void clear_has_password();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* username_;
  ::std::string* password_;
  bool login_;
  friend void  protobuf_AddDesc_QVERSO_2eproto();
  friend void protobuf_AssignDesc_QVERSO_2eproto();
  friend void protobuf_ShutdownFile_QVERSO_2eproto();

  void InitAsDefaultInstance();
  static QVERSO* default_instance_;
};
// ===================================================================


// ===================================================================

// QVERSO

// optional bool login = 1;
inline bool QVERSO::has_login() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void QVERSO::set_has_login() {
  _has_bits_[0] |= 0x00000001u;
}
inline void QVERSO::clear_has_login() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void QVERSO::clear_login() {
  login_ = false;
  clear_has_login();
}
inline bool QVERSO::login() const {
  // @@protoc_insertion_point(field_get:QVERSO.login)
  return login_;
}
inline void QVERSO::set_login(bool value) {
  set_has_login();
  login_ = value;
  // @@protoc_insertion_point(field_set:QVERSO.login)
}

// optional string username = 2;
inline bool QVERSO::has_username() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void QVERSO::set_has_username() {
  _has_bits_[0] |= 0x00000002u;
}
inline void QVERSO::clear_has_username() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void QVERSO::clear_username() {
  if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_->clear();
  }
  clear_has_username();
}
inline const ::std::string& QVERSO::username() const {
  // @@protoc_insertion_point(field_get:QVERSO.username)
  return *username_;
}
inline void QVERSO::set_username(const ::std::string& value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  username_->assign(value);
  // @@protoc_insertion_point(field_set:QVERSO.username)
}
inline void QVERSO::set_username(const char* value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  username_->assign(value);
  // @@protoc_insertion_point(field_set_char:QVERSO.username)
}
inline void QVERSO::set_username(const char* value, size_t size) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  username_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:QVERSO.username)
}
inline ::std::string* QVERSO::mutable_username() {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:QVERSO.username)
  return username_;
}
inline ::std::string* QVERSO::release_username() {
  clear_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = username_;
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void QVERSO::set_allocated_username(::std::string* username) {
  if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete username_;
  }
  if (username) {
    set_has_username();
    username_ = username;
  } else {
    clear_has_username();
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:QVERSO.username)
}

// optional string password = 3;
inline bool QVERSO::has_password() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void QVERSO::set_has_password() {
  _has_bits_[0] |= 0x00000004u;
}
inline void QVERSO::clear_has_password() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void QVERSO::clear_password() {
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_->clear();
  }
  clear_has_password();
}
inline const ::std::string& QVERSO::password() const {
  // @@protoc_insertion_point(field_get:QVERSO.password)
  return *password_;
}
inline void QVERSO::set_password(const ::std::string& value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(value);
  // @@protoc_insertion_point(field_set:QVERSO.password)
}
inline void QVERSO::set_password(const char* value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(value);
  // @@protoc_insertion_point(field_set_char:QVERSO.password)
}
inline void QVERSO::set_password(const char* value, size_t size) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:QVERSO.password)
}
inline ::std::string* QVERSO::mutable_password() {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:QVERSO.password)
  return password_;
}
inline ::std::string* QVERSO::release_password() {
  clear_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = password_;
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void QVERSO::set_allocated_password(::std::string* password) {
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete password_;
  }
  if (password) {
    set_has_password();
    password_ = password;
  } else {
    clear_has_password();
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:QVERSO.password)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_QVERSO_2eproto__INCLUDED
