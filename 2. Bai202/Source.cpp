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

void Nhap(DIEM&);
void Nhap(DUONGTRON&);
void Nhap(DUONGTRON[], int&);

int ktDoiMotCatNhau(DUONGTRON[], int); 
float KhoangCach(DIEM P, DIEM Q);
int TuongDoi(DUONGTRON c1, DUONGTRON c2);

int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a, n);

	if (ktDoiMotCatNhau(a, n))
		cout << "Cac duong tron doi mot cat nhau";
	else
		cout << "Cac duong trong khong doi mot cat nhau";

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

int ktDoiMotCatNhau(DUONGTRON a[], int n)
{
		int flag = 1;
		for (int i = 0; i <= n - 2; i++)
			for (int j = i + 1; j <= n - 1; j++)
				if (TuongDoi(a[i], a[j]) != 3)
					flag = 0;
		return flag;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x)
		+ (P.y - Q.y) * (P.y - Q.y));
}

int TuongDoi(DUONGTRON c1, DUONGTRON c2)
{
	float kc = KhoangCach(c1.I, c2.I);
	if (kc == 0 && c1.R == c2.R)
		return 0;
	if (kc > c1.R + c2.R)
		return 1;
	if (kc == c1.R + c2.R)
		return 2;
	if (kc<c1.R + c2.R && kc>abs(c1.R - c2.R))
		return 3;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}

