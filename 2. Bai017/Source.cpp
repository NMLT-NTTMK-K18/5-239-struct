#include <iostream>
using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;
void Nhap(DIEM&);
float KhoangCach(DIEM, DIEM);
void Xuat(DIEM, DIEM);

int main()
{
	DIEM P, Q;
	cout << "Nhap toa do diem 1: ";
	Nhap(P);
	cout << "Nhap toa do diem 2: ";
	Nhap(Q);
	Xuat(P, Q);
	return 0;
}

void Nhap(Diem& P)
{
	cout << "\nNhap x: "; 
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) +
		(P.y - Q.y) * (P.y - Q.y));
}
void Xuat(DIEM P, DIEM Q)
{
	cout << "Khoang cach:" << KhoangCach(P, Q);
}