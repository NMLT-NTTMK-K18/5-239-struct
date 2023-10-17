#include <iostream>
#include <iomanip>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC &);
void Xuat(SOPHUC);

SOPHUC Tong(SOPHUC, SOPHUC);

int main()
{
	SOPHUC M;
	cout << "Nhap so phuc M: " << endl;
	Nhap(M);

	SOPHUC N;
	cout << "Nhap so phuc N: " << endl;
	Nhap(N);

	cout << " So phuc M + so phuc N:" << endl;
	Xuat(Tong(M, N));
	return 0;
}

void Nhap(SOPHUC &x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\n Thuc = " << x.Thuc;
	cout << "\n Ao = " << x.Ao;
}

SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc + y.Thuc;
	temp.Ao = x.Ao + y.Ao;
	return temp;
}