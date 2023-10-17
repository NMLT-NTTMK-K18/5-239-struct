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
void Xuat(DIEMKHONGGIAN);
DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN);

int main()
{
	diemkhonggian P;
	cout << "Nhap toa do diemkhonggian P: " << endl;
	Nhap(P);

	cout << "\nToa do diem doi xung cua P qua mat phang Oxz: " << endl;
	Xuat(DoiXungOxz(P));

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

DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = -P.y;
	temp.z = P.z;
	return temp;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
	cout << "\nz: " << P.z;
}
