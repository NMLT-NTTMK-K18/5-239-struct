#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO &);
void Xuat(PHANSO);

void Nhap(PHANSO[], int &);
void Xuat(PHANSO[], int);

int main()
{
	PHANSO P[100];
	int n;
	Nhap(P, n);
	Xuat(P, n);
	return 0;
}

void Nhap(PHANSO &P)
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

void Nhap(PHANSO a[], int &n)
{
	cout << "Nhap so luong phan so: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "] = ";
		Nhap(a[i]);
	}
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "] = ";
		Xuat(a[i]);
	}
}