#include <iostream>
#include <string>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian THOIGIAN;

struct ChuyenBay
{
	string MaSo;
	NGAY NgayBay;
	THOIGIAN GioBay;
	string NoiDi;
	string NoiDen;
};
typedef struct ChuyenBay CHUYENBAY;

void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);

void Nhap(NGAY&);
void Xuat(NGAY);

void Nhap(CHUYENBAY&);
void Xuat(CHUYENBAY);

void Nhap(CHUYENBAY[], int&);
void Xuat(CHUYENBAY[], int);

int SoSanh(NGAY, NGAY);
int TanSuat(CHUYENBAY[], int, NGAY);
NGAY TimNgay(CHUYENBAY[], int);
int TimChuyenBay(CHUYENBAY[], int, string);


int main()
{
	CHUYENBAY a[500];
	int n;

	Nhap(a, n);
	Xuat(a, n);
	NGAY Ng = TimNgay(a, n);
	cout << "\nNgay co nhieu chuyen bay nhat: ";
	Xuat(Ng);

	string MaChuyenBay;
	cout << "Nhap ma chuyen bay can tim: ";
	getline(cin, MaChuyenBay);

	int kq = TimChuyenBay(a, n, MaChuyenBay);
	if (kq == -1)
		cout << "\nKhong tim thay";
	else
	{
		cout << "\nChuyen bay can tim: ";
		Xuat(a[kq]);
	}

	return 0;
}

void Nhap(THOIGIAN& x)
{
	cout << "\nNhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}

void Xuat(THOIGIAN x)
{
	cout << x.Gio << ":" << x.Phut << ":" << x.Giay;
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

void Nhap(CHUYENBAY& x)
{
	cout << "Nhap ma chuyen bay: ";
	getline(cin, x.MaSo);
	cout << "Nhap ngay bay: ";
	Nhap(x.NgayBay);
	cout << "Nhap gio bay: ";
	Nhap(x.GioBay);
	cout << "Nhap noi di: ";
	getline(cin, x.NoiDi);
	cout << "Nhap noi den: ";
	getline(cin, x.NoiDen);
}

void Xuat(CHUYENBAY x)
{
	cout << "\nMa chuyen bay: " << x.MaSo;
	cout << "\nNgay bay: ";
	Nhap(x.NgayBay);
	cout << "\nGio bay: ";
	Nhap(x.GioBay);
	cout << "\Noi di: " << x.NoiDi;
	cout << "\nNoi den: " << x.NoiDen;
}

void Nhap(CHUYENBAY a[], int& n)
{
	cout << "Nhap so luong chuyen bay: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap chuyen bay thu " << i + 1 << " : ";
		Nhap(a[i]);
	}
}

void Xuat(CHUYENBAY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Chuyen bay thu " << i + 1 << " : ";
		Xuat(a[i]);
	}
}

int SoSanh(NGAY x, NGAY y)
{
	if (x.Nam > y.Nam)
		return 1;
	if (x.Nam < y.Nam)
		return -1;
	if (x.Thang > y.Thang)
		return 1;
	if (x.Thang < y.Thang)
		return -1;
	if (x.Ngay > y.Ngay)
		return 1;
	if (x.Ngay < y.Ngay)
		return -1;
	return 0;
}

int TanSuat(CHUYENBAY a[], int n, NGAY x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (SoSanh(a[i].NgayBay, x) == 0)
			dem++;
	return dem;
}

NGAY TimNgay(CHUYENBAY a[], int n)
{
	NGAY lc = a[0].NgayBay;
	for (int i = 0; i < n; i++)
	{
		int x = TanSuat(a, n, a[i].NgayBay);
		int y = TanSuat(a, n, lc);
		if (x > y)
			lc = a[i].NgayBay;
	}
	return lc;
}

int TimChuyenBay(CHUYENBAY a[], int n, string x)
{
	for (int i = 0; i < n; i++)
		if (a[i].MaSo == x)
			return 1;
	return -1;
}