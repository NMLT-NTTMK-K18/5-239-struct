#include <iostream>
using namespace std;

struct HonSo
{
	int nguyen;
	int tu;
	int mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO &);
int UCLN(int, int);
void RutGon(HONSO &);
void Xuat(HONSO);

int main()
{
	HONSO x;
	Nhap(x);
	RutGon(x);
	Xuat(x);
	return 0;
}

void Nhap(HONSO &x)
{
	cout << "\nNhap nguyen:";
	cin >> x.nguyen;
	cout << "Nhap tu:";
	cin >> x.tu;
	cout << "Nhap mau:";
	cin >> x.mau;
}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}

void RutGon(HONSO &x)
{
	int kq = UCLN(x.tu, x.mau);
	x.tu = x.tu / kq;
	x.mau = x.mau / kq;
	x.nguyen = x.nguyen + x.tu / x.mau;
	x.tu = x.tu % x.mau;
}