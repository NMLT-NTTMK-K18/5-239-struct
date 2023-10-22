#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
	float z;
};
typedef struct diem DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
float KhoangCachGoc(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN A;
	Nhap(A);
	Xuat(A);

	cout << "\nKhoang cach toi goc toa do = " << setprecision(3) << KhoangCachGoc(A);
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

void Xuat(DIEMKHONGGIAN P)
{
	cout << "(" << P.x << ", " << P.y << ", " << P.z << ")";
}

float KhoangCachGoc(DIEMKHONGGIAN P)
{
	return sqrt(P.x * P.x + P.y * P.y + P.z * P.z);
}