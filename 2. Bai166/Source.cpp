#include <iostream>
#include <iomanip>
using namespace std;

struct DaThuc
{
	float a[100];
	int n;
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC &);
void Xuat(DATHUC);

DATHUC DaoHam(DATHUC);
DATHUC DaoHam(DATHUC, int);

int main()
{
	DATHUC ff;
	cout << "Nhap da thuc f:" << endl;
	Nhap(ff);

	int k;
	cout << "Nhap bac dao ham: ";
	cin >> k;

	cout << "Dao ham cap " << k << "cua da thuc vua nhap :" << endl;
	Xuat(DaoHam(ff, k));

	return 0;
}

void Nhap(DATHUC &f)
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
	for (int i = f.n; i >= 1; i--)
	{
		cout << f.a[i];
		cout << "x^" << i;
		cout << setw(3);
	}
	cout << f.a[0];
}

DATHUC DaoHam(DATHUC f)
{
	DATHUC d;
	d.n = f.n - 1;
	for (int i = d.n; i >= 0; i--)
		d.a[i] = f.a[i + 1] * (i + 1);
	return d;
}

DATHUC DaoHam(DATHUC f, int k)
{
	for (int i = 1; i <= k; i++)
		f = DaoHam(f);
	return f;
}