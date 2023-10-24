#include <iostream>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[], int& n);
void Xuat(SOPHUC);
void Xuat(SOPHUC[], int n);
void HoanVi(SOPHUC&, SOPHUC&);
void SapTang(SOPHUC[], int);

int main()
{
	int n;
	SOPHUC a[100];
	Nhap(a, n);
	SapTang(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:" << endl;
		Nhap(a[i]);
	}
}

void Xuat(SOPHUC x)
{
	cout << "Thuc: " << x.Thuc << endl << "Ao: " << x.Ao << endl;
}

void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:" << endl;
		Xuat(a[i]);
	}
}

void HoanVi(SOPHUC& x, SOPHUC& y)
{
	SOPHUC temp = x;
	x = y;
	y = temp;
}

void SapTang(SOPHUC a[],int n)
{
	for(int i=0;i<=n-2;i++)
		for(int j=i+1;j<=n-1;j++)
			if(a[i].Thuc > a[j].Thuc)
				HoanVi(a[i],a[j]);
}