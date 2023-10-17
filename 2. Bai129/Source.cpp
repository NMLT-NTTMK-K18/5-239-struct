#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
	float z;
};
typedef struct Diem DIEM;

struct HinhCau
{
	DIEM I;
	float R;
};
typedef struct HinhCau HINHCAU;

void Nhap(DIEM &);
void Nhap(HINHCAU &x);

int main()
{

	return 0;
}

void Nhap(DIEM &x)
{
	cout << "\nNhap Hoanh Do:";
	cin >> x.x;
	cout << "Nhap Tung Do:";
	cin >> x.y;
	cout << "Nhap Cao Do:";
	cin >> x.z;
}

void Nhap(HINHCAU &x)
{
	cout << "Nhap Tam:\n";
	Nhap(x.I);
	cout << "Nhap Ban Kinh:";
	cin >> x.R;
}