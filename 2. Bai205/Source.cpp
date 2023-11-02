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
	float r;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Nhap(DUONGTRON&);
void Nhap(DUONGTRON[], int&);
void Xuat(DIEM);
float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DUONGTRON);
bool ktDoiMotCatNhau(DUONGTRON[], int);
DIEM TrungBinhTamDuongTron(DUONGTRON[], int);
void DiemThuocTatCa(DUONGTRON[], int);

int main()
{
	int n;
	DUONGTRON a[100];
	Nhap(a, n);
	DiemThuocTatCa(a, n);
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
	cout << "Nhap tam: " << endl;
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.r;
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]:" << endl;
		Nhap(a[i]);
	}
}

void Xuat(DIEM P)
{
	cout << "x = " << P.x << endl;
	cout << "y = " << P.y;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
}

int TuongDoi(DUONGTRON c1, DUONGTRON c2)
{
	float kc = KhoangCach(c1.I, c2.I);
	if (kc == 0 && c1.r == c2.r)
		return 0;
	if (kc > (c1.r + c2.r))
		return 1;
	if (kc == (c1.r + c2.r))
		return 2;
	if (kc < (c1.r + c2.r) && kc > abs(c1.r -
		c2.r))
		return 3;
	if (kc == abs(c1.r - c2.r))
		return 4;
	return 5;
}

bool ktDoiMotCatNhau(DUONGTRON a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (TuongDoi(a[i], a[j]) != 3)
				flag = 0;
	return flag;
}

DIEM TrungBinhTamDuongTron(DUONGTRON a[], int n)
{
	DIEM temp;
	temp.x = 0;
	temp.y = 0;
	for (int i = 0; i < n; i++)
	{
		temp.x += a[i].I.x;
		temp.y += a[i].I.y;
	}
	temp.x /= n;
	temp.y /= n;
	return temp;
}

void DiemThuocTatCa(DUONGTRON a[], int n)
{
	if (ktDoiMotCatNhau(a, n) == 1)
	{
		cout << "Ton tai" << endl;
		Xuat(TrungBinhTamDuongTron(a, n));
	}
	else
		cout << "Khong ton tai";
}