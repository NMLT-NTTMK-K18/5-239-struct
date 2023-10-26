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

void Nhap(NGAY&,int&);
void Xuat(NGAY);

int ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoThuTuTrongNam(NGAY);

int SoNgayToiDaTrongNam(NGAY);
NGAY TimNgay(int, int);
NGAY TimNgay(int);
int SoThuTu(NGAY);
NGAY KeTiep(NGAY, int);

int main()
{
	NGAY D;
	int k;
	cout << "Nhap ngay D: " << endl;
	Nhap(D,k);

	cout <<k<< "Ngay ke tiep la: \n" << endl;
	Xuat(KeTiep(D,k));

	return 0;
}

void Nhap(NGAY& x,int& k)
{
	cout << "Nhap ngay:";
	cin >> x.Ngay;
	cout << "Nhap thang:";
	cin >> x.Thang;
	cout << "Nhap nam:";
	cin >> x.Nam;
	cout << "Nhap k ngay ke tiep:";
	cin >> k;


}

void Xuat(NGAY x)
{
	cout << "Ngay: " << x.Ngay << endl;
	cout << "Thang: " << x.Thang << endl;
	cout << "Nam: " << x.Nam << endl;
}

int ktNhuan(NGAY x)
{
	if (x.Nam % 4 == 0 && x.Nam % 100 != 0)
		return 1;
	if (x.Nam % 400 == 0)
		return 1;
	return 0;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.Thang - 1];
}

int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Thang - 1; i++)
	{
		NGAY temp = { 1, i, x.Nam };
		stt += SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.Ngay);
}

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Nam - 1; i++)
	{
		NGAY temp = { 0, 13, i };
		stt += SoThuTuTrongNam(temp);
	}
	stt += SoThuTuTrongNam(x);
	return stt;
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}

NGAY TimNgay(int nam, int stt)
{
	NGAY temp = { 1, 1, nam };
	temp.Thang = 1;
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		stt = stt - SoNgayToiDaTrongThang(temp);
		temp.Thang++;
	}
	temp.Ngay = stt;
	return temp;
}

NGAY TimNgay(int stt)
{
	int nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt = stt - sn;
		nam++;
		NGAY temp = { 1, 1, nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(nam, stt);
}

NGAY KeTiep(NGAY x,int k)
{
	int stt = SoThuTu(x);
	stt += k;
	return TimNgay(stt);
}