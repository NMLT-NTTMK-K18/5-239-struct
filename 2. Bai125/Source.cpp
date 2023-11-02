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
void Xuat(DIEM);
void Xuat(DUONGTRON);
float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DIEM);

int main()
{
	DUONGTRON c;
	Nhap(c);
	DIEM P;
	Nhap(P);
	cout << TuongDoi(c, P);
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
	cout << "Nhap tam: " << endl;
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Xuat(DIEM P)
{
	cout << "x: " << P.x << endl << "y: " << P.y;
}

void Xuat(DUONGTRON c)
{
	cout << "Tam: " << endl;
	Xuat(c.I);
	cout << endl << "Ban kinh: " << c.R;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
}

int TuongDoi(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I, P);
	if (kc > c.R)
		return 2;
	if (kc < c.R)
		return 0;
	return 1;
}