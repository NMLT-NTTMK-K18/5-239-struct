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

DATHUC Hieu(DATHUC, DATHUC);

int main()
{
	DATHUC f1;
	cout << "Nhap da thuc f1:" << endl;
	Nhap(f1);

	DATHUC f2;
	cout << "Nhap da thuc f2:" << endl;
	Nhap(f2);

	cout << "Hieu da thuc: f1 - f2:" << endl;
	Xuat(Hieu(f1, f2));

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

DATHUC Hieu(DATHUC f1, DATHUC f2)
{
	DATHUC f;
	f.n = (f1.n > f2.n) ? f1.n : f2.n;
	for (int i = f.n; i >= 0; i--)
	{
		f.a[i] = f1.a[i] - f2.a[i];
	}
	return f;
}