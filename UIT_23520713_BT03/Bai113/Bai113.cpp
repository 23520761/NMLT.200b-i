#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int[], int);
int Kiemtra(int a[], int n, int x);
int Xuat(int a[], int n);

int main()
{
	int a[150];
	cout << "nhap n ";
	int n;
	cin >> n;
	Nhap(a, n);
	cout << Xuat(a, n);
	return 0;
}

void Nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap a[" << i << "]";
		cin >> a[i];
	}
}

int Kiemtra(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i] == x)
			dem++;
	}
	return dem;
}

int Xuat(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i <= n - 1; i++)
	{
		if (Kiemtra(a, n, a[i]) > Kiemtra(a, n, lc))
			lc = a[i];
	}
	return lc;
}