#include <iostream>
using namespace std;

struct SoPhuc
{
	float a;
	float b;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC &);
void Nhap(SOPHUC[], int n);
void Xuat(SOPHUC);
void Xuat(SOPHUC[], int n);
SOPHUC DauTien(SOPHUC[], int);

int main()
{

	return 0;
}

void Nhap(SOPHUC &f)
{
	cout << "\nNhap a:";
	cin >> f.a;
	cout << "Nhap b:";
	cin >> f.b;
}

void Nhap(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:";
		Nhap(a[i]);
	}
}

void Xuat(SOPHUC f)
{
	cout << "(" << f.a << "," << f.b << ")";
}

void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:";
		Xuat(a[i]);
	}
}

SOPHUC DauTien(SOPHUC a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i].a > 0 && a[i].b > 0)
			return a[i];
	SOPHUC lc = {0, 0};
	return lc;
}