#include <iostream>
using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
float KhoangCachX(DIEMKHONGGIAN, DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P, Q;
	Nhap(P);
	Nhap(Q);
	cout << KhoangCachX(P, Q);
	return 0;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

float KhoangCachX(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.x - P.x);
}