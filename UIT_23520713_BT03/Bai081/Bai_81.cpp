#include<iostream>
#include<cmath>
#include<iomanip>
void Nhap(float[], int&);
float Dautien(float[], int);
using namespace std;
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << Dautien(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]:";
		cin >> a[i];
	}
}
float Dautien(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 2003)
		{
			float lc = a[i];
			return lc;
		}
		else
			return 0;
}