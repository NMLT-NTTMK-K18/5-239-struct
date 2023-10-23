#include <iostream>
using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

struct HinhCau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct HinhCau HINHCAU;

void Nhap(DIEMKHONGGIAN&);
void Nhap(HINHCAU&);

float KhoancCach(DIEMKHONGGIAN, DIEMKHONGGIAN);
bool KtThuoc(HINHCAU, DIEMKHONGGIAN);

int main()
{
	HINHCAU c;
	cout << "Nhap hinh cau: \n";
	Nhap(c);

	DIEMKHONGGIAN P;
	cout << "Nhap diem P: ";
	Nhap(P);

	if (KtThuoc(c, P))
		cout << "Diem P thuoc hinh cau c";
	else
		cout << "Diem P khong thuoc hinh cau c";
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

void Nhap(HINHCAU& c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

float KhoangCach(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y) + (P.z - Q.z) * (P.z - Q.z));
}

bool KtThuoc(HINHCAU c, DIEMKHONGGIAN P)
{
	float kq = KhoangCach(c.I, P);
	if (kq <= c.R)
		return true;
	return false;
}