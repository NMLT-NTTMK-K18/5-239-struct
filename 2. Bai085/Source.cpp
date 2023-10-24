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
bool ktHopLe(THOIGIAN);

int main()
{
	THOIGIAN x;
	Nhap(x);
	cout << ktHopLe(x) << endl;
	Xuat(x);
	return 0;
}

void Nhap(THOIGIAN& x)
{
	cout << "Nhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}

void Xuat(THOIGIAN x)
{
	cout << "Gio: " << x.Gio << endl;
	cout << "Phut: " << x.Phut << endl;
	cout << "Giay: " << x.Giay;
}

bool ktHopLe(THOIGIAN x)
{
	if (!(x.Gio >= 0 && x.Gio <= 23))
		return 0;
	if (!(x.Phut >= 0 && x.Phut <= 59))
		return 0;
	if (!(x.Giay >= 0 && x.Giay <= 59))
		return 0;
	return 1;
}