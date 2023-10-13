#include<iostream>
#include<cmath>

using namespace std;
void Nhap(float[], int);
float Kiemtra(float[], int);
int main()
{
	float a[150];
	cout << "nhap n ";
	int n;
	cin >> n;
	Nhap(a, n);
	cout << Kiemtra(a, n);
	return 0;
}

void Nhap(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap a[" << i << "]:";
		cin >> a[i];
	}
}

float Kiemtra(float a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] >0)
			return a[i];
	}
	return 0;
}
