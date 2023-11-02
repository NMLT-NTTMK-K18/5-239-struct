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
int UCLN(int, int);
bool KtToiGian(PHANSO);

int main()
{
	PHANSO M;
	Nhap(M);
	Xuat(M);

	if (KtToiGian(M))
		cout << "\nPhan so toi gian";
	else
		cout << "\nPhan so chua toi gian";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}

bool KtToiGian(PHANSO x)
{
	if (UCLN(x.Tu, x.Mau) == 1)
		return true;
	return false;
}