#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void NhapDIEM(DIEM &);
void XuatDIEM(DIEM);

int main()
{
	DIEM A;
	NhapDIEM(A);
	XuatDIEM(A);
	return 0;
}

void NhapDIEM(DIEM &A)
{
	cout << "\nNhap Hoanh Do:";
	cin >> A.x;
	cout << "Nhap Tung Do:";
	cin >> A.y;
}

void XuatDIEM(DIEM A)
{
	cout << "\nHoanh Do La:";
	cout << A.x;
	cout << "\nTung Do La:";
	cout << A.y;
}