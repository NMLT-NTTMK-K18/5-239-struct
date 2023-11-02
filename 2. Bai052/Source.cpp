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
int ktCoNghia(PHANSO);

int main()
{
	PHANSO x;
	Nhap(x);
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

void Xuat(PHANSO x)
{
	if (ktCoNghia(x))
		cout << "Phan so co nghia";
	else
		cout << "Phan so khong co nghia";
}

int ktCoNghia(PHANSO x)
{
	if (x.Mau != 0)
		return 1;
	return 0;
}
