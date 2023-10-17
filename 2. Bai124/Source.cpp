#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct DuongTron
{
	DIEM P;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM &);
void Xuat(DIEM);
void Nhap(DUONGTRON &);
float KhoangCach(DUONGTRON, DIEM);
int ktThuoc(DUONGTRON, DIEM);

int main()
{
	DIEM P;
	Nhap(P);
	DUONGTRON P1;
	Nhap(P1);
	if (ktThuoc(P1, P))
		cout << "\nThuoc";
	else
		cout << "\nKhong Thuoc";
	return 0;
}

void Nhap(DIEM &P)
{
	cout << "\nNhap Hoanh Do:";
	cin >> P.x;
	cout << "Nhap Tung Do:";
	cin >> P.y;
}

void Nhap(DUONGTRON &P)
{
	cout << "\nNhap Tam:";
	Nhap(P.P);
	cout << "\nNhap Ban Kinh:";
	cin >> P.R;
}

float KhoangCach(DUONGTRON P, DIEM M)
{
	return sqrt((P.P.x - M.x) * (P.P.x - M.x) +
				(P.P.y - M.y) * (P.P.y - M.y));
}

int ktThuoc(DUONGTRON P, DIEM M)
{
	if (KhoangCach(P, M) <= P.R)
		return 1;
	return 0;
}