#include <iostream>
using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC &);
void Xuat(DATHUC);

DATHUC operator+(DATHUC, DATHUC);
DATHUC operator-(DATHUC, DATHUC);
DATHUC operator*(DATHUC, DATHUC);
int LonNhat(int, int);
void GiamBac(DATHUC &);

DATHUC Thuong(DATHUC, DATHUC);

int main()
{
	DATHUC f;
	Nhap(f);
	DATHUC g;
	Nhap(g);
	Xuat(Thuong(f, g));
	return 0;
}

void Nhap(DATHUC &f)
{
	cout << "Nhap n:";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a" << i << ":";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 0; i--)
		cout << f.a[i] << "^" << i << "+";
}

int LonNhat(int a, int b)
{
	if (a > b)
		return a;
	return b;
}

void GiamBac(DATHUC &f)
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
DATHUC Thuong(DATHUC f, DATHUC g)
{
	DATHUC bichia = f;
	DATHUC chia = g;
	DATHUC temp;
	temp.n = f.n - g.n;
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	while (bichia.n >= chia.n)
	{
		DATHUC tg;
		tg.n = bichia.n - chia.n;
		for (int i = tg.n; i >= 0; i--)
			tg.a[i] = 0;
		tg.a[tg.n] = bichia.a[bichia.n] / chia.a[chia.n];
		DATHUC tru = tg * bichia;
		temp = temp + tg;
	}
	return temp;
}