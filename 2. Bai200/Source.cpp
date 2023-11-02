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

void Nhap(DIEM&);
void Nhap(DUONGTRON&);
void Nhap(DUONGTRON[], int&);
void Xuat(DIEM);
void Xuat(DUONGTRON);
int KhoangCachOx(DUONGTRON);
DUONGTRON GanOxNhat(DUONGTRON[], int);

int main()
{
	int n;
	DUONGTRON a[100];
	Nhap(a, n);
	Xuat(GanOxNhat(a, n));
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam:" << endl;
	Nhap(c.I);
	cout << "Nhap Ban Kinh: ";
	cin >> c.R;
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:" << endl;
		Nhap(a[i]);
	}
}

void Xuat(DIEM P)
{
	cout << "x: " << P.x << endl << "y: " << P.y << endl;
}

void Xuat(DUONGTRON c)
{
	cout << "Tam: " << endl;
	Xuat(c.I);
	cout << "Ban kinh: " << c.R;
}

int KhoangCachOx(DUONGTRON c)
{
	if (abs(c.I.y) < c.R)
		return 0;
	return abs(abs(c.I.y) - c.R);
}

DUONGTRON GanOxNhat(DUONGTRON a[], int n)
{
	DUONGTRON lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCachOx(a[i]) < KhoangCachOx(lc))
			lc = a[i];
	return lc;
}