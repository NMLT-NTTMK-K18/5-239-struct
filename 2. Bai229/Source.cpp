#include <iostream>
using namespace std;

struct PhanSo
{
	int tu;
	int mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO &);
void Nhap(PHANSO[][100], int &, int &);
int SoSanh(PHANSO, PHANSO);
PHANSO LONNHAT(PHANSO[][100], int, int);
void Xuat(PHANSO);
void Xuat(PHANSO[][100], int, int);

int main()
{
	PHANSO a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(LonNhat(a, m, n));
	return 0;
}

void Nhap(PHANSO &x)
{
	cout << "\nNhap Tu:";
	cin >> x.tu;
	cout << "Nhap Mau:";
	cin >> x.mau;
}

void Nhap(PHANSO a[][100], int &m, int &n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]:\n";
			Nhap(a[i][j]);
		}
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.tu / x.mau;
	float b = (float)y.tu / y.mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}

PHANSO LonNhat(PHANSO a[][100], int m, int n)
{
	PHANSO lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanh(a[i][j], lc) == 1)
				lc = a[i][j];
	return lc;
}

void Xuat(PHANSO x)
{
	cout << x.tu << "/" << x.mau << endl;
}

void Xuat(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "A[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
			cout << endl;
		}
}