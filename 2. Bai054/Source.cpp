#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO &);
int ktDuong(PHANSO);

int main()
{
	PHANSO x;
	Nhap(x);
	if (ktDuong(x))
		cout << "Toi Gian";
	else
		cout << "Khong Toi Gian";
	return 0;
}

void Nhap(PHANSO &x)
{
	cout << "\nNhap Tu:";
	cin >> x.Tu;
	cout << "Nhap Mau:\n";
	cin >> x.Mau;
}

int ktDuong(PHANSO x)
{
	if (x.Tu * x.Mau > 0)
		return 1;
	return 0;
}