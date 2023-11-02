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

bool KtSongSong(DUONGTHANG, DUONGTHANG);
bool KtSongSong(DUONGTHANG[], int);

int main()
{
	DUONGTHANG a[100];
	int n;
	Nhap(a, n);

	if (KtSongSong(a, n))
		cout << "Cac duong thang song song";
	else
		cout << "Cac duong thang khong cung song song";

	return 0;
}

void Nhap(DUONGTHANG& l)
{
	cout << "Nhap a: ";
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

bool KtSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return true;
	return false;
}

bool KtSongSong(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
		if (!KtSongSong(a[0], a[i]))
			return false;
	return true;
}