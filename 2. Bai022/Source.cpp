#include <iostream>
using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;
void Nhap(DIEM&);
void Xuat(DIEM);
DIEM DoiXungHoanh(DIEM);

int main()
{
	DIEM P;
	cout << "Nhap toa do diem: " << endl;
	Nhap(P);

	DIEM Q = DoiXungHoanh(P);

	cout << "\nDiem doi xung cua diem vua nhap:";
	Xuat(Q);
	return 0;
}

void Nhap(Diem& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "Toa do diem doi xung qua truc hoanh la: ";
	cout << endl;
	cout << P.x;
	cout << endl;
	cout << P.y;
}

DIEM DoiXungHoanh(DIEM P)
{
	DIEM temp;
	temp.x = P.x;
	temp.y = -P.y;
	return temp;
}