#include <iostream>
using namespace std;

struct SoPhuc
{
	float thuc;
	float ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC &);

int main()
{
	SOPHUC x;
	Nhap(x);
	return 0;
}

void Nhap(SOPHUC &x)
{
	cout << "\nNhap Thuc:";
	cin >> x.thuc;
	cout << "Nhap Ao:";
	cin >> x.ao;
}