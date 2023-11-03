#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[], int&);
void Xuat(DIEM);
float KhoangCachGoc(DIEM);
DIEM GanGocNhat(DIEM[], int);


int main()
{
	DIEM a[100];
	int n;
	Nhap(a, n);

	cout << "Diem gan goc toa do nhat la:";
	Xuat(GanGocNhat(a, n));

	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DIEM P[], int& n)
{
	cout << "Nhap so luong diem: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap diem thu " << i << ": " << endl;
		Nhap(P[i]);
	}
}

void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}



float KhoangCachGoc(DIEM P)
{
	return sqrt(P.x * P.x + P.y * P.y);
}

DIEM GanGocNhat(DIEM a[], int n)
{
	DIEM lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (KhoangCachGoc(a[i]) <
			KhoangCachGoc(lc))
		lc = a[i];
	return lc;
}
