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
void HoanVi(PHANSO&, PHANSO&);
int SoSanh(PHANSO, PHANSO);
void SapTang(PHANSO[], int);

int main()
{
	PHANSO a[100];
	int n;
	Nhap(a, n);
	SapTang(a, n);
	Xuat(a, n);
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

void HoanVi(PHANSO& x, PHANSO& y)
{
	PHANSO temp = x;
	x = y;
	y = temp;
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

void SapTang(PHANSO a[], int n)
{
	for(int i=0;i<=n-2;i++)
		for(int j=i+1;j<=n-1;j++)
			if(SoSanh(a[i],a[j])==1)
				HoanVi(a[i],a[j]);
}