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

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DUONGTRON);

int main()
{
	DUONGTRON c;
	cout << "Nhap duong tron C:";
	Nhap(c);
	DUONGTRON P;
	cout << "\nNhap duong tron P:";

	Nhap(P);
	if (TuongDoi(c, P) == 0)
		cout << "Hai duong tron trung nhau";
	if (TuongDoi(c, P) == 1)
		cout << "Hai duong tron roi nhau";
	if (TuongDoi(c, P) == 2)
		cout << "Hai duong tron tiep xuc ngoai";
	if (TuongDoi(c, P) == 3)
		cout << "Hai duong tron cat nhau";
	if (TuongDoi(c, P) == 4)
		cout << "Hai duong tron tiep xuc trong";
	if (TuongDoi(c, P) == 5)
		cout << "Hai duong tron chua trong nhau";
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

int TuongDoi(DUONGTRON c1, DUONGTRON c2)
{
	float kc = KhoangCach(c1.I, c2.I);
	if (kc == 0 && c1.R == c2.R)
		return 0;
	if (kc > (c1.R + c2.R))
		return 1;
	if (kc == (c1.R + c2.R))
		return 2;
	if (kc < (c1.R + c2.R) && kc > abs(c1.R -
		c2.R))
		return 3;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}