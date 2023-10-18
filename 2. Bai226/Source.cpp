#include <iostream>
#include <cmath>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM &);
void Nhap(DIEM[][100], int &, int &);

float KhoangCach(DIEM, DIEM);
DIEM GanNhauNhat(DIEM[][100], int, int, DIEM);

int main()
{
	DIEM a[100][100];
	int m, n;
	cout << "Nhap ma tran cac diem:" << endl;
	Nhap(a, m, n);

	DIEM P;
	cout << "\nNhap diem P: ";
	Nhap(P);

	DIEM Q = GanNhauNhat(a, m, n, P);
	cout << "\nDiem gan diem P nhat la: (" << Q.x << ", " << Q.y << ")";

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

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt(pow(P.x - Q.x, 2) + pow(P.y - Q.y, 2));
}
DIEM GanNhauNhat(DIEM a[][100], int m, int n, DIEM P)
{
	DIEM Q = a[0][0];
	float min = KhoangCach(P, Q);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KhoangCach(P, a[i][j]) < min)
			{
				min = KhoangCach(P, a[i][j]);
				Q = a[i][j];
			}
	return Q;
}