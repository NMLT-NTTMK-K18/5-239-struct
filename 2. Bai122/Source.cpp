#define _USE_MATH_DEFINES
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
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

float ChuVi(DUONGTRON);

int main()
{
	DUONGTRON c;
	Nhap(c);
	Xuat(c);
	cout << endl;
	cout << "\Chu Vi cua duong tron la: " << ChuVi(c);
	return 0;
}

void Nhap(DIEM& I)
{
	cout << "\nNhap x: ";
	cin >> I.x;
	cout << "Nhap y: ";
	cin >> I.y;
}

void Xuat(DIEM I)
{
	cout << "(" << I.x << ", " << I.y << ")";
}

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam cua duong tron: ";
	Nhap(c.I);
	cout << "\nNhap ban kinh: ";
	cin >> c.R;
}

void Xuat(DUONGTRON c)
{
	cout << "\nTam I = ";
	Xuat(c.I);
	cout << "\nR = " << c.R;
}

float ChuVi(DUONGTRON c)
{
	return float(M_PI * 2* c.R);
}