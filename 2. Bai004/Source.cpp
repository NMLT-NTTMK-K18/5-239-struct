#include <iostream>
using namespace std;

struct SoPhuc
{
	float thuc;
	float ao;
};

typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC &);
void Xuat(SOPHUC);

int main()
{
	SOPHUC x;
	Nhap(x);
	Xuat(x);
	return 0;
}

void Nhap(SOPHUC &x)
{
	cout << "\nNhap Phan Thuc";
	cin >> x.thuc;
	cout << "Nhap Phan Ao:";
	cin >> x.ao;
}

void Xuat(SOPHUC x)
{
	cout << "So phuc x:" << x.thuc << "+" << x.ao << "i";
}