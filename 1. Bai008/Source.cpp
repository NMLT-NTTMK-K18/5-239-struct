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

struct SoTietKiem
{
	string MaSo;
	string Loai;
	string HoTen;
	NGAY NgayMo;
	float TienGoi;
};
typedef struct SoTietKiem SOTIETKIEM;

void Nhap(NGAY &);
void Xuat(NGAY);
void Nhap(SOTIETKIEM &);
void Xuat(SOTIETKIEM);

int main()
{
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

void Nhap(SOTIETKIEM &x)
{
	cout << "Nhap ma so: ";
	getline(cin, x.MaSo);
	cout << "Nhap loai: ";
	getline(cin, x.Loai);
	cout << "Nhap ho ten: ";
	getline(cin, x.HoTen);
	cout << "Nhap ngay mo: ";
	Nhap(x.NgayMo);
	cout << "Nhap tien goi: ";
	cin >> x.TienGoi;
}

void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.Ngay << endl;
	cout << "Thang: " << x.Thang << endl;
	cout << "Nam: " << x.Nam << endl;
}

void Xuat(SOTIETKIEM x)
{
	cout << "\nMa so: " << x.MaSo << endl;
	cout << "Loai: " << x.Loai << endl;
	cout << "Ho ten: " << x.HoTen << endl;
	cout << "Ngay mo: " << x.NgayMo.Ngay << "/" << x.NgayMo.Thang << "/" << x.NgayMo.Nam << endl;
	cout << "Tien goi: " << x.TienGoi << endl;
}