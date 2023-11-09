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

float TheTich(HINHCAU);

int main()
{
	HINHCAU s;
	cout << "Nhap hinh cau: \n";
	Nhap(s);

	cout << "The Tich hinh cau vua nhap: " << TheTich(s);

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

void Nhap(HINHCAU& c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

float TheTich(HINHCAU c)
{
	return float((float)4 / 3 * 3.14 * c.R * c.R * c.R);
}