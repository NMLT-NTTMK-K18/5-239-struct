#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Nhap(PHANSO[][100], int&, int&);

void Xuat(PHANSO);
void Xuat(PHANSO[][100], int, int);

int main()
{
	PHANSO a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap Tu:";
	cin >> x.Tu;
	cout << "Nhap Mau:";
	cin >> x.Mau;
}

void Nhap(PHANSO a[][100], int& m, int& n)
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


void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau << endl;
}

void Xuat(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
			cout << endl;
		}
}