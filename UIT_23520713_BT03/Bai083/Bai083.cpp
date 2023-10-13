#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int Kiemtra(int[], int&, int&, int&);
void Nhap(int&, int&, int&);
int main()
{
	int a[100];
	int x, y, n;
	Nhap(x, y, n);
	cout << Kiemtra(a, n, x, y);
	return 0;
}
void Nhap(int& xx, int& yy, int& nn)
{
	cout << "nhap x ";
	cin >> xx;
	cout << "nhap y ";
	cin >> yy;
	cout << "nhap n ";
	cin >> nn;
}
int Kiemtra(int a[], int& n, int& x, int& y)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap a[" << i << "]:";
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] < y && a[i] > x)
			return a[i];
		else
			return x;
	}
}