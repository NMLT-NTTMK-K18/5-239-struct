#include <iostream>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[], int&);

void Xuat(SOPHUC);

SOPHUC Tong(SOPHUC, SOPHUC);
SOPHUC Tong(SOPHUC[], int);

int main()
{
	SOPHUC a[100];
	int n;
	Nhap(a, n);

	cout << "Tong cua cac so phuc: ";
	Xuat(Tong(a, n));

	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(SOPHUC x)
{
	cout << "\nThuc = " << x.Thuc;
	cout << "\nAo = " << x.Ao;
}

SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp{};
	temp.Thuc = x.Thuc + y.Thuc;
	temp.Ao = x.Ao + y.Ao;
	return temp;
}

SOPHUC Tong(SOPHUC a[], int n)
{
	SOPHUC s = { 0,0 };
	for (int i = 0; i < n; i++)
	{
		s = Tong(s, a[i]);
	}
	return s;
}