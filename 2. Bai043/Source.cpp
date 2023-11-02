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
bool KtTrung(DIEMKHONGGIAN, DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN A, B;
	cout << "Nhap A: ";
	Nhap(A);
	Xuat(A);

	cout << "\nNhap B: ";
	Nhap(B);
	Xuat(B);

	if (KtTrung(A, B))
		cout << "\n2 diem trung nhau";
	else
		cout << "\n2 diem khong trung nhau";
	return 0;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nNhap x: ";
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

bool KtTrung(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	if (P.x == Q.x && P.y == Q.y && P.z == Q.z)
		return true;
	return false;
}