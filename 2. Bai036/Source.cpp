#include <iostream>
#include <iomanip>
using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

void Nhap(diemkhonggian &);

float KhoangCachY(DIEMKHONGGIAN, DIEMKHONGGIAN);

int main()
{
	diemkhonggian P;
	cout << "Nhap toa do diemkhonggian P: " << endl;
	Nhap(P);

	diemkhonggian Q;
	cout << "Nhap toa do diemkhonggian Q: " << endl;
	Nhap(Q);

	cout << "\nKhoang cach y giua P va Q: " << KhoangCachY(P, Q);

	return 0;
}

void Nhap(diemkhonggian &P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

float KhoangCachY(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.y - P.y);
}