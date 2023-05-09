//THIS FILE IS GENERATED BY MARFU, DO NOT EDIT IT!
#pragma once
#include "RofDefine.h"

struct sRofCrash_BaseRow
{
int ID;
std::vector<int> Bet;
std::vector<int> RobotBetPro;
std::vector<int> Dot;
std::vector<int> BezierA;
std::vector<int> BezierB;
std::vector<int> BezierC;
int MaxBet;
int BetTime;
int ResultTime;
int GameTime;
void ReadBody(char aBuffer[],int& aOffset)
{
bool bIsLittleEndian = IsLittleEndian();
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
ID = ToInt32(aBuffer, aOffset); aOffset += 4;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
int nBetLen = ToInt32(aBuffer, aOffset); aOffset += 4;
for (int i = 0; i < nBetLen; i++)
{
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
Bet.push_back(ToInt32(aBuffer, aOffset)); aOffset += 4;
}
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
int nRobotBetProLen = ToInt32(aBuffer, aOffset); aOffset += 4;
for (int i = 0; i < nRobotBetProLen; i++)
{
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
RobotBetPro.push_back(ToInt32(aBuffer, aOffset)); aOffset += 4;
}
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
int nDotLen = ToInt32(aBuffer, aOffset); aOffset += 4;
for (int i = 0; i < nDotLen; i++)
{
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
Dot.push_back(ToInt32(aBuffer, aOffset)); aOffset += 4;
}
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
int nBezierALen = ToInt32(aBuffer, aOffset); aOffset += 4;
for (int i = 0; i < nBezierALen; i++)
{
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
BezierA.push_back(ToInt32(aBuffer, aOffset)); aOffset += 4;
}
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
int nBezierBLen = ToInt32(aBuffer, aOffset); aOffset += 4;
for (int i = 0; i < nBezierBLen; i++)
{
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
BezierB.push_back(ToInt32(aBuffer, aOffset)); aOffset += 4;
}
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
int nBezierCLen = ToInt32(aBuffer, aOffset); aOffset += 4;
for (int i = 0; i < nBezierCLen; i++)
{
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
BezierC.push_back(ToInt32(aBuffer, aOffset)); aOffset += 4;
}
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
MaxBet = ToInt32(aBuffer, aOffset); aOffset += 4;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
BetTime = ToInt32(aBuffer, aOffset); aOffset += 4;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
ResultTime = ToInt32(aBuffer, aOffset); aOffset += 4;
if (bIsLittleEndian) Reverse(aBuffer, aOffset, 4);
GameTime = ToInt32(aBuffer, aOffset); aOffset += 4;
}
};
struct sRofCrash_BaseTable
{
private:
int mRowNum;
std::map<int, sRofCrash_BaseRow> mIDMap;
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
sRofCrash_BaseRow rModel;
if (bIsLittleEndian) Reverse(aBuf, nOffset, 4);
rModel.ReadBody(aBuf, nOffset);
mIDMap[nID] = rModel;
mRowMap[i] = nID;
}
}
sRofCrash_BaseRow* GetDataByID(int aID)
{
std::map<int, sRofCrash_BaseRow>::iterator pIter = mIDMap.find(aID);
if (pIter == mIDMap.end())
{
return NULL;
}
return &pIter->second;
}
sRofCrash_BaseRow* GetDataByRow(int aIndex)
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