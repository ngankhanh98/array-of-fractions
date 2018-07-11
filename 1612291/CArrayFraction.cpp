#include "stdafx.h"
#include "CArrayFraction.h"
using namespace std;


CArrayFraction::CArrayFraction()
{
}

CArrayFraction::CArrayFraction(int n)
{
	mpFrctn = new SFraction[n];
	mSize = n;

	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		mpFrctn[i].sNume = rand() % 99;
		mpFrctn[i].sDeno = 1 + rand() % 98;
	}
}


CArrayFraction::~CArrayFraction()
{
	if (mpFrctn != NULL)
		delete[]mpFrctn;
}

SFraction CArrayFraction::FindMax()
{
	SFraction max{ mpFrctn[0].sNume,mpFrctn[0].sDeno };
	
	for (int i = 1; i < mSize; i++)
		if ((float)max.sNume / max.sDeno < (float)mpFrctn[i].sNume / mpFrctn[i].sDeno)
			max = mpFrctn[i];

	return max;
}

SFraction CArrayFraction::FindMin()
{
	SFraction min{ mpFrctn[0].sNume,mpFrctn[0].sDeno };

	for (int i = 1; i < mSize; i++)
		if ((float)min.sNume / min.sDeno > (float)mpFrctn[i].sNume / mpFrctn[i].sDeno)
			min = mpFrctn[i];

	return min;
}

void CArrayFraction::copy(const CArrayFraction & ob)
{
	mSize = ob.mSize;

	mpFrctn = new SFraction[mSize];
	for (int i = 0; i < mSize; i++)
		mpFrctn[i] = ob.mpFrctn[i].reduce();

	
}

SFraction CArrayFraction::CalcSum()
{
	SFraction sum{ 0,1 };
	for (int i = 0; i < mSize; i++)
		sum = sum + mpFrctn[i];

	return sum.reduce();
}

void CArrayFraction::show()
{
	for (int i = 0; i < mSize; i++)
		cout << mpFrctn[i]<<"  ";
}

SFraction operator+(SFraction a, SFraction b)
{
	SFraction sum = { 0,1 };
	sum.sDeno = a.sDeno*b.sDeno;
	sum.sNume = a.sNume*b.sDeno + a.sDeno*b.sNume;
	return sum;
}

ostream& operator<<(ostream &os, SFraction a)
{
	os<<a.sNume<<"/"<<a.sDeno;
	return os;
}
