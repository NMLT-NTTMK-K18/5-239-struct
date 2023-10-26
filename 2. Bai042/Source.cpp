#include <iostream>
#include <iomanip>
using namespace std;
struct Diem
{
	float x;
	float y;
	float z;
};
typedef struct Diem DIEM;
void Nhap(DIEM&);
void Xuat(DIEM);
int ktThuoc1(DIEM);

int main()
{
	DIEM P;
	cout << "Nhap toa do diem: " << endl;
	Nhap(P);
	cout << "Toa do doi xung qua mat phan OYZ la: ";
	Xuat(P);
	return 0;
}

void Nhap(Diem& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Xuat(DIEM P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << -P.x;
	cout << "\ny = " << P.y;
	cout << "\ny = " << P.z;
}

