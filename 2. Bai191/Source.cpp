#include <iostream>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC &);
void Nhap(SOPHUC[], int &);

int main()
{
	SOPHUC a[100];
	int n;
	Nhap(a, n);

	cout << "Da hoan thanh nhap mang mot chieu cac so phuc";

	return 0;
}

void Nhap(SOPHUC &x)
{
	cout << "Nhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}

void Nhap(SOPHUC a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}