#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int[], int);
bool Kiemtra(int);
int sht(int[], int);
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
		cout << "nhap a[" << i << "]:";
		cin >> a[i];
	}
}

bool Kiemtra(int a)
{
	int s = 0;
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0)
			s = s + i;
	}
	if (s == a)
		return true;
	return false;
}

int sht(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (Kiemtra(a[i]) == true)
			return a[i];
	}
	return -1;
}

int Xuat(int a[], int n)
{
	int lc = sht(a, n);
	for (int i = 0; i < n; i++)
	{
		if (Kiemtra(a[i]) && a[i] < lc)
			lc = a[i];
	}
	return lc;
}