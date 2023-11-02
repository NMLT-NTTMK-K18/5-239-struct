//not done
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
void Xuat(DIEM);

int main()
{
	int n;
	DIEM a[100];
	Nhap(a, n);

	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap so diem: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap diem " << i + 1 << ": " << endl;
		Nhap(a[i]);
	}
}

void Xuat(DIEM P)
{
	cout << "x = " << P.x << endl;
	cout << "y = " << P.y;
}
