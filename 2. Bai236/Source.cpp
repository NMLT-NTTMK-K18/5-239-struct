#include <iostream>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC &);
void Nhap(SOPHUC[][100], int &, int &);
void Xuat(SOPHUC);

SOPHUC ThucAoDuongDau(SOPHUC[][100], int, int);

int main()
{
	SOPHUC a[100][100];
	int m, n;
	cout << "Nhap ma tran cac so phuc:" << endl;
	Nhap(a, m, n);

	SOPHUC kq = ThucAoDuongDau(a, m, n);

	if (kq.Thuc == 0 && kq.Ao == 0)
		cout << "Khong co so phuc co phan thuc & phan ao duong" << endl;
	else
	{
		cout << "\nSo phuc co phan thuc & phan ao duong dau tien la: ";
		Xuat(kq);
	}

	return 0;
}

void Nhap(SOPHUC &x)
{
	cout << "Nhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
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
			cout << "\nNhap so phuc thu a[" << i << "][" << j << "]: ";
			Nhap(a[i][j]);
		}
}

void Xuat(SOPHUC x)
{
	cout << "\nThuc: " << x.Thuc;
	cout << "\nAo: " << x.Ao;
}

SOPHUC ThucAoDuongDau(SOPHUC a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j].Thuc > 0 && a[i][j].Ao > 0)
				return a[i][j];
	return {0, 0};
}