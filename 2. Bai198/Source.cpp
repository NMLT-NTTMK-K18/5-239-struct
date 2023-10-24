#include <iostream>
#include <cmath>
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

void Nhap(DIEM&);
void Nhap(DUONGTRON&);
void Nhap(DUONGTRON[], int&);

void Xuat(DIEM);
void Xuat(DUONGTRON);

float KhoangCach(DIEM);
float KhoangCachGoc(DUONGTRON);
DUONGTRON GanGocNhat(DUONGTRON a[], int n);

int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a, n);

	cout << "\nDuong tron gan goc toa do nhat: \n";
	Xuat(GanGocNhat(a, n));
	return 0;
}

void Nhap(DIEM& I)
{
	cout << "\nNhap x: ";
	cin >> I.x;
	cout << "Nhap y: ";
	cin >> I.y;
}

void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam I: ";
	Nhap(c.I);
	cout << "\nNhap R: ";
	cin >> c.R;
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap so duong tron: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "] = ";
		Nhap(a[i]);
	}
}

void Xuat(DIEM I)
{
	cout << "(" << I.x << ", " << I.y << ")";
}

void Xuat(DUONGTRON c)
{
	cout << "\nI = ";
	Xuat(c.I);
	cout << "R = " << c.R;
}

float KhoangCach(DIEM I)
{
	return sqrt(I.x * I.x + I.y * I.y);
}

float KhoangCachGoc(DUONGTRON c)
{
	float kc = KhoangCach(c.I);
	return abs(kc - c.R);
}

DUONGTRON GanGocNhat(DUONGTRON a[], int n)
{
	DUONGTRON lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCachGoc(lc) > KhoangCachGoc(a[i]))
			lc = a[i];
	return lc;
}