#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

struct DaiLy
{
	string MaSo;
	string TenDaiLy;
	int DienThoai;
	NGAY NgayNhan;
	string DiaChi;
	string Email;
};
typedef struct DaiLy DAILY;

void Nhap(NGAY&);
void Xuat(NGAY);
void Nhap(DAILY&);
void Xuat(DAILY);
void Nhap(DAILY[], int&);
void Xuat(DAILY[], int);
int TimDaiLy(DAILY[], int, string);

int main()
{
	DAILY dl[500];
	int n;

	Nhap(dl, n);
	Xuat(dl, n);

	string dlCanTim;
	cout << "Nhap ma chuyen bay can tim: ";
	getline(cin, dlCanTim);

	int kq = TimDaiLy(dl, n, dlCanTim);
	if (kq == 0)
		cout << "Khong ton tai";
	else
	{
		cout << "\n Dai ly can tim: ";
		Xuat(dl[kq]);
	}
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "\nNhap ngay: ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
}

void Xuat(NGAY x)
{
	cout << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}

void Nhap(DAILY& x)
{
	cout << "Nhap ma dai ly: ";
	getline(cin, x.MaSo);
	cout << "Nhap ten dai ly: ";
	getline(cin, x.TenDaiLy);
	cout << "Nhap so dien thoai: ";
	cin >> x.DienThoai;
	cout << "Nhap ngay tiep nhan: ";
	Nhap(x.NgayNhan);
	cout << "Nhap dia chi: ";
	cin.ignore();
	getline(cin, x.DiaChi);
	cout << "Nhap Email: ";
	getline(cin, x.Email);
}

void Xuat(DAILY x)
{
	cout << "\nMa so dai ly: " << x.MaSo;
	cout << "\nTen dai ly: " << x.TenDaiLy;
	cout << "\nDien thoai: " << x.DienThoai;
	cout << "\nNgay tiep nhan: ";
	Xuat(x.NgayNhan);
	cout << "Dia Chi : " << x.DiaChi;
	cout << "\nE-mail: " << x.Email;
}

void Nhap(DAILY a[], int& n)
{
	cout << "Nhap so luong dai ly : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Dai ly " << i + 1 << " : ";
		Nhap(a[i]);
	}
}

void Xuat(DAILY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Dai ly " << i + 1 << " : ";
		Xuat(a[i]);
	}
}

int TimDaiLy(DAILY a[], int n, string dl)
{
	for (int i = 0; i < n; i++)
		if (a[i].TenDaiLy == dl)
			return i;
	return 0;
}