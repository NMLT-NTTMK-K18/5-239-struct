#include <iostream>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG[], int);

int main()
{
	DUONGTHANG a[100];
	int n;
	Nhap(a, n);

	Xuat(a, n);

	return 0;
}

void Nhap(DUONGTHANG& l)
{
	cout << "Nhap a: ";
	cin >> l.a;
	cout << "Nhap b: ";
	cin >> l.b;
	cout << "Nhap c: ";
	cin >> l.c;
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}


void Xuat(DUONGTHANG a[], int n)

{
	for (int i = 0; i < n; i++)
	{
		cout << "Duong thang A[" << i << "]:";
		Xuat(a[i]);
		cout << endl;
	}
} 