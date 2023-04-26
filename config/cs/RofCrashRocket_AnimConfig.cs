//THIS FILE IS GENERATED BY MARFU, DO NOT EDIT IT!
using System;
using System.Text;
using System.Collections.Generic;
namespace Rof
{
public class RofCrashRocket_AnimConfigRow
{
public int ID { get; private set; }
public int Title { get; private set; }
public int Content { get; private set; }
public int ReadBody(byte[] rData, int nOffset)
{
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
this.ID = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
this.Title = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
this.Content = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
return nOffset;
}
}
public class RofCrashRocket_AnimConfigTable
{
private int mRowNum;
private Dictionary<int, RofCrashRocket_AnimConfigRow> mIDMap;
private Dictionary<int, int> mRowMap;
public int RowNum { get { return this.mRowNum; } }
public void Init(byte[] rTotalBuffer)
{
mIDMap = new Dictionary<int, RofCrashRocket_AnimConfigRow>();
this.mRowMap = new Dictionary<int, int>();
int nOffset = 0;
if (BitConverter.IsLittleEndian) { Array.Reverse(rTotalBuffer, nOffset, 4); }
this.mRowNum = BitConverter.ToInt32(rTotalBuffer, nOffset); nOffset += 4;
for (int i = 0; i < this.mRowNum; i++)
{
if (BitConverter.IsLittleEndian) { Array.Reverse(rTotalBuffer, nOffset, 4); }
int nID = BitConverter.ToInt32(rTotalBuffer, nOffset);
RofCrashRocket_AnimConfigRow rModel = new RofCrashRocket_AnimConfigRow();
if (BitConverter.IsLittleEndian) { Array.Reverse(rTotalBuffer, nOffset, 4); }
nOffset = rModel.ReadBody(rTotalBuffer, nOffset);
this.mIDMap.Add(nID, rModel);
this.mRowMap.Add(i, nID);
}
}
public RofCrashRocket_AnimConfigRow GetDataByID(int nID)
{
if (this.mIDMap.ContainsKey(nID) == false)
{
return null;
}
return this.mIDMap[nID];
}
public RofCrashRocket_AnimConfigRow GetDataByRow(int nIndex)
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
