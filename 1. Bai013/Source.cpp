#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct MatHang
{
	string TenHang;
	int DonGia;
	int LuongTon;
};

typedef struct MatHang MATHANG;

void Nhap(MATHANG &);
void Xuat(MATHANG);

void Nhap(MATHANG[], int &);
void Xuat(MATHANG[], int);

int LonNhat(MATHANG[], int);
int SoSanh(MATHANG, MATHANG);
int DemHangTon(MATHANG[], int);

int main()
{
	MATHANG a[100];
	int n;
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	LonNhat(a, n);
	if (LonNhat(a, n) == -1)
		cout << "Ko Tim Thay\n";
	else
	{
		cout << "Mat Hang co Lon Nhat: ";
		Xuat(a[LonNhat(a, n)]);
	}
	cout << DemHangTon(a, n);
	return 0;
}

void Nhap(MATHANG &x)
{
	cout << "Nhap ten mat hang: ";
	cin.ignore();
	getline(cin, x.TenHang);
	cout << "Nhap don gia: ";
	cin >> x.DonGia;
	cout << "Nhap so luong ton: ";
	cin >> x.LuongTon;
}

void Xuat(MATHANG x)
{
	cout << "\nTen mat hang: " << x.TenHang;
	cout << "\nDon gia: " << x.DonGia;
	cout << "\nSo luong ton: " << x.LuongTon;
}

void Nhap(MATHANG a[], int &n)
{
	cout << "\nNhap so luong mat hang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nMat hang thu " << i + 1 << ":\n";
		Nhap(a[i]);
	}
}

void Xuat(MATHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nMat hang thu " << i + 1 << ":";
		Xuat(a[i]);
	}
}

int SoSanh(MATHANG x, MATHANG y)
{
	int Tongx = x.DonGia * x.LuongTon;
	int Tongy = y.DonGia * y.LuongTon;
	if (Tongx > Tongy)
		return 1;
	return 0;
}

int LonNhat(MATHANG a[], int n)
{
	if (n == 0)
		return -1;
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (SoSanh(a[i], a[lc]) == 1)
			lc = i;
	return lc;
}

int DemHangTon(MATHANG a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i].LuongTon > 1000)
			dem++;
	return dem;
}
