#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM &);
void Nhap(DIEM[], int &);
int ktTrung(DIEM, DIEM);
int TanSuat(DIEM[], int, DIEM);
int DemDiem(DIEM[], int);

int main()
{
	DIEM a[100];
	int n;
	Nhap(a, n);
	cout << DemDiem(a, n);
}

void Nhap(DIEM &x)
{
	cout << "\nNhap Hoanh Do:";
	cin >> x.x;
	cout << "Nhap Tung Do:";
	cin >> x.y;
}

void Nhap(DIEM a[], int &n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:";
		Nhap(a[i]);
	}
}

int ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}
int TanSuat(DIEM a[], int n, DIEM P)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktTrung(a[i], P) == 1)
			dem++;
	return dem;
}
int DemDiem(DIEM a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (TanSuat(a, n, a[i]) == 1)
			dem++;
	return dem;
