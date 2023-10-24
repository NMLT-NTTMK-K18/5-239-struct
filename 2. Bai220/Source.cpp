#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef Diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[][100], int&, int&);
int ktThuoc3(DIEM);
int DemThuoc3(DIEM[][100], int, int);

int main()
{
	int m, n;
	DIEM a[100][100];
	Nhap(a, m, n);
	cout << DemThuoc3(a, m, n);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DIEM a[][100], int& m, int& n)
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

int ktThuoc3(DIEM P)
{
	if (P.x < 0 && P.y < 0)
		return 1;
	return 0;
}

int DemThuoc3(DIEM a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc3(a[i][j]))
				dem++;
	return dem;
}