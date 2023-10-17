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

void Nhap(NGAY &);
void Xuat(NGAY);

int main()
{
	NGAY D;
	cout << "Nhap ngay D: " << endl;
	Nhap(D);

	cout << "Ngay D vua nhap: " << endl;
	Xuat(D);

	return 0;
}

void Nhap(NGAY &x)
{
	cout << "Nhap ngay:";
	cin >> x.Ngay;
	cout << "Nhap thang:";
	cin >> x.Thang;
	cout << "Nhap nam:";
	cin >> x.Nam;
}

void Xuat(NGAY x)
{
	cout << "Ngay: " << x.Ngay << endl;
	cout << "Thang: " << x.Thang << endl;
	cout << "Nam: " << x.Nam << endl;
}