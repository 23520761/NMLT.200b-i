#include<iostream>
#include<cmath>

using namespace std;
void Nhap(float[], int);
float Xuat(float[], int);
float kiemtra(float[], int);

int main()
{
	float a[150];
	cout << "nhap n ";
	int n;
	cin >> n;
	Nhap(a, n);
	cout << Xuat(a, n);
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

float kiemtra(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			return a[i];
	}
	return 0;
}

float Xuat(float a[], int n)
{
	float lc = kiemtra(a, n);
	for (int i = 0; i < n; i++)
	{
		if (lc > a[i])
			lc = a[i];
	}
	return i;
}
