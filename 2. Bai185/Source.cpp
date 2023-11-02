#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Nhap(PHANSO[], int&);
void Xuat(PHANSO);
void Xuat(PHANSO[], int);
int SoSanh(PHANSO, PHANSO);
PHANSO LonNhat(PHANSO[], int);

int main()
{
	PHANSO a[100];
	int n;
	Nhap(a, n);
	Xuat(LonNhat(a, n));
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:" << endl;
		Nhap(a[i]);
	}
}

void Xuat(PHANSO x)
{
	cout << x.Tu << " / " << x.Mau;
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
		cout << endl;
	}
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

PHANSO LonNhat(PHANSO a[], int n)
{
	PHANSO lc = a[0];
	for (int i = 0; i < n; i++)
		if (SoSanh(a[i], lc) == 1)
			lc = a[i];
	return lc;
}