#include <iostream>
#include <cmath>
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

void Nhap(DIEM&);
void Nhap(DUONGTRON&);
void Nhap(DUONGTRON[], int&);

void Xuat(DIEM);
void Xuat(DUONGTRON);

float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DUONGTRON);
void LietKe(DUONGTRON[], int);

int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a, n);

	LietKe(a, n);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Xuat(DIEM I)
{
	cout << "(" << I.x << ", " << I.y << ")";
}

void Xuat(DUONGTRON c)
{
	cout << "\nI = ";
	Xuat(c.I);
	cout << "\nR = " << c.R;
}

float KhoangCach(DIEM A, DIEM B)
{
	return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

int TuongDoi(DUONGTRON c1, DUONGTRON c2)
{
	float kc = KhoangCach(c1.I, c2.I);
	if (kc == 0 && c1.R == c2.R)
		return 0;
	if (kc > (c1.R + c2.R))
		return 1;
	if (kc == (c1.R + c2.R))
		return 2;
	if (kc<(c1.R + c2.R) && kc >abs(c1.R - c2.R))
		return 3;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}

void LietKe(DUONGTRON a[], int n)
{
	for(int i = 0; i <= n - 2; i++)
		for(int j = i + 1; j <= n - 1; j++)
			if (TuongDoi(a[i], a[j]) == 2 || TuongDoi(a[i], a[j]) == 4)
			{
				Xuat(a[i]);
				Xuat(a[j]);
			}
}