#include <iostream>
#include <iomanip>
using namespace std;

struct DaThuc
{
	float a[100];
	int n;
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
float VT(DATHUC, float);

int main()
{
	DATHUC f1;
	cout << "Nhap da thuc f1:" << endl;
	Nhap(f1);

	float x;
	cout << "Nhap so thuc x:" << endl;
	cin >> x;

	cout << "x= "<<x<<" co gia tri la : " << VT(f1,x);
	
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap bac da thuc: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> f.a[i];
	}
}

float VT(DATHUC f, float x)
{
	float s=0.0;
	for (int i = 1; i <= f.n; i++)
		f.a[i] = f.a[i] * pow(x, i);
	for (int i = 0; i <= f.n; i++)
		s += f.a[i];
	return s;
}