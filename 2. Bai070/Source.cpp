#include <iostream>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);
SOPHUC LuyThua(SOPHUC, int);

int main()
{
	SOPHUC x;
	int n;
	Nhap(x);
	cout << "Nhap bac luy thua: ";
	cin >> n;
	Xuat(LuyThua(x, n));
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << "Thuc: " << x.Thuc << endl;
	cout << "Ao: " << x.Ao;
}

SOPHUC Tich(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc * y.Thuc - x.Ao * y.Ao;
	temp.Ao = x.Thuc * y.Ao + x.Ao * y.Thuc;
	return temp;
}

SOPHUC LuyThua(SOPHUC x, int n)
{
	SOPHUC temp = { 1, 0 };
	for (int i = 1; i <= n; i++)
		temp = Tich(temp, x);
	return temp;
}