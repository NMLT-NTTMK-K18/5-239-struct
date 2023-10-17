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

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DIEM &);
void Nhap(DUONGTHANG &);
void Nhap(DUONGTRON &);

float KhoangCach(DUONGTHANG, DIEM);
int TuongDoi(DUONGTRON, DUONGTHANG);

int main()
{
	DUONGTRON cc;
	cout << "Nhap duong tron: \n";
	Nhap(cc);

	DUONGTHANG dt;
	cout << "Nhap duong thang: \n";
	Nhap(dt);

	switch (TuongDoi(cc, dt))
	{
	case 0:
		cout << "Duong thang khong cat duong tron\n";
		break;
	case 1:
		cout << "Duong thang tiep xuc voi duong tron\n";
		break;
	case 2:
		cout << "Duong thang cat duong tron tai hai diem\n";
		break;
	}

	return 0;
}

void Nhap(DIEM &P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DUONGTRON &c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Nhap(DUONGTHANG &d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

float KhoangCach(DUONGTHANG d, DIEM x)
{
	float tu = abs(d.a * x.x + d.b * x.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}

int TuongDoi(DUONGTRON c, DUONGTHANG d)
{
	float kc = KhoangCach(d, c.I);
	if (kc > c.R)
		return 0;
	if (kc < c.R)
		return 2;
	return 1;
}