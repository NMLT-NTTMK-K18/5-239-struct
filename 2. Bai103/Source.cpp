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

void Xuat(NGAY);

int ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
NGAY TimNgay(int, int);

int main()
{
	int nam, stt;
	cout << "Nhap nam can tim ngay: ";
	cin >> nam;
	cout << "Nhap stt cua ngay can tim trong nam " << nam << " : ";
	cin >> stt;

	Xuat(TimNgay(nam, stt));
	return 0;
}

void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.Ngay;
	cout << "\nThang: " << x.Thang;
	cout << "\nNam: " << x.Nam;
}

bool KtNhuan(NGAY x)
{
	if (x.Nam % 4 == 0 && x.Nam % 4 != 0)
		return true;
	if (x.Nam % 400 == 0)
		return true;
	return false;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int NgayThang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (KtNhuan(x))
		NgayThang[1] = 29;
	return NgayThang[x.Thang - 1];
}

NGAY TimNgay(int nam, int stt)
{
	NGAY temp{ 1,1,nam };
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		stt = stt - SoNgayToiDaTrongThang(temp);
		temp.Thang++;
	}
	temp.Ngay = stt;
	return temp;
}

