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
float TongKhoangCach(TAMGIAC, DIEM);

int main()
{
	TAMGIAC a;
	Nhap(a);
	DIEM b;
	Nhap(b);
	cout << TongKhoangCach(a, b);
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
float TongKhoangCach(TAMGIAC a, DIEM b)
{
	return KhoangCach(a.A, b) + KhoangCach(a.B, b) + KhoangCach(a.C, b);
}