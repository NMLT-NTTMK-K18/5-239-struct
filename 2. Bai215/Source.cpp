#include <iostream>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
void Nhap(NGAY[], int&);
void Xuat(NGAY);
void Xuat(NGAY[], int);

int main()
{
	int n;
	NGAY a[100];
	Nhap(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
}

void Nhap(NGAY a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ngay a[" << i << "]:" << endl;
		Nhap(a[i]);
	}
}

void Xuat(NGAY x)
{
	cout << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}

void Xuat(NGAY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Ngay a[" << i << "]: ";
		Xuat(a[i]);
		cout << endl;
	}
}