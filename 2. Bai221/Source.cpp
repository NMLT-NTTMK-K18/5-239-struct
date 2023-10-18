#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM &);
void Nhap(DIEM[][100], int &, int &);

int ktTrung(DIEM, DIEM);
int TanSuat(DIEM[][100], int, int, DIEM);

int main()
{
	DIEM a[100][100];
	int m, n;
	cout << "Nhap ma tran cac diem:" << endl;
	Nhap(a, m, n);

	DIEM P;
	cout << "\nNhap diem P: ";
	Nhap(P);

	int kq = TanSuat(a, m, n, P);
	cout << "\nTan suat xuat hien cua diem P la: " << kq;

	return 0;
}

void Nhap(DIEM &P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DIEM a[][100], int &m, int &n)
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