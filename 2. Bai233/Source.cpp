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
void Xuat(PHANSO[], int);
void Xuat(PHANSO[][100], int, int);

int UCLN(int, int);
int ktToiGian(PHANSO);
void HoanVi(PHANSO&, PHANSO&);
void SapTang(PHANSO[], int);
void LietKe(PHANSO[][100], int, int);


int main()
{
	PHANSO a[100][100];
	int m, n;
	Nhap(a, m, n);

	LietKe(a, m, n);
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
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
			cout << endl;
		}
}

int UCLN(int a, int b)
{
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	return m + n;
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

void SapTang(PHANSO a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (SoSanh(a[i], a[j]) == 1)
				HoanVi(a[i], a[j]);
}

int ktToiGian(PHANSO a)
{
	if (UCLN(a.Tu, a.Mau) == 1 && a.Tu / a.Mau == 0)
		return 1;
	return 0;
}

void LietKe(PHANSO a[][100], int m, int n)
{
	PHANSO b[1000];
	int k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktToiGian(a[i][j]))
				b[k++] = a[i][j];
	SapTang(b, k);
	Xuat(b, k);
}