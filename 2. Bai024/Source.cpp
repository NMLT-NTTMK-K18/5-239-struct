#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM &);
void Xuat(DIEM);
DIEM DoiXungPhanGiac1(DIEM);

int main()
{
	DIEM P;
	Nhap(P);
	Xuat(DoiXungPhanGiac1(P));
	return 0;
}

void Nhap(DIEM &P)
{
	cout << "\nNhap Hoanh Do:";
	cin >> P.x;
	cout << "Nhap Tung Do:";
	cin >> P.y;
}

DIEM DoiXungPhanGiac1(DIEM P)
{
	DIEM temp;
	temp.x = P.y;
	temp.y = P.x;
	return temp;
}

void Xuat(DIEM A)
{
	cout << "\nHoanh Do La:";
	cout << A.x;
	cout << "\nTung Do La:";
	cout << A.y;
}