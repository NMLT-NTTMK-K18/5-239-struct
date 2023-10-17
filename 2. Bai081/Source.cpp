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

void Nhap(HONSO &);
void Xuat(HONSO);

void QuiDongTu(HONSO &, HONSO &);

int main()
{
	HONSO M;
	cout << "Nhap hon so M: " << endl;
	Nhap(M);

	HONSO N;
	cout << "Nhap hon so N: " << endl;
	Nhap(N);

	cout << "Hon so M, N sau khi quy dong tu:" << endl;
	QuiDongTu(M, N);

	cout << "Hon so M:" << endl;
	Xuat(M);
	cout << "\nHon so N:" << endl;
	Xuat(N);

	return 0;
}

void Nhap(HONSO &x)
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
	cout << setw(6);
	cout << "\n Nguyen: " << x.Nguyen;
	cout << "\n Tu: " << x.Tu;
	cout << "\n Mau: " << x.Mau;
}

void QuiDongTu(HONSO &x, HONSO &y)
{
	int tc = x.Tu * y.Tu;
	x.Mau = x.Mau * y.Tu;
	y.Mau = y.Mau * x.Tu;
	x.Tu = tc;
	y.Tu = tc;
}