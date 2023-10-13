#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
int Kiemtra(int[], int);
int main()
{
	int a[200];
	int n;
	Nhap(a, n);
	cout << Kiemtra(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "nhap a[" << i << "]:";
		cin >> a[i];
	}
}

int Kiemtra(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			return a[i];
		else
			return -1;
	}
}
