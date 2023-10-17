#include <iostream>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM &);
void Nhap(DUONGTHANG &);
void Nhap(DUONGTHANG[], int &);

int ktThuoc(DUONGTHANG, DIEM);
int ktQuaDiem(DUONGTHANG[], int, DIEM);

int main()
{
	DUONGTHANG a[100];
	int n;
	Nhap(a, n);

	cout << "Nhap diem P:" << endl;
	DIEM P;
	Nhap(P);

	if (ktQuaDiem(a, n, P) == 1)
		cout << "Diem P thuoc it nhat mot duong thang trong mang";
	else
		cout << "Diem P khong thuoc bat ki duong thang nao trong mang";

	return 0;
}

void Nhap(DUONGTHANG &l)
{
	cout << "Nhap a: ";
	cin >> l.a;
	cout << "Nhap b: ";
	cin >> l.b;
	cout << "Nhap c: ";
	cin >> l.c;
}

void Nhap(DUONGTHANG a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Nhap(DIEM &P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

int ktThuoc(DUONGTHANG d, DIEM P)
{
	if ((d.a * P.x + d.b * P.y + d.c) == 0)
		return 1;
	return 0;
}

int ktQuaDiem(DUONGTHANG a[], int n, DIEM P)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (ktThuoc(a[i], P))
			flag = 1;
	return flag;
}