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
DONTHUC Tich(DONTHUC, DONTHUC);

int main()
{
	DONTHUC f,g;
	cout << "\nNhap don thuc f:";
	Nhap(f);
	cout << "\nNhap don thuc g:";
	Nhap(g);
	cout << "\nTich hai don thuc f,g la: ";
    Xuat(Tich(f,g));


	return 0;
}

void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
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

DONTHUC Tich(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a * g.a;
	temp.n = f.n + g.n;
	return temp;
}