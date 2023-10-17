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

void Nhap(DUONGTHANG &);
void Nhap(Diem &);
int ktThuoc(DUONGTHANG, DIEM);

int main()
{
	DIEM M;
	Nhap(M);
	DUONGTHANG x;
	Nhap(x);
	if (ktThuoc(x, M))
		return 0;
}

void Nhap(DUONGTHANG &x)
{
	cout << "\nNhap a:";
	cin >> x.a;
	cout << "Nhap b:";
	cin >> x.b;
	cout << "Nhap c:";
	cin >> x.c;
}

void Nhap(Diem &a)
{
	cout << "Nhap Hoanh Do:";
	cin >> a.x;
	cout << "Nhap Tung Do:";
	cin >> a.y;
}

int ktThuoc(DUONGTHANG x, DIEM M)
{
	if (x.a * M.x + x.b * M.y + x.c == 0)
		return 1;
	return 0;
}