#include <iostream>
using namespace std;

struct SoPhuc
{
	float thuc;
	float ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC &);
void Nhap(SOPHUC[][100], int &, int &);

int main()
{
	SOPHUC a[100][100];
	int m, n;
	Nhap(a, m, n);
	return 0;
}

void Nhap(SOPHUC &x)
{
	cout << "\nNhap thuc:";
	cin >> x.thuc;
	cout << "Nhap ao:";
	cin >> x.ao;
}

void Nhap(SOPHUC a[][100], int &m, int &n)
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
