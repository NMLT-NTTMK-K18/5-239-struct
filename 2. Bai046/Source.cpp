#include <iostream>
using namespace std;

struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO &);
void Xuat(PHANSO);

int main()
{
	PHANSO M;
	cout << "Nhap phan so M: ";
	Nhap(M);

	cout << "\nPhan so vua nhap: ";
	Xuat(M);

	return 0;
}

void Nhap(PHANSO &x)
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
