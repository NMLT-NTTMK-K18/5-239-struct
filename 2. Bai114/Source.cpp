#include <iostream>
using namespace std;

struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc DONTHUC;

void Nhap(DONTHUC &);
void Xuat(DONTHUC);
DONTHUC Daoham(DONTHUC);

int main()
{
	DONTHUC x;
	Nhap(x);
	Xuat(Daoham(x));
	return 0;
}

void Nhap(DONTHUC &x)
{
	cout<<"\nNhap he so:";
	cin>>x.a;
	cout<<"\nNhap so mu:";
	cin>>x.n;
}

DONTHUC Daoham(DONTHUC x)
{
	DONTHUC temp;
	temp.a = x.a * x.n;
	temp.n = x.n - 1;
	return temp;
}

void Xuat(DONTHUC x)
{
	cout<<"\n"<<x.a<<"^"<<x.n;
}