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
void Xuat(DIEM[], int);


float KhoangCach(DIEM, DIEM);
void GanNhauNhat(DIEM[], int,DIEM&,DIEM&);

int main()
{
	DIEM a[100];
	int n;
	Nhap(a, n);

	DIEM P, Q;
	GanNhauNhat(a, n, P, Q);
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

void Xuat(DIEM x)
{
	cout << "(" << x.x << "," << x.y << ")";
}

void Xuat(DIEM a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		Xuat(a[i]);
	}
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

void GanNhauNhat(DIEM a[], int n,DIEM& P, DIEM&	Q)
{
	P = a[0];
	Q = a[1];
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n-1;j++)
			if (KhoangCach(a[i], a[j]) < KhoangCach(P, Q))
			{
				P = a[i];
				Q = a[j];
			}
	cout << "\n2 diem gan nhau nhat la: \n";
	Xuat(P);
	cout << endl;
	Xuat(Q);
}