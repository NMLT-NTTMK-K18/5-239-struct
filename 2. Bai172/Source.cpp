#include <iostream>
#include <iomanip>
using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

DATHUC operator+(DATHUC, DATHUC);
DATHUC operator-(DATHUC, DATHUC);
DATHUC operator*(DATHUC, DATHUC);
int LonNhat(int, int);
void GiamBac(DATHUC&);

DATHUC operator/(DATHUC, DATHUC);

int main()
{
	DATHUC f;
	cout << "Nhap f:" << endl;
	Nhap(f);

	DATHUC g;
	cout << "Nhap g:" << endl;
	Nhap(g);

	cout << "Thuong cua f / g:" << endl;
	Xuat(f / g);
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap bac da thuc: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	cout << setw(6);
	cout << setprecision(3);
	for (int i = f.n; i >= 1; i--)
	{
		cout << f.a[i];
		cout << "x^" << i << " + ";
	}
	cout << f.a[0];
}

int LonNhat(int a, int b)
{
	if (a > b)
		return a;
	return b;
}

void GiamBac(DATHUC& f)
{
	while (f.a[f.n] == 0)
		f.n--;
}

DATHUC operator+(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = LonNhat(f.n, g.n);
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	for (int i = f.n; i >= 0; i--)
		temp.a[i] += f.a[i];
	for (int i = g.n; i >= 0; i--)
		temp.a[i] += g.a[i];
	GiamBac(temp);
	return temp;
}

DATHUC operator-(DATHUC f, DATHUC g)
{
	for (int i = g.n; i >= 0; i--)
		g.a[i] = -g.a[i];
	return (f + g);
}

DATHUC operator*(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = f.n + g.n;
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	for (int i = f.n; i >= 0; i--)
		for (int j = g.n; j >= 0; j--)
			temp.a[i + j] += f.a[i] * g.a[j];
	return temp;
}

DATHUC operator/(DATHUC f, DATHUC g)
{
	DATHUC thuong;
	thuong.n = f.n - g.n;
	for (int i = thuong.n; i >= 0; i--)
		thuong.a[i] = 0;
	for (int i = thuong.n; i >= 0; i--)
	{
		thuong.a[i] = f.a[i + g.n] / g.a[g.n];
		DATHUC temp;
		temp.n = i;
		for (int i = temp.n; i >= 0; i--)
			temp.a[i] = 0;
		temp.a[i] = thuong.a[i];
		DATHUC du;
		du.n = i + g.n;
		for (int i = du.n; i >= 0; i--)
			du.a[i] = 0;
		du = temp * g;
		f = f - du;
	}
	return thuong;
}