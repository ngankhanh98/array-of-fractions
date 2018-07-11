// 1612291.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"CArrayFraction.h"
using namespace std;

int main()
{
	int n;
	do
	{
		cout << "n = ";
		cin >> n;
		if (!(0 < n&&n <= 10))
			cout << "khong hop le, vui long nhap lai!" << endl;
	} while (!(0 < n&&n <= 10));

	CArrayFraction Arr(n);
	Arr.show();

	cout << endl;
	cout << "Phan so lon nhat: " << Arr.FindMax() << endl;
	cout << "Phan so nho nhat: " << Arr.FindMin() << endl;

	cout << "Mang phan so copy, toi gian: ";
	CArrayFraction Arr_cpy;
	Arr_cpy.copy(Arr);
	Arr_cpy.show();


	cout << endl;
	cout << "Tong cac phan so trong mang: " << Arr.CalcSum() << endl;

    return 0;
}

