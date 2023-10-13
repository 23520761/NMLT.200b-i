#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int[], int);
int Kiemtra(int a, int b);
int Xuat(int a[], int n);

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
int Kiemtra(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		 if (a > b)
			 a = a - b;
		 else
			 b = b - a;
	 }
	 return (a + b);
}

int Xuat(int a[], int n)
 {
	 int lc = a[0];
	 for (int i = 0; i < n; i++)
		 lc = Kiemtra(lc, a[i]);
	 return lc;
 }