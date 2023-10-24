#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Tinh
{
	int MaSo;
	string TenTinh;
	int DanSo;
	float DienTich;
};
typedef struct Tinh TINH;

void Nhap(TINH&);
void Xuat(TINH);

void Nhap(TINH[], int&);
void Xuat(TINH[], int);

void LietKe(TINH[], int);
void DienTichLonNhat(TINH[], int);
void HoanVi(TINH&, TINH&);
void SapXep(TINH[], int);

int main()
{
	TINH b[100];
	int n;
	Nhap(b, n);
	Xuat(b, n);
	LietKe(b, n);
	DienTichLonNhat(b, n);
	SapXep(b, n);
	Xuat(b, n);
	return 0;
}

void Nhap(TINH& x)
{
	cout << "Nhap ma tinh: ";
	cin >> x.MaSo;
	cout << "Nhap ten tinh: ";
	cin.ignore();
	getline(cin, x.TenTinh);
	cout << "Nhap dan so: ";
	cin >> x.DanSo;
	cout << "Nhap dien tich: ";
	cin >> x.DienTich;
}

void Xuat(TINH x)
{
	cout << "Ma tinh: " << x.MaSo << endl;
	cout << "Ten tinh: " << x.TenTinh << endl;
	cout << "Dan so: " << x.DanSo << endl;
	cout << "Dien tich: " << x.DienTich << endl;
}

void Nhap(TINH a[], int& n)
{
	cout << "\nNhap so luong tinh: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nTinh thu " << i + 1 << ":\n";
		Nhap(a[i]);
	}
}

void Xuat(TINH a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nTinh thu " << i + 1 << ":\n";
		Xuat(a[i]);
	}
}

void LietKe(TINH a[], int n)
{
	cout << endl << "Cac tinh co dan so lon hon 1.000.000:" << endl << endl;
	for (int i = 0; i < n; i++)
		if (a[i].DanSo > 1000000)
			Xuat(a[i]);
}

void DienTichLonNhat(TINH a[], int n)
{
	cout << endl << "Tinh co dien tich lon nhat:" << endl << endl;
	float max = a[0].DienTich;
	for (int i = 1; i < n; i++)
		if (a[i].DienTich > max)
			max = a[i].DienTich;
	for (int i = 0; i < n; i++)
		if (a[i].DienTich == max)
			Xuat(a[i]);
}

void HoanVi(TINH& a, TINH& b)
{
	TINH temp;
	temp = a;
	a = b;
	b = temp;
}

void SapXep(TINH a[], int n)
{
	cout << endl << "Cac tinh giam dan theo dien tich:" << endl;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DienTich < a[j].DienTich)
				HoanVi(a[i], a[j]);
}