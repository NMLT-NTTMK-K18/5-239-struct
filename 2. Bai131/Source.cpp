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

void Nhap(DIEMKHONGGIAN &);
void Nhap(HINHCAU &);

float DienTich(HINHCAU);

int main()
{
	HINHCAU s;
	cout << "Nhap hinh cau: \n";
	Nhap(s);

	cout << "Dien tich hinh cau vua nhap: " << DienTich(s);

	return 0;
}

void Nhap(DIEMKHONGGIAN &P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Nhap(HINHCAU &c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

float DienTich(HINHCAU c)
{
	return float(4 * 3.14 * c.R * c.R);
}