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

void QuiDongTu(PHANSO&, PHANSO&);

int main()
{
	PHANSO M;
	cout << "Nhap phan so M: ";
	Nhap(M);

	PHANSO N;
	cout << "Nhap phan so N: ";
	Nhap(N);

	cout << "Phan so M & Phan so N sau khi qui dong tu:" << endl;
	QuiDongTu(M, N);

	cout << "\nPhan so M: ";
	Xuat(M);
	cout << "\nPhan so N: ";
	Xuat(N);

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

void QuiDongTu(PHANSO& x, PHANSO& y)
{
	int tc = x.Tu * y.Tu;
	x.Mau = x.Mau * y.Tu;
	y.Mau = y.Mau * x.Tu;
	x.Tu = tc;
	y.Tu = tc;
}