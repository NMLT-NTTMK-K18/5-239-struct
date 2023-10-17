#include <iostream>
using namespace std;
struct SoPhuc
{
	float thuc;
	float ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SoPhuc &);
SOPHUC Thuong(SoPhuc, SoPhuc);
void Xuat(SoPhuc);

int main()
{
	SOPHUC x, y;
	Nhap(x);
	Nhap(y);
	Xuat(Thuong(x, y));
	return 0;
}

void Nhap(SoPhuc &x)
{
	cout << "\nNhap Thuc:";
	cin >> x.thuc;
	cout << "Nhap Ao:";
	cin >> x.ao;
}

SOPHUC Thuong(SoPhuc x, SoPhuc y)
{
	float mc = y.thuc * y.thuc + y.ao * y.ao;
	SOPHUC temp;
	temp.thuc = (x.thuc * y.thuc + x.ao * y.ao) / mc;
	temp.ao = (x.thuc * y.ao - x.ao * y.thuc) / mc;
	return temp;
}

void Xuat(SoPhuc x)
{
	cout << x.thuc << "/" << x.ao;
}