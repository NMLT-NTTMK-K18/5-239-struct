#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;	

void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCach(DIEM, DIEM);

int main()
{
	DIEM A, B;
	
	cout << "Nhap toa do A: ";
	Nhap(A);
	Xuat(A);
	cout << "\nNhap toa do B: ";
	Nhap(B);
	Xuat(B);

	cout << "\nKhoang cach giua 2 diem la: " << KhoangCach(A, B);

	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "(" << P.x << ", " << P.y << ")";
}

float KhoangCach(DIEM P, DIEM Q)
{
	return abs(P.x - Q.x);
}