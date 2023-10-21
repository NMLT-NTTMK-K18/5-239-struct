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

int main()
{
	DAILY dl;
	Nhap(dl);
	Xuat(dl);
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