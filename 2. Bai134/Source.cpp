#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
	float z;
};
typedef struct Diem DIEM;

struct HinhCau
{
	DIEM I;
	float R;
};
typedef struct HinhCau HINHCAU;

void Nhap(DIEM &);
void Nhap(HINHCAU &x);
float KhoangCach(DIEM, DIEM);
float TuongDoi(HINHCAU, HINHCAU);

int main()
{
	HINHCAU c1, c2;
	Nhap(c1);
	Nhap(c2);
	if (TuongDoi(c1, c2) == 0)
		cout << "Hai Hinh Cau Trung Nhau";
	if (TuongDoi(c1, c2) == 1)
		cout << "Hai Hinh Cau Roi Nhau";
	if (TuongDoi(c1, c2) == 2)
		cout << "Hai Hinh Cau tiep xuc ngoai";
	if (TuongDoi(c1, c2) == 3)
		cout << "Hai Hinh Cau Cat Nhau";
	if (TuongDoi(c1, c2) == 4)
		cout << "Hai Hinh Cau Tiep Xuc Trong";
	if (TuongDoi(c1, c2) == 5)
		cout << "Hai Hinh Cau Chua  Trong";
	return 0;
}

void Nhap(DIEM &x)
{
	cout << "\nNhap Hoanh Do:";
	cin >> x.x;
	cout << "Nhap Tung Do:";
	cin >> x.y;
	cout << "Nhap Cao Do:";
	cin >> x.z;
}

void Nhap(HINHCAU &x)
{
	cout << "Nhap Tam:\n";
	Nhap(x.I);
	cout << "Nhap Ban Kinh:";
	cin >> x.R;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) +
				(P.y - Q.y) * (P.y - Q.y) +
				(P.z - Q.z) * (P.z - Q.z));
}

float TuongDoi(HINHCAU c1, HINHCAU c2)
{
	float kc = KhoangCach(c1.I, c2.I);
	if (kc == 0 && c1.R == c2.R)
		return 0;
	if (kc > (c1.R + c2.R))
		return 1;
	if (kc == (c1.R + c2.R))
		return 2;
	if (kc < (c1.R + c2.R) && kc > abs(c1.R - c2.R))
		return 3;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}
