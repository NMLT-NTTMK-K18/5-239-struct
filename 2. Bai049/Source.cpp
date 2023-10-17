#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO);
void Xuat(PHANSO);
int UCLN(int, int);
void RutGon(PHANSO &, PHANSO &);
PHANSO Hieu(PHANSO, PHANSO);

int main()
{
	PHANSO x, y;
	Nhap(x);
	Nhap(y);
	Xuat(Hieu(x, y));
	return 0;
}

void Nhap(PHANSO x)
{
	cout << "\nNhap Tu:";
	cin >> x.Tu;
	cout << "Nhap Mau:\n";
	cin >> x.Mau;
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

void RutGon(PHANSO &x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}

PHANSO Hieu(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}

void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau;
}