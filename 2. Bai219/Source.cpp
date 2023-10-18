#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef Diem DIEM;

void Nhap(DIEM &);
void Nhap(DIEM[], int &, int &);
void Xuat(DIEM);
void Xuat(DIEM[], int, int);

int main()
{

	return 0;
}

void Nhap(DIEM &X)
{
	cout << "\nNhapHoanhDo:";
	cin >> X.x;
	cout << "NhapTungDo:";
	cin >> X.y;
}

void Nhap(DIEM a[][100], int &m, int &n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)

		{
			cout << "Nhap a[" << i << "][" << j << "]:\n";
			Nhap(a[i][j]);
		}
}

void Xuat(DIEM X)
{
	cout << X.x << " " << X.y;
}

void Xuat(DIEM a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Diem A[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
			cout << endl;
		}
}