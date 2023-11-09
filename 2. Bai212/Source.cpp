#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DIEM& P);
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
void Nhap(DUONGTHANG[], int&);

float KhoangCach(DUONGTHANG, DIEM);
DUONGTHANG GanDiemNhat(DUONGTHANG[], int,DIEM);

int main()
{
	DUONGTHANG a[100];
	DIEM P;
	int n;
	Nhap(a, n);
	Nhap(P);
	cout << "Diem gan P nhat la:";
	Xuat(GanDiemNhat(a, n, P));
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap diem P:";
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Nhap(DUONGTHANG& l)
{
	cout << "\nNhap a: ";
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



float KhoangCach(DUONGTHANG d, DIEM P)
{
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}

DUONGTHANG GanDiemNhat(DUONGTHANG a[], int n,DIEM P)
{
    DUONGTHANG lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCach(a[i], P) < KhoangCach(lc, P))
	lc = a[i];
	return lc;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na:" << d.a;
	cout << "\nb:" << d.b;
	cout << "\nc:" << d.c;
}
