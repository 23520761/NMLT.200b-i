#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int[], int);
bool Kiemtra(int[],int);
int Xuat(int[], int);

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

bool Kiemtra(int a)
{
	int t = a;
	int flag = 0;
	while(t!=0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 1;
		else
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		return true;
	return false;
}

int stl(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (Kiemtra(a[i]) == true)
			return a[i];
	return 0;
}

int Xuat(int a[], int n)
{
	int lc =stl(a,n) ;
	for (int i = 0; i < n; i++)
	{
		if (lc < a[i] && Kiemtra(a[i]) == true)
			lc = a[i];
	}
	return lc;
}
