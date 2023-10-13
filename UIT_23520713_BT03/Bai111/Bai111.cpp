#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int[], int);
bool Kiemtra(int);
int sole(int[], int);
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

bool Kiemtra(int n)
{
	if (n % 2 != 0)
		return true;
	return false;
}

int sole(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (Kiemtra(a[i]) == true)
			return a[i];
	return -1;
}

int Xuat(int a[], int n)
{
	int lc = sole(a,n);
	for (int i = 0; i < n; i++)
		if (lc > a[i] && Kiemtra(a[i]) == true)
			lc = a[i];
	return lc - 1;
}