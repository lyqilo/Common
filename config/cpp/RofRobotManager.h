//THIS FILE IS GENERATED BY MARFU, DO NOT EDIT IT!
#pragma once
#include "RofDefine.h"

struct sRofRobotManagerRow
{
int ID;
int TableNum;
int JoinTableCountLimit;
int MaxRobotNum;
int RobotNum;
int MinGold;
int MaxGold;
int ExitGameMinGold;
int ExitGameMaxGold;
int MinPlayTime;
int MaxPlayTime;
void ReadBody(char aBuffer[],int& aOffset)
{
bool bIsLittleEndian = IsLittleEndian();
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
ID = ToInt32(aBuffer, aOffset); aOffset += 4;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
TableNum = ToInt32(aBuffer, aOffset); aOffset += 4;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
JoinTableCountLimit = ToInt32(aBuffer, aOffset); aOffset += 4;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
MaxRobotNum = ToInt32(aBuffer, aOffset); aOffset += 4;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
RobotNum = ToInt32(aBuffer, aOffset); aOffset += 4;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
MinGold = ToInt32(aBuffer, aOffset); aOffset += 4;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
MaxGold = ToInt32(aBuffer, aOffset); aOffset += 4;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
ExitGameMinGold = ToInt32(aBuffer, aOffset); aOffset += 4;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
ExitGameMaxGold = ToInt32(aBuffer, aOffset); aOffset += 4;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
MinPlayTime = ToInt32(aBuffer, aOffset); aOffset += 4;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
MaxPlayTime = ToInt32(aBuffer, aOffset); aOffset += 4;
}
};
struct sRofRobotManagerTable
{
private:
int mRowNum;
std::map<int, sRofRobotManagerRow> mIDMap;
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
sRofRobotManagerRow rModel;
if (bIsLittleEndian) Reverse(aBuf, nOffset, 4);
rModel.ReadBody(aBuf, nOffset);
mIDMap[nID] = rModel;
mRowMap[i] = nID;
}
}
sRofRobotManagerRow* GetDataByID(int aID)
{
std::map<int, sRofRobotManagerRow>::iterator pIter = mIDMap.find(aID);
if (pIter == mIDMap.end())
{
return NULL;
}
return &pIter->second;
}
sRofRobotManagerRow* GetDataByRow(int aIndex)
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
