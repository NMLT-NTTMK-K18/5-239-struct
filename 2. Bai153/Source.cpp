#include <iostream>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

bool KtCat(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG d1;
	cout << "Nhap d1: ";
	Nhap(d1);

	DUONGTHANG d2;
	cout << "\nNhap d2: ";
	Nhap(d2);

	if (KtCat(d1, d2))
		cout << "2 duong thang cat nhau";
	else
		cout << "2 duong thang khong cat nhau";
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}

bool KtCat(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return true;
	return false;
}