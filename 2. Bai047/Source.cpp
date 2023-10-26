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
void Xuat(PHANSO);
void RutGon(PHANSO&);
int UCLN(int, int);

int main()
{
	PHANSO x;
	Nhap(x);
	RutGon(x);
	Xuat(x);
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap Tu: ";
	cin >> x.Tu;
	cout << "Nhap Mau: ";
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

void Xuat(PHANSO x)
{
	cout << "\n Phan so sau khi rut gon la:";
	cout << setw(6);
	cout << setprecision(3);
	cout << x.Tu;
	cout << "/";
	cout << x.Mau;
}

void RutGon(PHANSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}
