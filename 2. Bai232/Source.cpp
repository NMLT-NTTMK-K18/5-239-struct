#include <iostream>
#include <iomanip>

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
void Xuat(PHANSO[], int);
void Xuat(PHANSO[][100], int, int);

void HoanVi(PHANSO&, PHANSO&);
void SapTang(PHANSO[][100], int, int);


int main()
{
	PHANSO a[100][100];
	int m, n;
	Nhap(a, m, n);
	SapTang(a, m, n);
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
	cout<< setw(5);
	cout << x.Tu << "/" << x.Mau ;
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "] = ";
		Xuat(a[i]);
	}
}

void Xuat(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			Xuat(a[i][j]);

		}
	}
}


void HoanVi(PHANSO& a, PHANSO& b)
{
	PHANSO temp{};
	temp = a;
	a = b;
	b = temp;
}

int SoSanh(PHANSO a, PHANSO b)
{
	float m = (float)a.Tu / a.Mau;
	float n = (float)b.Tu / b.Mau;
	if (m > n)
		return 1;
	if (m < n)
		return -1;
	return 0;
}

void SapTang(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i <= m * n - 2; i++)
		for (int j = i + 1; j <= m * n - 1; j++)
			if (SoSanh(a[i / n][i % n],
				a[j / n][j % n]) == 1)
				HoanVi(a[i / n][i % n], a[j / n][j % n]);
}

