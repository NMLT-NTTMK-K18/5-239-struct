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

int ktTiepXucOy(DUONGTRON);
int KiemTra(DUONGTRON[], int);

int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a, n);

	if (KiemTra(a, n) == 1)
		cout << "Ton tai duong tron tiep xuc voi truc hoanh";
	else
		cout << "Khong ton tai duong tron tiep xuc voi truc hoanh";

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

int ktTiepXucOy(DUONGTRON c)
{
	if (abs(c.I.x) == c.R)
		return 1;
	return 0;
}

int KiemTra(DUONGTRON a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (ktTiepXucOy(a[i]) == 1)
			flag = 1;
	return flag;
}