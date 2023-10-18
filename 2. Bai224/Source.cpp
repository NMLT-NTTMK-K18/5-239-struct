#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;
struct DuongTron
{
	DIEM I;
	float r;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM &);
void Nhap(DIEM[][100], int &, int &);
void Nhap(DUONGTRON &);
float KhoangCach(DIEM, DIEM);
int ktThuoc(DUONGTRON, DIEM);
int DemDiem(DIEM[][100], int, int, DUONGTRON);

int main()
{
	DIEM a[100][100];
	int m, n;
	Nhap(a, m, n);
	DUONGTRON P;
	Nhap(P);
	cout << DemDiem(a, m, n, P);
	return 0;
}

void Nhap(DIEM &I)
{
	cout << "\nNhapHoanhDo:";
	cin >> I.x;
	cout << "NhapTungDo";
	cin >> I.y;
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

void Nhap(DUONGTRON &x)
{
	cout << "\nNhap Ban Kinh:";
	cin >> x.r;
	cout << "NHap Tam:";
	Nhap(x.I);
}

float KhoangCach(DIEM X, DIEM Y)
{
	return sqrt((X.x - Y.x) * (X.x - Y.x) + (X.y - Y.y) * (X.y - X.y));
}

int ktThuoc(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I, P);
	if (kc <= c.r)
		return 1;
	return 0;
}

int DemDiem(DIEM a[][100], int m, int n, DUONGTRON c)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc(c, a[i][j]))
				dem++;
	return dem;
}
