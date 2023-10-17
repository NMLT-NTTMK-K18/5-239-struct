#include <iostream>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG &);
void Nhap(DUONGTHANG[], int &);

int main()
{
	DUONGTHANG a[100];
	int n;
	Nhap(a, n);

	cout << "Da hoan thanh nhap mang mot chieu cac duong thang";

	return 0;
}

void Nhap(DUONGTHANG &l)
{
	cout << "Nhap a: ";
	cin >> l.a;
	cout << "Nhap b: ";
	cin >> l.b;
	cout << "Nhap c: ";
	cin >> l.c;
}

void Nhap(DUONGTHANG a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}