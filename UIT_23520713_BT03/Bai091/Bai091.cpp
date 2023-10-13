#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int[], int);
bool Kiemtra(int);
int sdxdt(int[], int);

int main()
{
	int a[150];
	cout << "nhap n ";
	int n;
	cin >> n;
	Nhap(a, n);
	cout << sdxdt(a, n);
	return 0;
}

void Nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap a[" << i << "]:";
		cin >> a[i];
	}
}

bool Kiemtra(int n)
{
	int s = 0;
	int i = n ;
	int dv = 0;
	while (i != 0)
	{
		dv = dv * 10 + i % 10;
		i = i / 10;
	}
	if (dv == n)
		return true;
	return false;
}

int sdxdt(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (Kiemtra(a[i]))
			return a[i];
	}
	return 10;
}
