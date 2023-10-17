#include <iostream>
using namespace std;

struct PhanSo
{
	int tu;
	int mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO &);
void Nhap(PHANSO[], int &);
int ktDuong(PHANSO);
int DemDuong(PHANSO[], int);

int main()
{

	return 0;
}

void Nhap(PHANSO &x)
{
	cout << "\nNhap Tu:";
	cin >> x.tu;
	cout << "Nhap Mau:";
	cin >> x.mau;
}

void Nhap(PHANSO a[], int &n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:";
		Nhap(a[i]);
	}
}

int ktDuong(PHANSO P)
{
	if (P.mau * P.tu > 0)
		return 1;
	return 0;
}

int DemDuong(PHANSO a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktDuong(a[i]) == 1)
			dem++;
}
