#include <iostream>
using namespace std;

struct Ngay
{
	int ngay;
	int thang;
	int nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY &);
int ktNhuan(NGAY);

int main()
{
	NGAY x;
	Nhap(x);
	if (ktNhuan(x))
		cout << "Nhuan";
	else
		cout << "Khong Nhuan";
	return 0;
}

void Nhap(NGAY &x)
{
	cout << "\nNhap Ngay:";
	cin >> x.ngay;
	cout << "Nhap Thang:";
	cin >> x.thang;
	cout << "Nhap Nam:";
	cin >> x.nam;
}

int ktNhuan(NGAY x)
{
	if (x.nam % 4 == 0 && x.nam % 100 != 0 || x.nam % 400 == 0)
		return 1;
	return 0;
}