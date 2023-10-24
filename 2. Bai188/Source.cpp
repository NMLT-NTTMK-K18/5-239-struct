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
void Xuat(PHANSO[], int);

PHANSO DuongDau(PHANSO[], int);
int SoSanh(PHANSO, PHANSO);
PHANSO DuongNhoNhat(PHANSO[], int);

int main()
{
	PHANSO P[100];
	int n;
	Nhap(P, n);
	cout << "Duong nho nhat: ";
	PHANSO temp = DuongNhoNhat(P, n);
	Xuat(temp);
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

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "] = ";
		Xuat(a[i]);
	}
}

PHANSO DuongDau(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i].Tu * a[i].Mau > 0)
			return a[i];
	}
	PHANSO temp{ -1,1 };
	return temp;
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}

PHANSO DuongNhoNhat(PHANSO a[], int n)
{
	if (n == 0)
	{
		PHANSO lc = { -1, 1 };
		return lc;
	}
	PHANSO lc = DuongDau(a, n);
	for (int i = 0; i < n - 1; i++)
	{
		if (SoSanh(a[i], lc) == -1 && a[i].Tu * a[i].Mau > 0)
			lc = a[i];
	}
	return lc;
}