#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

void Nhap(PHANSO[], int&);

PHANSO DuongDau(PHANSO[], int);

int main()
{
	PHANSO P[100];
	int n;
	Nhap(P, n);
	cout << "Duong dau tien trong mang la: ";
	Xuat(DuongDau(P,n));
	return 0;
}

void Nhap(PHANSO& P)
{
	cout << "\nNhap Tu: ";
	cin >> P.Tu;
	cout << "Nhap Mau: ";
	cin >> P.Mau;
}

void Xuat(PHANSO P)
{
	cout << "\nTu: " << P.Tu;
	cout << "\nMau: " << P.Mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap so luong phan so: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "] = ";
		Nhap(a[i]);
	}
}

PHANSO DuongDau(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i].Tu * a[i].Mau > 0)
			return a[i];
	}
	PHANSO temp{ 0,1 };
	return temp;
}

