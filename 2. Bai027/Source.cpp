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
int ktThuoc1(DIEM);

int main()
{
	DIEM P;
	cout << "Nhap toa do diem: " << endl;
	Nhap(P);
	Xuat(P);
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
	if (ktThuoc1(P))
		cout << "Thuoc phan tu thu 1";
	else
		cout << "Khong thuoc phan tu thu 1";
}

int ktThuoc1(DIEM P)
{
	if (P.x > 0 && P.y > 0)
		return 1;
	return 0;
}