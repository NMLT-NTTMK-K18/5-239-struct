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
DATHUC DaoHam(DATHUC);

int main()
{
	DATHUC f;
	Nhap(f);
	Xuat(DaoHam(f));
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap n: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
	{
		cout << setw(5) << "(" << f.a[i] << ")";
		cout << "x^" << i << " + ";
	}
	cout << setw(5) << "(" << f.a[0] << ")";
}

DATHUC DaoHam(DATHUC f)
{
	DATHUC temp;
	temp.n = f.n - 1;
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = f.a[i + 1] * (i + 1);
	return temp;
}