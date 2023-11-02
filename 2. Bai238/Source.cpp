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
int ktDong(SOPHUC[][100], int, int, int);
int DemDong(SOPHUC[][100], int, int);

int main()
{
	SOPHUC a[100][100];
	int m, n;
	cout << "Nhap ma tran cac so phuc:" << endl;
	Nhap(a, m, n);

	cout << "So dong chua phan thuc va ao trai dau: " << DemDong(a, m, n);
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
	cout << "\nNhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\nNhap so phuc thu a[" << i << "][" << j << "]: ";
			Nhap(a[i][j]);
		}
}

int ktDong(SOPHUC a[][100], int m, int n, int d)
{
	int flag = 1;
	for (int j = 0; j < n; j++)
		if (a[d][j].Thuc * a[d][j].Ao >= 0)
			flag = 0;
	return flag;
}

int DemDong(SOPHUC a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		if (ktDong(a, m, n, i))
			dem++;
	return dem;
}