//THIS FILE IS GENERATED BY MARFU, DO NOT EDIT IT!
using System;
using System.Text;
using System.Collections.Generic;
namespace Rof
{
public class RofModule_GameConfigRow
{
public int ID { get; private set; }
public string scenName { get; private set; }
public string uiName { get; private set; }
public string gameName { get; private set; }
public int clientId { get; private set; }
public int otherClientId { get; private set; }
public List<string> BL { get; private set; }
public string Orientation { get; private set; }
public string StartScriptName { get; private set; }
public string rootName { get; private set; }
public string luaPath { get; private set; }
public string luaRootName { get; private set; }
public string driveType { get; private set; }
public List<string> downFiles { get; private set; }
public int ReadBody(byte[] rData, int nOffset)
{
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
this.ID = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int nscenNameLen = (int)BitConverter.ToUInt32(rData, nOffset); nOffset += 4;
this.scenName = Encoding.UTF8.GetString(rData, nOffset, nscenNameLen); nOffset += nscenNameLen;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int nuiNameLen = (int)BitConverter.ToUInt32(rData, nOffset); nOffset += 4;
this.uiName = Encoding.UTF8.GetString(rData, nOffset, nuiNameLen); nOffset += nuiNameLen;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int ngameNameLen = (int)BitConverter.ToUInt32(rData, nOffset); nOffset += 4;
this.gameName = Encoding.UTF8.GetString(rData, nOffset, ngameNameLen); nOffset += ngameNameLen;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
this.clientId = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
this.otherClientId = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
this.BL = new List<string>();
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int nBLLen = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
string BLTempBuf = Encoding.UTF8.GetString(rData, nOffset, nBLLen); nOffset += nBLLen;
string[] BLElements = BLTempBuf.Split(',');
foreach(string item in BLElements)
{
this.BL.Add(item);}
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int nOrientationLen = (int)BitConverter.ToUInt32(rData, nOffset); nOffset += 4;
this.Orientation = Encoding.UTF8.GetString(rData, nOffset, nOrientationLen); nOffset += nOrientationLen;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int nStartScriptNameLen = (int)BitConverter.ToUInt32(rData, nOffset); nOffset += 4;
this.StartScriptName = Encoding.UTF8.GetString(rData, nOffset, nStartScriptNameLen); nOffset += nStartScriptNameLen;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int nrootNameLen = (int)BitConverter.ToUInt32(rData, nOffset); nOffset += 4;
this.rootName = Encoding.UTF8.GetString(rData, nOffset, nrootNameLen); nOffset += nrootNameLen;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int nluaPathLen = (int)BitConverter.ToUInt32(rData, nOffset); nOffset += 4;
this.luaPath = Encoding.UTF8.GetString(rData, nOffset, nluaPathLen); nOffset += nluaPathLen;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int nluaRootNameLen = (int)BitConverter.ToUInt32(rData, nOffset); nOffset += 4;
this.luaRootName = Encoding.UTF8.GetString(rData, nOffset, nluaRootNameLen); nOffset += nluaRootNameLen;
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int ndriveTypeLen = (int)BitConverter.ToUInt32(rData, nOffset); nOffset += 4;
this.driveType = Encoding.UTF8.GetString(rData, nOffset, ndriveTypeLen); nOffset += ndriveTypeLen;
this.downFiles = new List<string>();
if (BitConverter.IsLittleEndian){Array.Reverse(rData, nOffset, 4);}
int ndownFilesLen = BitConverter.ToInt32(rData, nOffset); nOffset += 4;
string downFilesTempBuf = Encoding.UTF8.GetString(rData, nOffset, ndownFilesLen); nOffset += ndownFilesLen;
string[] downFilesElements = downFilesTempBuf.Split(',');
foreach(string item in downFilesElements)
{
this.downFiles.Add(item);}
return nOffset;
}
}
public class RofModule_GameConfigTable
{
private int mRowNum;
private Dictionary<int, RofModule_GameConfigRow> mIDMap;
private Dictionary<int, int> mRowMap;
public int RowNum { get { return this.mRowNum; } }
public void Init(byte[] rTotalBuffer)
{
mIDMap = new Dictionary<int, RofModule_GameConfigRow>();
this.mRowMap = new Dictionary<int, int>();
int nOffset = 0;
if (BitConverter.IsLittleEndian) { Array.Reverse(rTotalBuffer, nOffset, 4); }
this.mRowNum = BitConverter.ToInt32(rTotalBuffer, nOffset); nOffset += 4;
for (int i = 0; i < this.mRowNum; i++)
{
if (BitConverter.IsLittleEndian) { Array.Reverse(rTotalBuffer, nOffset, 4); }
int nID = BitConverter.ToInt32(rTotalBuffer, nOffset);
RofModule_GameConfigRow rModel = new RofModule_GameConfigRow();
if (BitConverter.IsLittleEndian) { Array.Reverse(rTotalBuffer, nOffset, 4); }
nOffset = rModel.ReadBody(rTotalBuffer, nOffset);
this.mIDMap.Add(nID, rModel);
this.mRowMap.Add(i, nID);
}
}
public RofModule_GameConfigRow GetDataByID(int nID)
{
if (this.mIDMap.ContainsKey(nID) == false)
{
return null;
}
return this.mIDMap[nID];
}
public RofModule_GameConfigRow GetDataByRow(int nIndex)
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
