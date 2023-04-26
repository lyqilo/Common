//THIS FILE IS GENERATED BY MARFU, DO NOT EDIT IT!
#pragma once
#include "RofDefine.h"

struct sRofCrashRocket_AnimConfigRow
{
int ID;
int Title;
int Content;
void ReadBody(char aBuffer[],int& aOffset)
{
bool bIsLittleEndian = IsLittleEndian();
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
ID = ToInt32(aBuffer, aOffset); aOffset += 4;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
Title = ToInt32(aBuffer, aOffset); aOffset += 4;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
Content = ToInt32(aBuffer, aOffset); aOffset += 4;
}
};
struct sRofCrashRocket_AnimConfigTable
{
private:
int mRowNum;
std::map<int, sRofCrashRocket_AnimConfigRow> mIDMap;
std::map<int, int> mRowMap;
public:
int GetRowNum(){ return mRowNum; }
void Init(char aBuf[])
{
int nOffset = 0;
bool bIsLittleEndian = IsLittleEndian();
if (bIsLittleEndian) Reverse(aBuf, nOffset, 4);
mRowNum = ToInt32(aBuf, nOffset); nOffset += 4;
for (int i = 0; i < mRowNum; i++)
{
if (bIsLittleEndian) Reverse(aBuf, nOffset, 4);
int nID = ToInt32(aBuf, nOffset);
sRofCrashRocket_AnimConfigRow rModel;
if (bIsLittleEndian) Reverse(aBuf, nOffset, 4);
rModel.ReadBody(aBuf, nOffset);
mIDMap[nID] = rModel;
mRowMap[i] = nID;
}
}
sRofCrashRocket_AnimConfigRow* GetDataByID(int aID)
{
std::map<int, sRofCrashRocket_AnimConfigRow>::iterator pIter = mIDMap.find(aID);
if (pIter == mIDMap.end())
{
return NULL;
}
return &pIter->second;
}
sRofCrashRocket_AnimConfigRow* GetDataByRow(int aIndex)
{
std::map<int, int>::iterator pIter = mRowMap.find(aIndex);
if (pIter == mRowMap.end())
{
return NULL;
}
int nID = mRowMap[aIndex];
return &mIDMap[nID];
}
};
