#include <iostream>
#include <iomanip>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY &);

int ktNhuan(NGAY);
int SoNgayToiDaTrongNam(NGAY);

int main()
{
	NGAY D;
	cout << "Nhap ngay D: " << endl;
	Nhap(D);

	cout << "So ngay toi da trong nam D " << D.Nam << " la: " << SoNgayToiDaTrongNam(D) << endl;

	return 0;
}

void Nhap(NGAY &x)
{
	cout << "Nhap ngay:";
	cin >> x.Ngay;
	cout << "Nhap thang:";
	cin >> x.Thang;
	cout << "Nhap nam:";
	cin >> x.Nam;
}

int ktNhuan(NGAY x)
{
	if (x.Nam % 4 == 0 && x.Nam % 100 != 0)
		return 1;
	if (x.Nam % 400 == 0)
		return 1;
	return 0;
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}