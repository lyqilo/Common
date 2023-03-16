// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: Proto/Login/Login.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
/// <summary>Holder for reflection information generated from Proto/Login/Login.proto</summary>
public static partial class LoginReflection {

  #region Descriptor
  /// <summary>File descriptor for Proto/Login/Login.proto</summary>
  public static pbr::FileDescriptor Descriptor {
    get { return descriptor; }
  }
  private static pbr::FileDescriptor descriptor;

  static LoginReflection() {
    byte[] descriptorData = global::System.Convert.FromBase64String(
        string.Concat(
          "ChdQcm90by9Mb2dpbi9Mb2dpbi5wcm90byIhCg5Nc2dQbGF5ZXJMb2dpbhIP",
          "CgdhY2NvdW50GAEgASgJIqUBChJNc2dQbGF5ZXJMb2dpblJlc3ASDwoHdXNl",
          "cl9pZBgBIAEoBRIUCgxiZWF1dGlmdWxfaWQYAiABKAUSEAoIbmlja25hbWUY",
          "AyABKAkSEQoJdXNlcl90eXBlGAQgASgFEgwKBGNvaW4YBSABKAQSEQoJYmFu",
          "a19jb2luGAYgASgEEg8KB2hlYWRfaWQYByABKAUSEQoJcGhvbmVfbnVtGAgg",
          "ASgJYgZwcm90bzM="));
    descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
        new pbr::FileDescriptor[] { },
        new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
          new pbr::GeneratedClrTypeInfo(typeof(global::MsgPlayerLogin), global::MsgPlayerLogin.Parser, new[]{ "Account" }, null, null, null, null),
          new pbr::GeneratedClrTypeInfo(typeof(global::MsgPlayerLoginResp), global::MsgPlayerLoginResp.Parser, new[]{ "UserId", "BeautifulId", "Nickname", "UserType", "Coin", "BankCoin", "HeadId", "PhoneNum" }, null, null, null, null)
        }));
  }
  #endregion

}
#region Messages
public sealed partial class MsgPlayerLogin : pb::IMessage<MsgPlayerLogin>
#if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    , pb::IBufferMessage
#endif
{
  private static readonly pb::MessageParser<MsgPlayerLogin> _parser = new pb::MessageParser<MsgPlayerLogin>(() => new MsgPlayerLogin());
  private pb::UnknownFieldSet _unknownFields;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pb::MessageParser<MsgPlayerLogin> Parser { get { return _parser; } }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pbr::MessageDescriptor Descriptor {
    get { return global::LoginReflection.Descriptor.MessageTypes[0]; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  pbr::MessageDescriptor pb::IMessage.Descriptor {
    get { return Descriptor; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgPlayerLogin() {
    OnConstruction();
  }

  partial void OnConstruction();

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgPlayerLogin(MsgPlayerLogin other) : this() {
    account_ = other.account_;
    _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgPlayerLogin Clone() {
    return new MsgPlayerLogin(this);
  }

  /// <summary>Field number for the "account" field.</summary>
  public const int AccountFieldNumber = 1;
  private string account_ = "";
  /// <summary>
  ///玩家账号
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string Account {
    get { return account_; }
    set {
      account_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override bool Equals(object other) {
    return Equals(other as MsgPlayerLogin);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public bool Equals(MsgPlayerLogin other) {
    if (ReferenceEquals(other, null)) {
      return false;
    }
    if (ReferenceEquals(other, this)) {
      return true;
    }
    if (Account != other.Account) return false;
    return Equals(_unknownFields, other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override int GetHashCode() {
    int hash = 1;
    if (Account.Length != 0) hash ^= Account.GetHashCode();
    if (_unknownFields != null) {
      hash ^= _unknownFields.GetHashCode();
    }
    return hash;
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override string ToString() {
    return pb::JsonFormatter.ToDiagnosticString(this);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void WriteTo(pb::CodedOutputStream output) {
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    output.WriteRawMessage(this);
  #else
    if (Account.Length != 0) {
      output.WriteRawTag(10);
      output.WriteString(Account);
    }
    if (_unknownFields != null) {
      _unknownFields.WriteTo(output);
    }
  #endif
  }

  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
    if (Account.Length != 0) {
      output.WriteRawTag(10);
      output.WriteString(Account);
    }
    if (_unknownFields != null) {
      _unknownFields.WriteTo(ref output);
    }
  }
  #endif

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int CalculateSize() {
    int size = 0;
    if (Account.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(Account);
    }
    if (_unknownFields != null) {
      size += _unknownFields.CalculateSize();
    }
    return size;
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void MergeFrom(MsgPlayerLogin other) {
    if (other == null) {
      return;
    }
    if (other.Account.Length != 0) {
      Account = other.Account;
    }
    _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void MergeFrom(pb::CodedInputStream input) {
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    input.ReadRawMessage(this);
  #else
    uint tag;
    while ((tag = input.ReadTag()) != 0) {
      switch(tag) {
        default:
          _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
          break;
        case 10: {
          Account = input.ReadString();
          break;
        }
      }
    }
  #endif
  }

  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
    uint tag;
    while ((tag = input.ReadTag()) != 0) {
      switch(tag) {
        default:
          _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
          break;
        case 10: {
          Account = input.ReadString();
          break;
        }
      }
    }
  }
  #endif

}

public sealed partial class MsgPlayerLoginResp : pb::IMessage<MsgPlayerLoginResp>
#if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    , pb::IBufferMessage
#endif
{
  private static readonly pb::MessageParser<MsgPlayerLoginResp> _parser = new pb::MessageParser<MsgPlayerLoginResp>(() => new MsgPlayerLoginResp());
  private pb::UnknownFieldSet _unknownFields;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pb::MessageParser<MsgPlayerLoginResp> Parser { get { return _parser; } }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pbr::MessageDescriptor Descriptor {
    get { return global::LoginReflection.Descriptor.MessageTypes[1]; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  pbr::MessageDescriptor pb::IMessage.Descriptor {
    get { return Descriptor; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgPlayerLoginResp() {
    OnConstruction();
  }

  partial void OnConstruction();

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgPlayerLoginResp(MsgPlayerLoginResp other) : this() {
    userId_ = other.userId_;
    beautifulId_ = other.beautifulId_;
    nickname_ = other.nickname_;
    userType_ = other.userType_;
    coin_ = other.coin_;
    bankCoin_ = other.bankCoin_;
    headId_ = other.headId_;
    phoneNum_ = other.phoneNum_;
    _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public MsgPlayerLoginResp Clone() {
    return new MsgPlayerLoginResp(this);
  }

  /// <summary>Field number for the "user_id" field.</summary>
  public const int UserIdFieldNumber = 1;
  private int userId_;
  /// <summary>
  ///玩家ID
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int UserId {
    get { return userId_; }
    set {
      userId_ = value;
    }
  }

  /// <summary>Field number for the "beautiful_id" field.</summary>
  public const int BeautifulIdFieldNumber = 2;
  private int beautifulId_;
  /// <summary>
  ///玩家靓号
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int BeautifulId {
    get { return beautifulId_; }
    set {
      beautifulId_ = value;
    }
  }

  /// <summary>Field number for the "nickname" field.</summary>
  public const int NicknameFieldNumber = 3;
  private string nickname_ = "";
  /// <summary>
  ///玩家昵称
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string Nickname {
    get { return nickname_; }
    set {
      nickname_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  /// <summary>Field number for the "user_type" field.</summary>
  public const int UserTypeFieldNumber = 4;
  private int userType_;
  /// <summary>
  ///玩家类型
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int UserType {
    get { return userType_; }
    set {
      userType_ = value;
    }
  }

  /// <summary>Field number for the "coin" field.</summary>
  public const int CoinFieldNumber = 5;
  private ulong coin_;
  /// <summary>
  ///玩家金币
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public ulong Coin {
    get { return coin_; }
    set {
      coin_ = value;
    }
  }

  /// <summary>Field number for the "bank_coin" field.</summary>
  public const int BankCoinFieldNumber = 6;
  private ulong bankCoin_;
  /// <summary>
  ///银行金币
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public ulong BankCoin {
    get { return bankCoin_; }
    set {
      bankCoin_ = value;
    }
  }

  /// <summary>Field number for the "head_id" field.</summary>
  public const int HeadIdFieldNumber = 7;
  private int headId_;
  /// <summary>
  ///头像id
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int HeadId {
    get { return headId_; }
    set {
      headId_ = value;
    }
  }

  /// <summary>Field number for the "phone_num" field.</summary>
  public const int PhoneNumFieldNumber = 8;
  private string phoneNum_ = "";
  /// <summary>
  ///手机号
  /// </summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string PhoneNum {
    get { return phoneNum_; }
    set {
      phoneNum_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override bool Equals(object other) {
    return Equals(other as MsgPlayerLoginResp);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public bool Equals(MsgPlayerLoginResp other) {
    if (ReferenceEquals(other, null)) {
      return false;
    }
    if (ReferenceEquals(other, this)) {
      return true;
    }
    if (UserId != other.UserId) return false;
    if (BeautifulId != other.BeautifulId) return false;
    if (Nickname != other.Nickname) return false;
    if (UserType != other.UserType) return false;
    if (Coin != other.Coin) return false;
    if (BankCoin != other.BankCoin) return false;
    if (HeadId != other.HeadId) return false;
    if (PhoneNum != other.PhoneNum) return false;
    return Equals(_unknownFields, other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override int GetHashCode() {
    int hash = 1;
    if (UserId != 0) hash ^= UserId.GetHashCode();
    if (BeautifulId != 0) hash ^= BeautifulId.GetHashCode();
    if (Nickname.Length != 0) hash ^= Nickname.GetHashCode();
    if (UserType != 0) hash ^= UserType.GetHashCode();
    if (Coin != 0UL) hash ^= Coin.GetHashCode();
    if (BankCoin != 0UL) hash ^= BankCoin.GetHashCode();
    if (HeadId != 0) hash ^= HeadId.GetHashCode();
    if (PhoneNum.Length != 0) hash ^= PhoneNum.GetHashCode();
    if (_unknownFields != null) {
      hash ^= _unknownFields.GetHashCode();
    }
    return hash;
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override string ToString() {
    return pb::JsonFormatter.ToDiagnosticString(this);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void WriteTo(pb::CodedOutputStream output) {
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    output.WriteRawMessage(this);
  #else
    if (UserId != 0) {
      output.WriteRawTag(8);
      output.WriteInt32(UserId);
    }
    if (BeautifulId != 0) {
      output.WriteRawTag(16);
      output.WriteInt32(BeautifulId);
    }
    if (Nickname.Length != 0) {
      output.WriteRawTag(26);
      output.WriteString(Nickname);
    }
    if (UserType != 0) {
      output.WriteRawTag(32);
      output.WriteInt32(UserType);
    }
    if (Coin != 0UL) {
      output.WriteRawTag(40);
      output.WriteUInt64(Coin);
    }
    if (BankCoin != 0UL) {
      output.WriteRawTag(48);
      output.WriteUInt64(BankCoin);
    }
    if (HeadId != 0) {
      output.WriteRawTag(56);
      output.WriteInt32(HeadId);
    }
    if (PhoneNum.Length != 0) {
      output.WriteRawTag(66);
      output.WriteString(PhoneNum);
    }
    if (_unknownFields != null) {
      _unknownFields.WriteTo(output);
    }
  #endif
  }

  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
    if (UserId != 0) {
      output.WriteRawTag(8);
      output.WriteInt32(UserId);
    }
    if (BeautifulId != 0) {
      output.WriteRawTag(16);
      output.WriteInt32(BeautifulId);
    }
    if (Nickname.Length != 0) {
      output.WriteRawTag(26);
      output.WriteString(Nickname);
    }
    if (UserType != 0) {
      output.WriteRawTag(32);
      output.WriteInt32(UserType);
    }
    if (Coin != 0UL) {
      output.WriteRawTag(40);
      output.WriteUInt64(Coin);
    }
    if (BankCoin != 0UL) {
      output.WriteRawTag(48);
      output.WriteUInt64(BankCoin);
    }
    if (HeadId != 0) {
      output.WriteRawTag(56);
      output.WriteInt32(HeadId);
    }
    if (PhoneNum.Length != 0) {
      output.WriteRawTag(66);
      output.WriteString(PhoneNum);
    }
    if (_unknownFields != null) {
      _unknownFields.WriteTo(ref output);
    }
  }
  #endif

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int CalculateSize() {
    int size = 0;
    if (UserId != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(UserId);
    }
    if (BeautifulId != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(BeautifulId);
    }
    if (Nickname.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(Nickname);
    }
    if (UserType != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(UserType);
    }
    if (Coin != 0UL) {
      size += 1 + pb::CodedOutputStream.ComputeUInt64Size(Coin);
    }
    if (BankCoin != 0UL) {
      size += 1 + pb::CodedOutputStream.ComputeUInt64Size(BankCoin);
    }
    if (HeadId != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(HeadId);
    }
    if (PhoneNum.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(PhoneNum);
    }
    if (_unknownFields != null) {
      size += _unknownFields.CalculateSize();
    }
    return size;
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void MergeFrom(MsgPlayerLoginResp other) {
    if (other == null) {
      return;
    }
    if (other.UserId != 0) {
      UserId = other.UserId;
    }
    if (other.BeautifulId != 0) {
      BeautifulId = other.BeautifulId;
    }
    if (other.Nickname.Length != 0) {
      Nickname = other.Nickname;
    }
    if (other.UserType != 0) {
      UserType = other.UserType;
    }
    if (other.Coin != 0UL) {
      Coin = other.Coin;
    }
    if (other.BankCoin != 0UL) {
      BankCoin = other.BankCoin;
    }
    if (other.HeadId != 0) {
      HeadId = other.HeadId;
    }
    if (other.PhoneNum.Length != 0) {
      PhoneNum = other.PhoneNum;
    }
    _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void MergeFrom(pb::CodedInputStream input) {
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    input.ReadRawMessage(this);
  #else
    uint tag;
    while ((tag = input.ReadTag()) != 0) {
      switch(tag) {
        default:
          _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
          break;
        case 8: {
          UserId = input.ReadInt32();
          break;
        }
        case 16: {
          BeautifulId = input.ReadInt32();
          break;
        }
        case 26: {
          Nickname = input.ReadString();
          break;
        }
        case 32: {
          UserType = input.ReadInt32();
          break;
        }
        case 40: {
          Coin = input.ReadUInt64();
          break;
        }
        case 48: {
          BankCoin = input.ReadUInt64();
          break;
        }
        case 56: {
          HeadId = input.ReadInt32();
          break;
        }
        case 66: {
          PhoneNum = input.ReadString();
          break;
        }
      }
    }
  #endif
  }

  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
    uint tag;
    while ((tag = input.ReadTag()) != 0) {
      switch(tag) {
        default:
          _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
          break;
        case 8: {
          UserId = input.ReadInt32();
          break;
        }
        case 16: {
          BeautifulId = input.ReadInt32();
          break;
        }
        case 26: {
          Nickname = input.ReadString();
          break;
        }
        case 32: {
          UserType = input.ReadInt32();
          break;
        }
        case 40: {
          Coin = input.ReadUInt64();
          break;
        }
        case 48: {
          BankCoin = input.ReadUInt64();
          break;
        }
        case 56: {
          HeadId = input.ReadInt32();
          break;
        }
        case 66: {
          PhoneNum = input.ReadString();
          break;
        }
      }
    }
  }
  #endif

}

#endregion


#endregion Designer generated code
