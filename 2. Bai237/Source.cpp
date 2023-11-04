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

SOPHUC ThucAoAmCuoi(SOPHUC[][100], int, int);

int main()
{
	SOPHUC a[100][100];
	int m, n;
	cout << "Nhap ma tran cac so phuc:" << endl;
	Nhap(a, m, n);

	SOPHUC kq = ThucAoAmCuoi(a, m, n);

	if (kq.Thuc == 0 && kq.Ao == 0)
		cout << "Khong co so phuc co phan thuc & phan ao am" << endl;
	else
	{
		cout << "\nSo phuc co phan thuc & phan ao am cuoi cung la: ";
		Xuat(kq);
	}

	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap thuc: ";
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
			cout << "\nNhap so phuc thu a[" << i << "][" << j << "]: ";
			Nhap(a[i][j]);
		}
}

void Xuat(SOPHUC x)
{
	cout << "\nThuc: " << x.Thuc;
	cout << "\nAo: " << x.Ao;
}

SOPHUC ThucAoAmCuoi(SOPHUC a[][100], int m, int n)
{
	for (int i = m-1; i >=0; i--)
		for (int j = n-1; j >=0; j--)
			if (a[i][j].Thuc < 0 && a[i][j].Ao < 0)
				return a[i][j];
	return { 0, 0 };
}