#include <iostream>
#include <iomanip>
using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC &);
void Xuat(DONTHUC);

float TinhGiaTri(DONTHUC, float);

int main()
{
	DONTHUC f;
	Nhap(f);

	cout << "Nhap gia x0: ";
	float x0;
	cin >> x0;

	cout << "Gia tri don thuc vua nhap tai " << x0 << ": " << TinhGiaTri(f, x0);

	return 0;
}

void Nhap(DONTHUC &f)
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

float TinhGiaTri(DONTHUC f, float x)
{
	float T = 1;
	for (int i = 1; i <= f.n; i++)
		T = T * x;
	T = T * f.a;
	return T;
}