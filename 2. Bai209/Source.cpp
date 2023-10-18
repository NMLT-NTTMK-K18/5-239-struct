#include <iostream>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG &);
void Nhap(DUONGTHANG[], int &);
int ktSongSong(DUONGTHANG, DUONGTHANG);
int ktCapSongSong(DUONGTHANG, int);

int main()
{
	DUONGTHANG d[100];
	int n;
	Nhap(d, n);
	if (ktCapSongSong(d, n) == 1)
		cout << "Co cap song song";
	else
		cout << "Khong co cap song song";
	return 0;
}

void Nhap(DUONGTHANG &d)
{
	cout << "Nhap a:";
	cin >> d.a;
	cout << "Nhap b:";
	cin >> d.b;
	cout << "Nhap c:";
	cin >> d.c;
}

void Nhap(DUONGTHANG d[], int &n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap duong thang thu " << i << ":";
		Nhap(d[i]);
	}
}

void ktTrungNhau(DUONGTHANG d1, DUONGTHANG d2)
{
	if (d1.a == d2.a && d1.b == d2.b && d1.c == d2.c)
		cout << "Trung nhau";
	else
		cout << "Khong trung nhau";
}

int ktSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return 1;
	return 0;
}

int ktCapSongSong(DUONGTHANG d[], int n)
{
	int flag = 0;
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (ktSongSong(d[i], d[j]) == 1)
				flag = 1;
	return flag;
}