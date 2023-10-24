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
int main()
{
	NGAY d;
	Nhap(d);
	cout << "\nNgay vua nhap:";
	Xuat(d);
	return 1;
}
void Nhap(NGAY & x)
{
	cout << "Nhap ngay : ";
	cin >> x.Ngay;
	cout << "Nhap thang : ";
	cin >> x.Thang;
	cout << "Nhap nam : ";
	cin >> x.Nam;
}
void Xuat(NGAY x)
{
	cout << setw(6);
	cout << "\n Ngay = " << x.Ngay;
	cout << "\n Thang = " << x.Thang;
	cout << "\n Nam = " << x.Nam;
}