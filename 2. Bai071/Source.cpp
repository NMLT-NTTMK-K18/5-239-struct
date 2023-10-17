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

int main()
{
	HONSO M;
	cout << "Nhap hon so M: " << endl;
	Nhap(M);

	cout << "Hon so M:" << endl;
	Xuat(M);

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