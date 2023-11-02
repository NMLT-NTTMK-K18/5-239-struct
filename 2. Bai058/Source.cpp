#include <iostream>
using namespace std;

struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
int SoSanh(PHANSO, PHANSO);

int main()
{
	PHANSO M, N;
	cout << "Nhap phan so 1: ";
	Nhap(M);
	Xuat(M);

	cout << "\n\nNhap phan so 2: ";
	Nhap(N);
	Xuat(N);

	int kq = SoSanh(M, N);
	switch (kq)
	{
	case 1:
		cout << "\nPhan so 1 lon hon phan so 2";
		break;
	case -1:
		cout << "\nPhan so 1 nho hon phan so 2";
		break;
	case 0:
		cout << "\nPhan so 1 bang phan so 2";
		break;
	}

	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
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