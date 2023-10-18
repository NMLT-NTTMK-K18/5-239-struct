#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO &);
void Nhap(PHANSO[][100], int &, int &);
void Xuat(PHANSO);

int ktAm(PHANSO);
int SoSanh(PHANSO, PHANSO);
PHANSO AmLonNhat(PHANSO[][100], int, int);

int main()
{
	PHANSO a[100][100];
	int m, n;
	cout << "Nhap ma tran cac phan so:" << endl;
	Nhap(a, m, n);

	PHANSO am = AmLonNhat(a, m, n);
	cout << "\nPhan so am lon nhat: ";
	Xuat(am);

	return 0;
}

void Nhap(PHANSO &x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
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
			cout << "\nNhap phan so thu a[" << i << "][" << j << "]: ";
			Nhap(a[i][j]);
		}
}

void Xuat(PHANSO x)
{
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}

int ktAm(PHANSO x)
{
	if (x.Tu * x.Mau < 0)
		return 1;
	return 0;
}

int SoSanh(PHANSO x, PHANSO y)
{
	if (x.Tu * y.Mau > y.Tu * x.Mau)
		return 1;
	if (x.Tu * y.Mau < y.Tu * x.Mau)
		return -1;
	return 0;
}

PHANSO AmLonNhat(PHANSO a[][100], int m, int n)
{
	PHANSO temp = {0, 1};
	PHANSO lc = temp;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktAm(a[i][j]))
				if (SoSanh(lc, temp) == 0 || (SoSanh(a[i][j], lc) == 1))
					lc = a[i][j];
	return lc;
}