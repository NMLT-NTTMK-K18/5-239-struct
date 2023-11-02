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

int main()
{
	DATHUC P;
	Nhap(P);
	Xuat(P);

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