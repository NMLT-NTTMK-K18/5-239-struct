#include <iostream>
using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);
int SoThuTu(THOIGIAN);

int main()
{
	THOIGIAN x;
	Nhap(x);
	Xuat(x);

	cout << "\nSo thu tu giay tai thoi diem do la: " << SoThuTu(x);
	return 0;
}

void Nhap(THOIGIAN& x)
{
	cout << "\nNhap Gio: ";
	cin >> x.Gio;
	cout << "\nNhap Phut: ";
	cin >> x.Phut;
	cout << "\nNhap Giay: ";
	cin >> x.Giay;
}

void Xuat(THOIGIAN x)
{
	cout << "\nGio: " << x.Gio;
	cout << "\nPhut: " << x.Phut;
	cout << "\nGiay: " << x.Giay;
}

int SoThuTu(THOIGIAN x)
{
	return x.Gio * 3600 + x.Phut * 60 + x.Giay;
}