#include <iostream>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Nhap(DUONGTHANG[], int&);
bool ktTrung(DUONGTHANG, DUONGTHANG);
bool ktCapTrungNhau(DUONGTHANG[], int);

int main()
{
	int n;
	DUONGTHANG d[100];
	Nhap(d, n);
	if (ktCapTrungNhau(d, n) == 1)
		cout << "Co cap trung nhau";
	else
		cout << "Khong co cap trung nhau";
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Nhap(DUONGTHANG d[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap duong thang thu " << i << ":" << endl;
		Nhap(d[i]);
	}
}

bool ktTrung(DUONGTHANG d1, DUONGTHANG d2)
{
	if (d1.a == d2.a && d1.b == d2.b && d1.c == d2.c)
		return 1;
	return 0;
}

bool ktCapTrungNhau(DUONGTHANG a[], int n)
{
	int flag = 0;
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (ktTrung(a[i], a[j]))
				flag = 1;
	return flag;
}