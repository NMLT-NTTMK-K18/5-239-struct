#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[], int&);

int main()
{
	DIEM a[100];
	int n;
	Nhap(a, n);
	return 0;
}

void Nhap(DIEM& x)
{
	cout << "\nNhap x: ";
	cin >> x.x;
	cout << "Nhap y: ";
	cin >> x.y;
}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		Nhap(a[i]);
	}
}