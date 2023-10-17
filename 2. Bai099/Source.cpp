#include <iostream>
using namespace std;

struct Ngay
{
	int ngay;
	int thang;
	int nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY &);
int ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoThuTuTrongNam(NGAY);

int main()
{
	NGAY x;
	Nhap(x);
	cout << SoThuTuTrongNam(x);
	return 0;
}

void Nhap(NGAY &x)
{
	cout << "\nNhap Ngay:";
	cin >> x.ngay;
	cout << "Nhap Thang:";
	cin >> x.thang;
	cout << "Nhap Nam:";
	cin >> x.nam;
}

int ktNhuan(NGAY x)
{
	if (x.nam % 4 == 0 && x.nam % 100 != 0 || x.nam % 400 == 0)
		return 1;
	return 0;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.thang - 1];
}

int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i < x.thang; i++)
	{
		NGAY temp = {1, i, x.nam};
		stt += SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.ngay);
}
