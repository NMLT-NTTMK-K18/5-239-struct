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
void QuiDongMau(HONSO&, HONSO&);

int main()
{
	HONSO x, y;
	cout << "Nhap hon so 1: " << endl;
	Nhap(x);
	cout << "Nhap hon so 2: " << endl;
	Nhap(y);
	QuiDongMau(x, y);
	cout << "Hon so 1: " << endl;
	Xuat(x);
	cout << endl << "Hon so 2: " << endl;
	Xuat(y);
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

void QuiDongMau(HONSO& x, HONSO& y)
{
	int mc = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = x.Mau * y.Tu;
	x.Mau = mc;
	y.Mau = mc;
}