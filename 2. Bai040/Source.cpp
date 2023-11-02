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
void Xuat(DIEMKHONGGIAN);
DIEMKHONGGIAN DoiXungOxy(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN A;
	Nhap(A);
	Xuat(DoiXungOxy(A));
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

DIEMKHONGGIAN DoiXungOxy(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = P.y;
	temp.z = -P.z;
	return temp;
}

void Xuat(DIEMKHONGGIAN A)
{
	cout << A.x;
	cout << endl;
	cout << A.y;
	cout << endl;
	cout << A.z;
}