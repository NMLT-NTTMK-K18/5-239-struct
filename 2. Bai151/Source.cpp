#include <iostream>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG &);
int ktTrung(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG ln1;
	cout << "Nhap duong thang thu nhat:\n";
	Nhap(ln1);

	DUONGTHANG ln2;
	cout << "Nhap duong thang thu hai:\n";
	Nhap(ln2);

	if (ktTrung(ln1, ln2))
		cout << "Hai duong thang trung nhau";
	else
		cout << "Hai duong thang khong trung nhau";

	return 0;
}

void Nhap(DUONGTHANG &l)
{
	cout << "Nhap a: ";
	cin >> l.a;
	cout << "Nhap b: ";
	cin >> l.b;
	cout << "Nhap c: ";
	cin >> l.c;
}

int ktTrung(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx == 0)
		return 1;
	return 0;
}