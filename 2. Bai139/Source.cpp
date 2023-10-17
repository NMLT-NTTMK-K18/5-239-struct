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

void Nhap(DIEM &);
void Nhap(TAMGIAC &);
float KhoangCach(DIEM, DIEM);
float ChuVi(TAMGIAC);

int main()
{
	TAMGIAC a;
	Nhap(a);
	cout << ChuVi(a);
	return 0;
}

void Nhap(DIEM &a)
{
	cout << "\nNhap Hoanh Do:";
	cin >> a.x;
	cout << "Nhap Tung Do:";
	cin >> a.y;
}

void Nhap(TAMGIAC &a)
{
	cout << "Nhap Tam A:";
	Nhap(a.A);
	cout << "Nhap Tam B:";
	Nhap(a.B);
	cout << "Nhap Tam C:";
	Nhap(a.C);
}

float KhoangCach(DIEM a, DIEM b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
float ChuVi(TAMGIAC a)
{
	return KhoangCach(a.A, a.B) + KhoangCach(a.B, a.C) + KhoangCach(a.C, a.A);
}