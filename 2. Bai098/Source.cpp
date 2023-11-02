#include <iostream>
#include <iomanip>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);
int SoSanh(NGAY, NGAY);

int main()
{
	NGAY D1;
	cout << "Nhap ngay D1: " << endl;
	Nhap(D1);
	Xuat(D1);

	NGAY D2;
	cout << "Nhap ngay D2: " << endl;
	Nhap(D2);
	Xuat(D2);

	int kq = SoSanh(D1, D2);
	if (kq == 1)
		cout << "\nD1 lon hon D2";
	else if (kq == -1)
		cout << "\nD1 nho hon D2";
	else
		cout << "\nD1 bang D2";
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
}

void Xuat(NGAY x)
{
	cout << "Ngay: " << x.Ngay << endl;
	cout << "Thang: " << x.Thang << endl;
	cout << "Nam: " << x.Nam << endl;
}

int SoSanh(NGAY x, NGAY y)
{
	if (x.Nam > y.Nam)
		return 1;
	if (x.Nam < y.Nam)
		return -1;
	if (x.Thang > y.Thang)
		return 1;
	if (x.Thang < y.Thang)
		return -1;
	if (x.Ngay > y.Ngay)
		return 1;
	if (x.Ngay < y.Ngay)
		return -1;
	return 0;
}