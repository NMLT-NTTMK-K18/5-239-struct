#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
	float z;
};
typedef struct Diem DIEM;

struct HinhCau
{
	DIEM I;
	float R;
};
typedef struct HinhCau HINHCAU;

void Nhap(DIEM&);
void Nhap(HINHCAU&);
void Xuat(DIEM);
void Xuat(HINHCAU);

int main()
{
	HINHCAU s;
	Nhap(s);
	Xuat(s);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Nhap(HINHCAU& s)
{
	cout << "Nhap tam: " << endl;
	Nhap(s.I);
	cout << "Nhap ban kinh: ";
	cin >> s.R;
}

void Xuat(DIEM P)
{
	cout << "x: " << P.x << endl << "y: " << P.y << endl << "z: " << P.z;
}

void Xuat(HINHCAU s)
{
	cout << "Tam: " << endl;
	Xuat(s.I);
	cout << endl << "Ban kinh: " << s.R;
}