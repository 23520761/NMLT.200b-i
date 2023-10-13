#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
void Nhap(int[], int&);
int Kiemtra(int[], int);

int main()
{
	int a[100];
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
	for (int i = 1; i <= n - 2; i++)
		if (a[i] == a[i - 1] * a[i + 1])
			return i;
	return -1;
}