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

void Nhap(DUONGTHANG&);
void Nhap(DUONGTHANG[], int&);

int ktCat(DUONGTHANG, DUONGTHANG);
DIEM GiaoDiem(DUONGTHANG, DUONGTHANG);
int ktThuoc(DUONGTHANG, DIEM);
int ktDongQuy(DUONGTHANG[], int);

int main()
{
	DUONGTHANG a[100];
	int n;
	Nhap(a, n);

	if (ktDongQuy(a, n))
		cout << "\nCac duong thang dong quy";
	else
		cout << "\nkhong dong quy";

	return 0;
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

int ktCat(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return 1;
	return 0;
}

DIEM GiaoDiem(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	float Dy = -d1.a * d2.c + d2.a * d1.c;

	DIEM temp{};
	temp.x = Dx / D;
	temp.y = Dy / D;
	return temp;
}

int ktThuoc(DUONGTHANG d, DIEM P)
{
	if ((d.a * P.x + d.b * P.y + d.c) == 0)
		return 1;
	return 0;
}

int ktDongQuy(DUONGTHANG a[], int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if (ktCat(a[i], a[j]))
			{
				DIEM PP = GiaoDiem(a[i], a[j]);
				for (int k = 0; k < n; k++)
					if (k != i && k != j && ktThuoc(a[k], PP))
						return 1;
			}
	return 0;
}