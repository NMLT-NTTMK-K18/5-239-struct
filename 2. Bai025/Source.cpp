#include <iostream>
#include <iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
DIEM DoiXungPhanGiac2(DIEM);

int main()
{
	DIEM P;
	Nhap(P);
	Xuat(DoiXungPhanGiac2(P));
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << setw(10);
	cout << setprecision(2);
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

DIEM DoiXungPhanGiac2(DIEM P)
{
	DIEM temp;
	temp.x = -P.y;
	temp.y = -P.x;
	return temp;
}