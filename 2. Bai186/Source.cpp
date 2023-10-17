#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO &);
void Nhap(PHANSO[], int &);
void Xuat(PHANSO);

int SoSanh(PHANSO, PHANSO);
int ViTriNhoNhat(PHANSO[], int);

int main()
{
	PHANSO a[100];
	int n;
	Nhap(a, n);

	cout << "\nPhan so nho nhat trong mang: ";
	Xuat(a[ViTriNhoNhat(a, n)]);

	return 0;
}

void Nhap(PHANSO &x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Nhap(PHANSO a[], int &n)
{
	cout << "Nhap so luong phan so: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap phan so thu " << i << ": " << endl;
		Nhap(a[i]);
	}
}
void Xuat(PHANSO x)
{
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}

int ViTriNhoNhat(PHANSO a[], int n)
{
	int lc = 0;
	for (int i = 0; i <= n - 1; i++)
		if (SoSanh(a[i], a[lc]) == -1)
			lc = i;
	return lc;
}