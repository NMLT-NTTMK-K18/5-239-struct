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
int SoNgayToiDaTrongNam(NGAY);
NGAY TimNgay(int, int);
NGAY TimNgay(int);
void Xuat(NGAY);

int main()
{
	int stt;
	cin >> stt;
	Xuat(TimNgay(stt));
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

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}

NGAY TimNgay(int nam, int stt)
{
	NGAY temp = {1, 1, nam};
	temp.thang = 1;
	while (stt > SoNgayToiDaTrongNam(temp))
	{
		stt -= SoNgayToiDaTrongNam(temp);
		temp.thang++;
	}
	temp.ngay = stt;
	return temp;
}

NGAY TimNgay(int stt)
{
	int nam = 1;
	int sn = 365;
	while (stt > sn)
	{
		stt -= sn;
		nam++;
		NGAY temp = {1, 1, nam};
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(nam, stt);
}

void Xuat(NGAY x)
{
	cout << "\nNgay:" << x.ngay;
	cout << "\nThang:" << x.thang;
	cout << "\nNam:" << x.nam;
}