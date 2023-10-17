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
float KhoangCach(DIEMKHONGGIAN, DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P,Q;
	Nhap(P);
	Nhap(Q);
	cout<<KhoangCach(P,Q);
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

float KhoangCach(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) +
				(P.y - Q.y) * (P.y - Q.y) +
				(P.z - Q.z) *(P.z - Q.z));
}