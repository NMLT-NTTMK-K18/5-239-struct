#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM &);
void Nhap(DUONGTRON &);
void Nhap(DUONGTRON[], int &);

int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a, n);

	cout << "Da hoan thanh nhap mang mot chieu cac duong tron";

	return 0;
}

void Nhap(DIEM &P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DUONGTRON &c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Nhap(DUONGTRON a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}