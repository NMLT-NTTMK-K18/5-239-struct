#include <iostream>
#include <iomanip>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);
int UCLN(int, int);
void RutGon(HONSO&);
HONSO Tong(HONSO, HONSO);

int main()
{
	HONSO x, y;
	cout << "Nhap hon so 1: " << endl;
	Nhap(x);
	cout << "Nhap hon so 2: " << endl;
	Nhap(y);
	Xuat(Tong(x, y));
	return 0;
}

void Nhap(HONSO& x)
{
	cout << "Nhap nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << "Nguyen: " << x.Nguyen << endl;
	cout << "Tu: " << x.Tu << endl;
	cout << "Mau: " << x.Mau;
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

void RutGon(HONSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
	x.Nguyen = x.Nguyen + x.Tu / x.Mau;
	x.Tu = x.Tu % x.Mau;
}

HONSO Tong(HONSO x, HONSO y)
{
	HONSO temp;
	temp.Nguyen = x.Nguyen + y.Nguyen;
	temp.Tu = x.Tu * y.Mau + y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}