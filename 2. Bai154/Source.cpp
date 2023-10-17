#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;
struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DIEM &);
void Nhap(DUONGTHANG &);
DIEM GiaoDiem(DUONGTHANG, DUONGTHANG);
void Xuat(DIEM);

int main()
{
	DIEM a;
	Nhap(a);
	DUONGTHANG x, y;
	Nhap(x);
	Nhap(y);
	DIEM M = GiaoDiem(x, y);
	Xuat(M);
	return 0;
}

void Nhap(DIEM &a)
{
	cout << "\nNhap Hoanh Do:";
	cin >> a.x;
	cout << "Nhap Tung Do:";
	cin >> a.y;
}

void Nhap(DUONGTHANG &a)
{
	cout << "\nNhap a:";
	cin >> a.a;
	cout << "Nhap b:";
	cin >> a.b;
	cout << "Nhap c:";
	cin >> a.c;
}

DIEM GiaoDiem(DUONGTHANG x, DUONGTHANG y)
{
	float D = x.a * y.b - x.b * y.a;
	float Dx = x.b * y.c - x.c * y.b;
	float Dy = x.c * y.a - x.a * y.c;
	DIEM M;
	M.x = Dx / D;
	M.y = Dy / D;
	return M;
}

void Xuat(DIEM a)
{
	cout << a.x << " " << a.y;
}