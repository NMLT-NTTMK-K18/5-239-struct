#include <iostream>
#include <iomanip>
using namespace std;
struct Diem
{
	float x;
	float y;
	float z;
};
typedef struct Diem DIEM;
void Nhap(DIEM&);
void Xuat(DIEM,DIEM);
float KhoangCachZ(DIEM, DIEM);

int main()
{
	DIEM P,Q;
	cout << "Nhap toa do diem: P,Q " << endl;
	Nhap(P);
	Nhap(Q);
	Xuat(P,Q);
	return 0;
}

void Nhap(Diem& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Xuat(DIEM P,DIEM Q)
{
	cout << "Khoang cach theo phuong z la: " << KhoangCachZ(P, Q);
}

float KhoangCachZ(DIEM P,
	DIEM Q)
{
	return abs(Q.z-P.z);
}