#include <iostream>
#include <iomanip>
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
	THOIGIAN T;
	cout << "Nhap thoi gian T: " << endl;
	Nhap(T);

	cout << "Thoi gian T vua nhap: " << endl;
	Xuat(T);

	return 0;
}

void Nhap(THOIGIAN &x)
{
	cout << "Nhap gio:";
	cin >> x.Gio;
	cout << "Nhap phut:";
	cin >> x.Phut;
	cout << "Nhap giay:";
	cin >> x.Giay;
}

void Xuat(THOIGIAN x)
{
	cout << "Gio: " << x.Gio << endl;
	cout << "Phut: " << x.Phut << endl;
	cout << "Giay: " << x.Giay << endl;
}