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
DIEM TungNhoNhat(TAMGIAC t);

int main()
{
	TAMGIAC t;
	Nhap(t);

	cout << "\nDiem co tung do nho nhat la: ";
	Xuat(TungNhoNhat(t));
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

DIEM TungNhoNhat(TAMGIAC t)
{
	DIEM lc = t.A;
	if (t.B.y < lc.y)
		lc = t.B;
	if (t.C.y < lc.y)
		lc = t.C;
	return lc;
}

