#include <iostream>
#include <iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct TamGiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct TamGiac TAMGIAC;

void Nhap(DIEM &);
void Xuat(DIEM);

void Nhap(TAMGIAC &);
DIEM TrongTam(TAMGIAC);

int main()
{
	TAMGIAC M;
	Nhap(M);

	DIEM G = TrongTam(M);
	cout << setprecision(3) << fixed << "\nTrong tam tam giac vua nhap:";
	Xuat(G);
	return 0;
}

void Nhap(DIEM &P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

void Nhap(TAMGIAC &t)
{
	cout << "Nhap diem A:\n";
	Nhap(t.A);
	cout << "Nhap diem B:\n";
	Nhap(t.B);
	cout << "Nhap diem C:\n";
	Nhap(t.C);
}

DIEM TrongTam(TAMGIAC t)
{
	DIEM temp;
	temp.x = (t.A.x + t.B.x + t.C.x) / 3;
	temp.y = (t.A.y + t.B.y + t.C.y) / 3;
	return temp;
}