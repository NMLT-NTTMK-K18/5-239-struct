#include <iostream>
#include <iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
bool ktThuoc4(DIEM);

int main()
{
	DIEM P;
	Nhap(P);
	if (ktThuoc4(P) == 1)
		cout << "Thuoc";
	else
		cout << "Khong thuoc";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

bool ktThuoc4(DIEM P)
{
	if (P.x > 0 && P.y < 0)
		return 1;
	return 0;
}

