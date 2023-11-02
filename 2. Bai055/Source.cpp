#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
bool ktAm(PHANSO);

int main()
{
	PHANSO x;
	cout << "Nhap phan so: " << endl;
	Nhap(x);
	if (ktAm(x) == 1)
		cout << "Phan so am";
	else
		cout << "Phan so khong am";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

bool ktAm(PHANSO x)
{
	if (x.Tu * x.Mau < 0)
		return 1;
	return 0;
}