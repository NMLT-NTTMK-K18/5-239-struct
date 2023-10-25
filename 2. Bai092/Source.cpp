#include <iostream>
using namespace std;

struct ngay
{
	int ng;
	int th;
	int nm;
};
typedef struct ngay NGAY;
void Nhap(NGAY&);

int main()
{

	return 0;
}
void Nhap(NGAY& x)
{
	cout << "Nhap Ngay:";
	cin >> x.ng;
	cout << "Nhap Thang:";
	cin >> x.th;
	cout << "Nhap Nam";
	cin >> x.nm;
}