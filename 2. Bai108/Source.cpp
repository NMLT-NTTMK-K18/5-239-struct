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

void Nhap(NGAY&);
void Xuat(NGAY);

int ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoNgayToiDaTrongNam(NGAY);

int SoThuTuTrongNam(NGAY);
int SoThuTu(NGAY);


NGAY TimNgay(int, int);
NGAY TimNgay(int);

NGAY TruocDo(NGAY);
NGAY TruocDo(NGAY, int);

int main()
{
	NGAY x;
	Nhap(x);
	Xuat(x);

	int k;
	cout << "\nNhap so ngay muon tim truoc ngay hien tai : ";
	cin >> k;

	Xuat(TruocDo(x, k));
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
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

int SoNgayToiDaTrongNam(NGAY x)
{
	if (KtNhuan(x))
		return 366;
	return 365;
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
		NGAY temp = { 1, 1, i };
		stt += SoThuTuTrongNam(temp);
	}
	stt += SoThuTuTrongNam(x);
	return stt;
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

NGAY TimNgay(int stt)
{
	int nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt = stt - sn;
		nam++;
		NGAY temp = { 1,1,nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(nam, stt);
}

NGAY TruocDo(NGAY x)
{
	if (x.Ngay == 1 && x.Thang == 1 && x.Nam == 1)
		return x;
	int stt = SoThuTu(x);
	stt = stt - 1;
	return TimNgay(stt);
}

NGAY TruocDo(NGAY x, int k)
{
	NGAY temp = x;
	for (int i = 1; i <= k; i++)
		temp = TruocDo(temp);
	return temp;
}