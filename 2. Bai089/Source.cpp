#include <iostream>
using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN &);
int SoThuTu(THOIGIAN);
int KhoangCach(THOIGIAN, THOIGIAN);

int main()
{
	THOIGIAN x, y;
	Nhap(x);
	Nhap(y);
	cout << KhoangCach(x, y);
	return 0;
}

void Nhap(THOIGIAN &x)
{
	cout << "\nNhap Gio:";
	cin >> x.Gio;
	cout << "Nhap Phut:";
	cin >> x.Phut;
	cout << "Nhap Giay:";
	cin >> x.Giay;
}

int SoThuTu(THOIGIAN x)
{
	return x.Gio * 60 * 60 + x.Phut * 60 + x.Giay;
}

int KhoangCach(THOIGIAN x, THOIGIAN y)
{
	return SoThuTu(x) - SoThuTu(y);
}