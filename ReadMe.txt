========================================================================
			BTTH TUẦN 4: MẢNG PHÂN SỐ
========================================================================

1. Thông tin cá nhân:
MSSV: ------
Họ tên: -------------------

2. Những file này giải quyết yêu cầu
	1. Cho phép người dùng nhập số nguyên n, có kiểm tra, không hợp lệ thì nhập lại.
	2. Tự động phát sinh n phân số, xuất ra mảng n phân số.
	3. Xuất ra phân số lớn nhất, nhỏ nhất.
	4. Khởi tạo mảng phân số khác giống mảng ban đầu, tối giản và xuất ra màng hình mảng này.
	5. Xuất ra màn hình tổng các phân số trong mảng, có rút gọn
	
3. Thiết kế lớp:
	CArrayFraction.h && CArrayFraction.cpp
	Thiết kế cấu trúc:
	SFraction
	+ sNume: int		//tử số
	+ sDeno: int		//mẫu số
	+ reduce: void		//rút gọn phân số

	Thiết kế lớp:
	CArrayFraction 
	+ mpFrctn: SFraction*				//con trỏ cấu trúc SFraction
	+ mSize: int					//kích thước mảng
    - CArrayFraction();				//default constructor
	- CArrayFraction(int n);			//khởi tạo mảng n phân số, phát sinh ngẫu nhiên
	- ~CArrayFraction();				//hủy
	- FindMax(): SFraction;				//phân số lớn nhất mảng
	- FindMin(): SFraction;				//phân số nhỏ nhất mảng
	- copy(const CArrayFraction &ob): void;		//copy, tối giản mảng ob, 
	- CalcSum(): SFraction;				//phân số tổng
	- show(): void;					//xuất mảng

    SFraction operator+(SFraction a, SFraction b);	//dùng trong CalcSum()
	ostream& operator<<(ostream &os, SFraction a);	//dùng trong show()

	1612291.cpp
	Hàm main: 
	

/////////////////////////////////////////////////////////////////////////////
Other standard files:

StdAfx.h, StdAfx.cpp
    

