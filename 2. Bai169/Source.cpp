#include <iostream>
using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

DATHUC operator+(DATHUC, DATHUC);
DATHUC operator-(DATHUC, DATHUC);
int LonNhat(int, int);
void GiamBac(DATHUC &);

int main()
{

	return 0;
}

void operator-(DATHUC &f)
{
}
int LonNhat(int a, int b)
{
	if (a > b)
		return a;
	return b;
}

void GiamBac(DATHUC &f)
{
	while (f.a[f.n] == 0)
		f.n--;
}

DATHUC operator+(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = LonNhat(f.n, g.n);
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	for (int i = f.n; i >= 0; i--)
		temp.a[i] += f.a[i];
	for (int i = g.n; i >= 0; i--)
		temp.a[i] += g.a[i];
	GiamBac(temp);
	return temp;
}

DATHUC operator-(DATHUC f, DATHUC g)
{
	for (int i = g.n; i >= 0; i--)
		g.a[i] = -g.a[i];
	return (f + g);
}