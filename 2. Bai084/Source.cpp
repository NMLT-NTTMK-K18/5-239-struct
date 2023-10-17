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
void Xuat(THOIGIAN);

int main()
{

	return 0;
}

void Nhap(THOIGIAN &x)
{
	cout << "\nNhap Gio:";
	cin >> x.Gio;
	cout << "\nNhap Phut:";
	cin >> x.Phut;
	cout << "\nNhap Giay:";
	cin >> x.Giay;
}

void Xuat(THOIGIAN x)
{
	cout << "\nGio:" << x.Gio;
	cout << "\nPhut:" << x.Phut;
	cout << "\nGiay:" << x.Giay;
}