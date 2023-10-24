#include <iostream>
using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);
DONTHUC DaoHam(DONTHUC);
DONTHUC DaoHamK(DONTHUC, int);

int main()
{
	DONTHUC f;
	int k;
	Nhap(f);
	cout << "Nhap cap dao ham: ";
	cin >> k;
	Xuat(DaoHamK(f, k));
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
	cout << "He so: " << f.a << endl;
	cout << "So mu: " << f.n;
}

DONTHUC DaoHam(DONTHUC f)
{
	DONTHUC temp;
	temp.a = f.a * f.n;
	temp.n = f.n - 1;
	return temp;
}

DONTHUC DaoHamK(DONTHUC f, int k)
{
	DONTHUC temp = f;
	for (int i = 1; i <= k; i++)
		temp = DaoHam(temp);
	return temp;
}