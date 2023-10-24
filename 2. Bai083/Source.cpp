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

int main()
{
	THOIGIAN x;
	Nhap(x);
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