//THIS FILE IS GENERATED BY MARFU, DO NOT EDIT IT!
using System;
using System.Text;
using System.Collections.Generic;
namespace Rof
{
public class RofExampleRow
{
public int ID { get; private set; }
public int Value1 { get; private set; }
public long Value2 { get; private set; }
public float Value3 { get; private set; }
public double Value4 { get; private set; }
public string Value5 { get; private set; }
public int Value6 { get; private set; }
public List<int> Value7 { get; private set; }
public List<long> Value8 { get; private set; }
public List<float> Value9 { get; private set; }
public List<double> Value10 { get; private set; }
public List<string> Value11 { get; private set; }
public List<NNKV> Value12 { get; private set; }
public NNKV Value13 { get; private set; }
public int ReadBody(byte[] rData, int nOffset)
{
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
this.ID = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
this.Value1 = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 8);}
this.Value2 = BitConverter.ToInt64(rData, nOffset); nOffset += 8;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
this.Value3 = BitConverter.ToSingle(rData, nOffset); nOffset += 4;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 8);}
this.Value4 = BitConverter.ToDouble(rData, nOffset); nOffset += 8;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int nValue5Len = (int)BitConverter.ToUInt32(rData, nOffset); nOffset += 4;
this.Value5 = Encoding.UTF8.GetString(rData, nOffset, nValue5Len); nOffset += nValue5Len;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
this.Value6 = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
this.Value7 = new List<int>();
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int nValue7Len = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
for (int i = 0; i < nValue7Len; i++)
{
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
this.Value7.Add(BitConverter.ToInt32(rData, nOffset)); nOffset += 4;
}
this.Value8 = new List<long>();
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int nValue8Len = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
for (int i = 0; i < nValue8Len; i++)
{
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 8);}
this.Value8.Add(BitConverter.ToInt64(rData, nOffset)); nOffset += 8;
}
this.Value9 = new List<float>();
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int nValue9Len = (int)BitConverter.ToInt32(rData, nOffset); nOffset += 4;
for (int i = 0; i < nValue9Len; i++)
{
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
this.Value9.Add(BitConverter.ToSingle(rData, nOffset)); nOffset += 4;
}
this.Value10 = new List<double>();
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int nValue10Len = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
for (int i = 0; i < nValue10Len; i++)
{
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 8);}
this.Value10.Add(BitConverter.ToDouble(rData, nOffset)); nOffset += 8;
}
this.Value11 = new List<string>();
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int nValue11Len = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
string Value11TempBuf = Encoding.UTF8.GetString(rData, nOffset, nValue11Len); nOffset += nValue11Len;
string[] Value11Elements = Value11TempBuf.Split(',');
foreach(string item in Value11Elements)
{
this.Value11.Add(item);}
this.Value12 = new List<NNKV>();
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int nValue12Len = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
for (int i = 0; i < nValue12Len; i++)
{
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int nKey = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 8);}
double nValue = BitConverter.ToDouble(rData, nOffset); nOffset += 8;
this.Value12.Add(new NNKV(nKey, nValue));
}
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int nValue13K = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 8);}
double nValue13V = BitConverter.ToDouble(rData, nOffset); nOffset += 8;
this.Value13 = new NNKV(nValue13K, nValue13V);
return nOffset;
}
}
public class RofExampleTable
{
private int mRowNum;
private Dictionary<int, RofExampleRow> mIDMap;
private Dictionary<int, int> mRowMap;
public int RowNum { get { return this.mRowNum; } }
public void Init(byte[] rTotalBuffer)
{
mIDMap = new Dictionary<int, RofExampleRow>();
this.mRowMap = new Dictionary<int, int>();
int nOffset = 0;
if (BitConverter.IsLittleEndian) { Array.Reverse(rTotalBuffer, nOffset, 4); }
this.mRowNum = BitConverter.ToInt32(rTotalBuffer, nOffset); nOffset += 4;
for (int i = 0; i < this.mRowNum; i++)
{
if (BitConverter.IsLittleEndian) { Array.Reverse(rTotalBuffer, nOffset, 4); }
int nID = BitConverter.ToInt32(rTotalBuffer, nOffset);
RofExampleRow rModel = new RofExampleRow();
if (BitConverter.IsLittleEndian) { Array.Reverse(rTotalBuffer, nOffset, 4); }
nOffset = rModel.ReadBody(rTotalBuffer, nOffset);
this.mIDMap.Add(nID, rModel);
this.mRowMap.Add(i, nID);
}
}
public RofExampleRow GetDataByID(int nID)
{
if (this.mIDMap.ContainsKey(nID) == false)
{
return null;
}
return this.mIDMap[nID];
}
public RofExampleRow GetDataByRow(int nIndex)
{
if (mRowMap.ContainsKey(nIndex) == false)
{
return null;
}
int nID = mRowMap[nIndex];
return mIDMap[nID];
}
}
}
