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
DATHUC Tong(DATHUC, DATHUC);

int main()
{
	DATHUC f1, f2;
	cout << "Nhap da thuc 1: " << endl;
	Nhap(f1);
	cout << "Nhap da thuc 2: " << endl;
	Nhap(f2);
	Xuat(Tong(f1, f2));
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

DATHUC Tong(DATHUC f1, DATHUC f2)
{
	int bacMax = f1.n;
	if (f2.n > bacMax)
		bacMax = f2.n;
	DATHUC temp;
	temp.n = bacMax;
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	for (int i = f1.n; i >= 0; i--)
		temp.a[i] += f1.a[i];
	for (int i = f2.n; i >= 0; i--)
		temp.a[i] += f2.a[i];
	while (temp.a[temp.n] == 0)
		temp.n--;
	return temp;
}