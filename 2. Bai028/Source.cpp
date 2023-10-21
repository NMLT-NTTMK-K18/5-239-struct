#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
bool KtThuoc2(DIEM);

int main()
{
	DIEM A;
	Nhap(A);
	Xuat(A);

	if (KtThuoc2(A))
		cout << "\nDiem thuoc phan tu thu 2";
	else
		cout << "\nDiem khong thuoc phan tu thu 2";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "(" << P.x << ", " << P.y << ")";
}

bool KtThuoc2(DIEM P)
{
	if (P.x < 0 && P.y>0)
		return true;
	return false;
}