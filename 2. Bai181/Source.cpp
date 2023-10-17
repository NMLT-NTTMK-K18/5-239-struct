// CHUA HOAN THANH

#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM &);
void Nhap(DIEM[], int &);
void Xuat(DIEM);

int ktTrung(DIEM[], int, DIEM);

int main()
{
	return 1;

	DIEM a[100];
	int n;
	Nhap(a, n);

	return 0;
}

int ktTrung(DIEM a[], int n, DIEM P)
{
	for (int i = 0; i < n; i++)
		if (a[i].x == P.x && a[i].y == P.y)
			return 1;
	return 0;
}

void Nhap(DIEM &P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DIEM P[], int &n)
{
	cout << "Nhap so luong diem: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap diem thu " << i << ": " << endl;
		Nhap(P[i]);
		if (ktTrung(P, i, P[i]) == 1)
		{
			cout << "Diem da ton tai. Vui long nhap lai: ";
			i--;
		}
	}
}

void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}
