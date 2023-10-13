#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int[], int);
int Kiemtra(int[], int);
int Xuat(int[], int);

int main()
{
	int a[150];
	int n;
	cout << "nhap n ";
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

int Kiemtra(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			return i;
	return -1;
}

int Xuat(int a[], int n)
{
	int i = 0;
	int lc = Kiemtra(a, n);
	for (int i = 0; i < n; i++)
		if (a[lc] < a[i] && a[i] < 0)
			lc = i;
	return lc;
}
