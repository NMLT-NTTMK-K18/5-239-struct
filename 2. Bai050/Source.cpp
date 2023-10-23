#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
int UCLN(int, int);
void RutGon(PHANSO&);
PHANSO Tich(PHANSO, PHANSO);

int main()
{
	PHANSO x, y;
	cout << "Nhap phan so 1: " << endl;
	Nhap(x);
	cout << "Nhap phan so 2: " << endl;
	Nhap(y);
	Xuat(Tich(x, y));
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "Tu: " << x.Tu << endl;
	cout << "Mau: " << x.Mau;
}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}

void RutGon(PHANSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}

PHANSO Tich(PHANSO a, PHANSO b)
{
	PHANSO temp;
	temp.Tu = a.Tu * b.Tu;
	temp.Mau = a.Mau * b.Mau;
	RutGon(temp);
	return temp;
}
