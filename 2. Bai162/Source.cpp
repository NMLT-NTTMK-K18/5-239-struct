#include <iostream>
#include <iomanip>
using namespace std;

struct DaThuc
{
	float a[100];
	int n;
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

DATHUC Tich(DATHUC, DATHUC);

int main()
{
	DATHUC f1;
	cout << "Nhap da thuc f1:" << endl;
	Nhap(f1);

	DATHUC f2;
	cout << "Nhap da thuc f2:" << endl;
	Nhap(f2);

	cout << "Tich da thuc: f1 * f2:" << endl;
	Xuat(Tich(f1, f2));

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
	for (int i = f.n; i >= 1; i--)
	{
		cout << f.a[i];
		cout << "x^" << i;
		cout << setw(3);
	}
	cout << f.a[0];
}

DATHUC Tich(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = f.n + g.n;
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	for (int i = 0; i <= g.n; i++)
		for (int j = 0; j <= f.n; j++)
		temp.a[i + j] += g.a[i] * f.a[j];
	return temp;
}