#include <iostream>
using namespace std;
struct DaThuc
{
	float a[100];
	int n;
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC &);
void Xuat(DATHUC);
DATHUC operator+(DATHUC, DATHUC);

int main()
{
	DATHUC P;
	Nhap(P);

	DATHUC Q;
	Nhap(Q);

	DATHUC R = P + Q;
	Xuat(R);

	return 0;
}

void Nhap(DaThuc &P)
{
	cout << "Nhap bac da thuc: ";
	cin >> P.n;
	for (int i = 0; i <= P.n; i++)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> P.a[i];
	}
}

void Xuat(DATHUC P)
{
	cout << "\nDa thuc: ";
	for (int i = 0; i <= P.n; i++)
		cout << P.a[i] << "x^" << i << " + ";
	cout << "\b\b\b  ";
}

DATHUC operator+(DATHUC P, DATHUC Q)
{
	DATHUC temp;
	temp.n = (P.n > Q.n) ? P.n : Q.n;
	for (int i = 0; i <= temp.n; i++)
		temp.a[i] = P.a[i] + Q.a[i];
	return temp;
}