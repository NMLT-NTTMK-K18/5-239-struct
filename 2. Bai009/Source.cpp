#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;
void NhapDiem(Diem &);
void XuatDiem(Diem);
void NhapDuongTron(DUONGTRON &);
void XuatDuongTron(DUONGTRON);

int main()
{
	DUONGTRON a;
	NhapDuongTron(a);
	XuatDuongTron(a);
	return 0;
}

void NhapDiem(DIEM &I)
{
	cout << "\nNhap Hoanh Do:";
	cin >> I.x;
	cout << "\nNhap Tung Do:";
	cin >> I.y;
}

void XuatDiem(DIEM I)
{
	cout << I.x << endl;
	cout << I.y << endl;
}
void NhapDuongTron(DuongTron &a)
{
	cout << "Nhap Tam:\n";
	NhapDiem(a.I);
	cout << "Nhap Ban Kinh:";
	cin >> a.R;
}