#include <iostream>
using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN &);
void Xuat(DIEMKHONGGIAN);
DIEMKHONGGIAN DoiXungGoc(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN A;
	Nhap(A);
	Xuat(DoiXungGoc(A));
	return 0;
}

void Nhap(DIEMKHONGGIAN &P)
{
	cout << "\nNhap Hoanh Do:";
	cin >> P.x;
	cout << "Nhap Tung Do:";
	cin >> P.y;
	cout << "Nhap Cao Do:";
	cin >> P.z;
}

DIEMKHONGGIAN DoiXungGoc(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = P.y;
	temp.z = -P.z;
	return temp;
}

void Xuat(DIEMKHONGGIAN A)
{
	cout << "\nHoanh Do La:";
	cout << A.x;
	cout << "\nTung Do La:";
	cout << A.y;
}