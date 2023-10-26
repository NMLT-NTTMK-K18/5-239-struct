#include <iostream>
using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void GiamBac(DATHUC);
void TangBac(DATHUC);

int main()
{

	return 0;
}

void GiamBac(DATHUC &f)
{
	while (f.a[f.n] == 0)
		f.n--;
}

void TangBac(DATHUC f)
{
	while (f.a[f.n] == 0)
		f.n++;
}
