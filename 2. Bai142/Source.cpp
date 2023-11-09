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
void Xuat(DIEM);
DIEM HoanhLonNhat(TAMGIAC t);

int main()
{
	TAMGIAC t;
	Nhap(t);

	cout << "\nDiem co Tung do lon nhat la:";
	Xuat(HoanhLonNhat(t));
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

void Xuat(DIEM I)
{
	cout << "(" << I.x << ", " << I.y << ")";
}

DIEM HoanhLonNhat(TAMGIAC t)
{
	DIEM lc = t.A;
	if (t.B.x > lc.x)
		lc = t.B;
	if (t.C.x>lc.x)
		lc = t.C;
	return lc;
}

