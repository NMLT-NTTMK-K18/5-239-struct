#include <iostream>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[][100], int&, int&);
void Xuat(SOPHUC);
void Xuat(SOPHUC[][100], int, int);

int main()
{
	int m, n;
	SOPHUC a[100][100];
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}

void Nhap(SOPHUC a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]:" << endl;
			Nhap(a[i][j]);
		}
}

void Xuat(SOPHUC x)
{
	cout << "Thuc: " << x.Thuc << endl;
	cout << "Ao: " << x.Ao;
}

void Xuat(SOPHUC a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]:" << endl;
			Xuat(a[i][j]);
			cout << endl;
		}
}