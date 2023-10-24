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
void RutGon(HONSO&);
int UCLN(int, int);

int main()
{
	HONSO M;
	cout << "Nhap hon so M: " << endl;
	Nhap(M);
	RutGon(M);
	cout << "Hon so M sau khi rut gon la:" << endl;
	Xuat(M);

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
	cout << setw(6);
	cout << "\n Nguyen: " << x.Nguyen;
	cout << "\n Tu: " << x.Tu;
	cout << "\n Mau: " << x.Mau;
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
void RutGon(HONSO & x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
    x.Nguyen = x.Nguyen + x.Tu / x.Mau;
	x.Tu = x.Tu % x.Mau;
}