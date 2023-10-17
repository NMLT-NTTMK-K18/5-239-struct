#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM &);
void Xuat(DIEM);
void Nhap(DIEM[], int &);
void Xuat(DIEM[], int);

int main()
{
	DIEM a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(DIEM &x)
{
	cout << "\nNhap Hoanh Do:";
	cin >> x.x;
	cout << "Nhap Tung Do:";
	cin >> x.y;
}

void Nhap(DIEM a[], int &n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:";
		Nhap(a[i]);
	}
}

void Xuat(DIEM x)
{
	cout << "(" << x.x << "," << x.y << ")";
}

void Xuat(DIEM a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:";
		Xuat(a[i]);
	}
}