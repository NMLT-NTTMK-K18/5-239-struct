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
bool KiemTra(TAMGIAC);

int main()
{
	TAMGIAC t;
	Nhap(t);

	if (KiemTra(t))
		cout << "\nLa 1 tam giac";
	else
		cout << "\nKhong la 1 tam giac";
	return 0;
}

void Nhap(DIEM& I)
{
	cout << "\nNhap x: ";
	cin >> I.x;
	cout << "Nhap y: ";
	cin >> I.y;
}

void Nhap(TAMGIAC& t)
{
	cout << "\nNhap A: ";
	Nhap(t.A);
	cout << "\nNhap B: ";
	Nhap(t.B);
	cout << "\nNhap C: ";
	Nhap(t.C);
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

bool KiemTra(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);

	if (a + b > c && b + c > a && a + c > b)
		return true;
	return false;
}