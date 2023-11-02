#include <iostream>
#include <iomanip>
using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);
DONTHUC operator/(DONTHUC, DONTHUC);

int main()
{
	DONTHUC f;
	cout << "Nhap don thuc f : ";
	Nhap(f);
	Xuat(f);

	DONTHUC g;
	cout << "\nNhap don thuc g : ";
	Nhap(g);
	Xuat(g);

	cout << "\nThuong cua 2 don thuc: ";
	Xuat(operator/(f, g));
	return 0;
}

void Nhap(DONTHUC& f)
{
	cout << "\nNhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}

void Xuat(DONTHUC f)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\n a = " << f.a;
	cout << "\n n = " << f.n;
}

DONTHUC operator/(DONTHUC f, DONTHUC g)
{
	DONTHUC temp{};
	temp.a = f.a / g.a;
	temp.n = f.n - g.n;
	return temp;
}