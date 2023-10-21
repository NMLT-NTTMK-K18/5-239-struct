#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct LuanVan
{
	string MaSo;
	string TenLuanVan;
	string HoTenSV;
	string HoTenGV;
	int Nam;
};
typedef struct LuanVan LUANVAN;

void Nhap(LUANVAN&);
void Xuat(LUANVAN);

int main()
{
	LUANVAN lv;

	Nhap(lv);
	Xuat(lv);
	return 0;
}

void Nhap(LUANVAN& x)
{
	cout << "Nhap ma luan van: ";
	getline(cin, x.MaSo);
	cout << "Nhap ten luan van: ";
	getline(cin, x.TenLuanVan);
	cout << "Nhap ten sinh vien: ";
	getline(cin, x.HoTenSV);
	cout << "Nhap ten giao vien: ";
	getline(cin, x.HoTenGV);
	cout << "Nhap nam thuc hien: ";
	cin >> x.Nam;
}

void Xuat(LUANVAN x)
{
	cout << "\nMa luan van: " << x.MaSo;
	cout << "\nTen luan van: " << x.TenLuanVan;
	cout << "\nTen sinh vien: " << x.HoTenSV;
	cout << "\nTen giao vien: " << x.HoTenGV;
	cout << "\nNam thuc hien: " << x.Nam;
}