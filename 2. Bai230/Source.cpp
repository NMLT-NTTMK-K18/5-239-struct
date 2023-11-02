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
int SoSanh(PHANSO, PHANSO);
PHANSO NhoNhat(PHANSO[][100], int, int);
int DemNhoNhat(PHANSO[][100], int, int);

int main()
{
	int m, n;
	PHANSO a[100][100];
	Nhap(a, m, n);
	cout << DemNhoNhat(a, m, n);
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
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
			cout << "Nhap a[" << i << "][" << j << "]:" << endl;
			Nhap(a[i][j]);
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

PHANSO NhoNhat(PHANSO a[][100], int m, int n)
{
	PHANSO lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanh(a[i][j], lc) == -1)
				lc = a[i][j];
	return lc;
}

int DemNhoNhat(PHANSO a[][100], int m, int n)
{
	PHANSO lc = NhoNhat(a, m, n);
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanh(a[i][j], lc) == 0)
				dem++;
	return dem;
}