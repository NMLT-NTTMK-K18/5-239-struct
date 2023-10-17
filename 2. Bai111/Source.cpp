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

int main()
{
	DONTHUC f;
	Nhap(f);

	cout << "Don thuc vua nhap: ";
	Xuat(f);

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