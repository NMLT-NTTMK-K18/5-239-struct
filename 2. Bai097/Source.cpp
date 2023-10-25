#include <iostream>
#include <iomanip>
using namespace std;

struct Ngay
{
	int ng;
	int th;
	int nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);

int ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int ktHopLe(NGAY);

int main()
{
	NGAY D;
	cout << "Nhap ngay D: " << endl;
	Nhap(D);
	if (ktHopLe(D))
		cout << "Ngay hop le";
	else
		cout << "Ngay khong hop le";
	return 0;

}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay:";
	cin >> x.ng;
	cout << "Nhap thang:";
	cin >> x.th;
	cout << "Nhap nam:";
	cin >> x.nam;
}

int ktNhuan(NGAY x)
{
	if (x.nam % 4 == 0 && x.nam % 100 != 0)
		return 1;
	if (x.nam % 400 == 0)
		return 1;
	return 0;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int(ktNhuan(x));
	ngaythang[1] = 29;
	return ngaythang[x.th - 1];
}

int ktHopLe(NGAY x)
{
	if (x.nam < 1)
		return 0;
	if (x.th < 1)
		return 0;
	if (x.th > 12)
		return 0;
	if (x.ng < 1)
		return 0;
	if (x.ng > SoNgayToiDaTrongThang[x.th - 1])
		return 0;
	return 1;
}