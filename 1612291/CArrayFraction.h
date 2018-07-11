#pragma once
#include<iostream>
#include<ctime>
using namespace std;

struct SFraction
{
	int sNume, sDeno;

	SFraction reduce()
	{
		int a = abs(sNume);
		int b = abs(sDeno);
		while (a != b)
		{
			if (a>b)
				a = a - b;
			else
				b = b - a;
		}
		int factor = a;

		sNume /= factor;
		sDeno /= factor;

		return *this;
	}
};

class CArrayFraction
{
	SFraction *mpFrctn;
	int mSize;

public:
	CArrayFraction();
	CArrayFraction(int n);
	~CArrayFraction();

	SFraction FindMax();
	SFraction FindMin();
	void copy(const CArrayFraction &ob);
	SFraction CalcSum();
	void show();
};

SFraction operator+(SFraction a, SFraction b);
ostream& operator<<(ostream &os, SFraction a);