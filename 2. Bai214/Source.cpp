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
void Nhap(NGAY[], int &);

int main()
{
	NGAY a[100];
	int n;
	Nhap(a, n);
	return 0;
}

void Nhap(NGAY &x)
{
	cout << "\nNhap Ngay:";
	cin >> x.ngay;
	cout << "Nhap Thang\n";
	cin >> x.thang;
	cout << "Nhap Nam:";
	cin >> x.nam;
}

void Nhap(NGAY a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap Ngay A[" << i << "]:\n";
		Nhap(a[i]);
	}
}