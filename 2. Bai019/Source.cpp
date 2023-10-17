#include <iostream>
#include <cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM &);
float KhoangCach(DIEM);

int main()
{
	DIEM a;
	Nhap(a);
	cout << KhoangCach(a);
	return 0;
}

void Nhap(DIEM &a)
{
	cout << "\nNhap Hoanh Do:";
	cin >> a.x;
	cout << "Nhap Tung Do:";
	cin >> a.y;
}

float KhoangCach(DIEM a)
{
	return sqrt(a.y * a.y + a.x * a.x);
}