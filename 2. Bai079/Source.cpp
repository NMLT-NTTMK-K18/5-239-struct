#include <iostream>
using namespace std;

struct HONSO
{
	int nguyen;
	int tu;
	int mau;
};
typedef struct HONSO HONSO;

void Nhap(HONSO &);
int UCLN(int, int);
int ktToiGian(HONSO);

int main()
{
	HONSO x;
	Nhap(x);
	if (ktToiGian(x))
		cout << "Toi Gian";
	else
		cout << "Khong Toi Gian";
	return 0;
}

void Nhap(HONSO &x)
{
	cout << "\nNhap nguyen:";
	cin >> x.nguyen;
	cout << "Nhap tu:";
	cin >> x.tu;
	cout << "Nhap mau:";
	cin >> x.mau;
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

int ktToiGian(HONSO x)
{
	if (UCLN(x.tu, x.mau) == 1 && x.tu / x.mau == 0)
		return 1;
	return 0;
}