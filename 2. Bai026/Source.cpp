#include <iostream>
#include <iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM &);
int ktTrung(DIEM, DIEM);

int main()
{
	DIEM P;
	cout << "Nhap toa do diem P: " << endl;
	Nhap(P);

	DIEM Q;
	cout << "Nhap toa do diem Q: " << endl;
	Nhap(Q);

	if (ktTrung(P, Q))
		cout << "P trung voi Q" << endl;
	else
		cout << "P khong trung voi Q" << endl;

	return 0;
}

void Nhap(DIEM &P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

int ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}