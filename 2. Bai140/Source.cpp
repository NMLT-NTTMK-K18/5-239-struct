#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct TamGiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct TamGiac TAMGIAC;

void Nhap(DIEM&);
void Nhap(TAMGIAC&);
float KhoangCach(DIEM, DIEM);
float DienTich(TAMGIAC);

int main()
{
	TAMGIAC t;
	Nhap(t);
	cout << DienTich(t);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(TAMGIAC& t)
{
	cout << "Nhap A: " << endl;
	Nhap(t.A);
	cout << "Nhap B: " << endl;
	Nhap(t.B);
	cout << "Nhap C: " << endl;
	Nhap(t.C);
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
}

float DienTich(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}