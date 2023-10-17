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
	DIEM P;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM &);
void Nhap(DUONGTRON &);
void Nhap(DUONGTRON[], int &);
int KhoangCachGoc(DIEM);
int ktQuaGoc(DUONGTRON);
int ktTonTai(DUONGTRON[], int);

int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a, n);
	cout << ktTonTai(a, n);
	return 0;
}

void Nhap(DIEM &x)
{
	cout << "\nNhap Hoanh Do:";
	cin >> x.x;
	cout << "Nhap Tung Do:";
	cin >> x.y;
}

void Nhap(DUONGTRON &x)
{
	cout << "\nNhap Tam:";
	Nhap(x.P);
	cout << "\nNhap Ban Kinh:";
	cin >> x.R;
}

void Nhap(DUONGTRON a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:";
		Nhap(a[i]);
	}
}

int KhoangCachGoc(DIEM a)
{
	float kc = sqrt(a.x * a.x + a.y * a.y);
	return kc;
}

int ktQuaGoc(DUONGTRON c)
{
	float kc = KhoangCachGoc(c.P);
	if (kc == c.R)
		return 1;
	return 0;
}

int ktTonTai(DUONGTRON a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (ktQuaGoc(a[i]) == 1)
			flag = 1;
	return flag;
}