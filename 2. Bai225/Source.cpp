#include <iostream>
#include <cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DIEM&);
void Nhap(DIEM[], int&);
void Nhap(DUONGTHANG&);
void Xuat(DIEM);
float KhoangCach(DUONGTHANG, DIEM);
DIEM GanVaKhongThuoc(DUONGTHANG, DIEM[], int);

int main()
{
	int n;
	DIEM a[100];
	DUONGTHANG d;
	Nhap(a, n);
	Nhap(d);
	Xuat(GanVaKhongThuoc(d, a, n));
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap so luong diem: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap diem " << i + 1 << ": " << endl;
		Nhap(a[i]);
	}
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DIEM P)
{
	cout << "x: " << P.x << endl << "y: " << P.y;
}

float KhoangCach(DUONGTHANG d, DIEM P)
{
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}

DIEM GanVaKhongThuoc(DUONGTHANG d, DIEM a[], int n)
{
	float Min = KhoangCach(d, a[0]);
	for (int i = 1; i < n; i++)
		if (KhoangCach(d, a[i]) < Min && KhoangCach(d, a[i]) != 0)
			Min = KhoangCach(d, a[i]);
	for (int i = 0; i < n; i++)
		if (KhoangCach(d, a[i]) == Min)
			return a[i];
}