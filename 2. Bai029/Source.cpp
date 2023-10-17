#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM &);
void Xuat(DIEM);
int ktThuoc3(DIEM);

int main()
{
	DIEM P;
	Nhap(P);
	cout << ktThuoc3(P);
	return 0;
}

void Nhap(DIEM &P)
{
	cout << "\nNhap Hoanh Do:";
	cin >> P.x;
	cout << "Nhap Tung Do:";
	cin >> P.y;
}

int ktThuoc3(DIEM P)
{
	if (P.x < 0 && P.y < 0)
		return 1;
	return 0;
}

void Xuat(DIEM A)
{
	cout << "\nHoanh Do La:";
	cout << A.x;
	cout << "\nTung Do La:";
	cout << A.y;
}