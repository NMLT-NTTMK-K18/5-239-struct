#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[][100], int&, int&);
int DemKhongTrung(DIEM a[][100], int m, int n);
int ktTrung(DIEM, DIEM);
int TanSuat(DIEM[][100], int, int, DIEM);

int main()
{
	DIEM a[100][100];
	int m, n;
	cout << "Nhap ma tran cac diem:" << endl;
	Nhap(a, m, n);

	int kq = DemKhongTrung(a,m,n);
	cout << "\nSo Luong Diem Khong Trung La:" << kq;

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
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	int k = 1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\nNhap diem thu " << k++ << ": ";
			Nhap(a[i][j]);
		}
}

int ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}

int TanSuat(DIEM a[][100], int m, int n, DIEM P)

{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktTrung(a[i][j], P))
				dem++;
	return dem;
}

int DemKhongTrung(DIEM a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		if (TanSuat(a, m, n, a[i][j]) == 1)
		dem++;
	return dem;
}
