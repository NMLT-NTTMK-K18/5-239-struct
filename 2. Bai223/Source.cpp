#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DIEM&);
void Nhap(DIEM[][100], int&, int&);
void Nhap(DUONGTHANG&);

int ktThuoc(DUONGTHANG, DIEM);
int DemDiem(DIEM[][100], int, int, DUONGTHANG);

int main()
{
	DIEM a[100][100];
	int m, n;
	cout << "Nhap ma tran cac diem:" << endl;
	Nhap(a, m, n);

	DUONGTHANG d;
	Nhap(d);

	cout << "So diem thuoc duong thang la: " << DemDiem(a, m, n, d);

	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DIEM a[][100], int& m, int& n)
{
	cout << "Nhap so luong diem: ";
	cin >> m;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\nNhap diem thu " << i + 1 << ": ";
			Nhap(a[i][j]);
		}
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

int ktThuoc(DUONGTHANG d, DIEM P)
{
	if (d.a * P.x + d.b * P.y + d.c == 0)
		return 1;
	return 0;
}

int DemDiem(DIEM a[][100], int m, int n, DUONGTHANG d)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc(d, a[i][j]))
				dem++;
	return dem;
}