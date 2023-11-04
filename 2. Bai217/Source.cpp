#include <iostream>
#include <iomanip>
#include <string>
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

void Nhap(NGAY[], int&);

int ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoThuTuTrongNam(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int SoThuTu(NGAY);
int KhoangCach(NGAY, NGAY);
void XaNhauNhat(NGAY[], int, NGAY&, NGAY&);

int main()
{
	NGAY a[100];
	int n;
	cout << "Nhap cac ngay: ";
	Nhap(a, n);

	NGAY x, y;
	XaNhauNhat(a, n, x, y);
	cout << "\nHai ngay Xa nhau nhat la: ";
	cout << "\nNgay thu nhat: ";
	Xuat(x);
	cout << "\nNgay thu hai: ";
	Xuat(y);

	return 0;
}

void Nhap(NGAY& x)
{
	cout << "\nNhap ngay:";
	cin >> x.Ngay;
	cout << "Nhap thang:";
	cin >> x.Thang;
	cout << "Nhap nam:";
	cin >> x.Nam;
}

void Nhap(NGAY a[], int& n)
{
	cout << "Nhap so luong ngay: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap ngay thu " << i + 1 << ": ";
		Nhap(a[i]);
	}
}

void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.Ngay << endl;
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

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Nam - 1; i++)
	{
		NGAY temp = { 1, 1, i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}

int KhoangCach(NGAY x, NGAY y)
{
	int a = SoThuTu(x);
	int b = SoThuTu(y);
	return abs(a - b);
}

void XaNhauNhat(NGAY a[], int n, NGAY& x, NGAY& y)
{
	x = a[0];
	y = a[1];
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (KhoangCach(a[i], a[j]) >
				KhoangCach(x, y))
			{
				x = a[i];
				y = a[j];
			}
}