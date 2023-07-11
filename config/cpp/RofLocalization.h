//THIS FILE IS GENERATED BY MARFU, DO NOT EDIT IT!
#pragma once
#include "RofDefine.h"

struct sRofLocalizationRow
{
int ID;
std::string Type;
std::string English;
std::string Chinese;
void ReadBody(char aBuffer[],int& aOffset)
{
bool bIsLittleEndian = IsLittleEndian();
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
ID = ToInt32(aBuffer, aOffset); aOffset += 4;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
int nTypeLen = ToInt32(aBuffer, aOffset); aOffset += 4;
Type = ToString(aBuffer, aOffset, nTypeLen); aOffset += nTypeLen;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
int nEnglishLen = ToInt32(aBuffer, aOffset); aOffset += 4;
English = ToString(aBuffer, aOffset, nEnglishLen); aOffset += nEnglishLen;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
int nChineseLen = ToInt32(aBuffer, aOffset); aOffset += 4;
Chinese = ToString(aBuffer, aOffset, nChineseLen); aOffset += nChineseLen;
}
};
struct sRofLocalizationTable
{
private:
int mRowNum;
std::map<int, sRofLocalizationRow> mIDMap;
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
sRofLocalizationRow rModel;
if (bIsLittleEndian) Reverse(aBuf, nOffset, 4);
rModel.ReadBody(aBuf, nOffset);
mIDMap[nID] = rModel;
mRowMap[i] = nID;
}
}
sRofLocalizationRow* GetDataByID(int aID)
{
std::map<int, sRofLocalizationRow>::iterator pIter = mIDMap.find(aID);
if (pIter == mIDMap.end())
{
return NULL;
}
return &pIter->second;
}
sRofLocalizationRow* GetDataByRow(int aIndex)
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
