#include <iostream>
using namespace std;

struct PhanSo
{
	int tu;
	int mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO &);
void Nhap(PHANSO[], int &);
int ktAm(int);
int ktAm(PHANSO);
int SoSanh(PHANSO, PHANSO);
int TimViTri(PHANSO[], int n);

int main()
{
	PHANSO a[100];
	int n;
	Nhap(a, n);
	cout << TimViTri(a, n);
	return 0;
}

void Nhap(PHANSO &x)
{
	cout << "\nNhap Tu:";
	cin >> x.tu;
	cout << "Nhap Mau:";
	cin >> x.mau;
}

void Nhap(PHANSO a[], int &n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:";
		Nhap(a[i]);
	}
}

int ktAm(int lc)
{
	if (lc < 0)
		return 1;
	return 0;
}

int ktAm(PHANSO P)
{
	if (P.mau * P.tu < 0)
		return 1;
	return 0;
}

int SoSanh(PHANSO a, PHANSO b)
{
	if (a.tu * b.mau > b.tu * a.mau)
		return 1;
	else if (a.tu * b.mau < b.tu * a.mau)
		return -1;
	else
		return 0;
}

int TimViTri(PHANSO a[], int n)
{
	if (n == 0)
		return -1;
	int lc = TimViTri(a, n - 1);
	if (ktAm(a[n - 1]) == 0)
		return lc;
	if (ktAm(lc) == 0)
		return n - 1;
	if (SoSanh(a[n - 1], a[lc]) == -1)
		lc = n - 1;
	return lc;
}