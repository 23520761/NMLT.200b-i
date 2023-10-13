#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int[], int);
bool Kiemtra(int);
int scpdt(int[], int);

int main()
{
	int a[150];
	cout << "nhap n ";
	int n;
	cin >> n;
	Nhap(a, n);
	cout << scpdt(a, n);
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
	for (int i = 0; i*i<=n; i++)
	{
		if (i * i == n)
			return true;
	}
	return false;
}

int scpdt(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (Kiemtra(a[i]))
			return a[i];
	}
	return -1;
}
