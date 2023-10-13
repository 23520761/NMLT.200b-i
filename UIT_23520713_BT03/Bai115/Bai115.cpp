#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int[], int);
void Xuat(int[], int);

int main()
{
	int a[150];
	cout << "nhap n ";
	int n;
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
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

void Xuat(int a[], int n)
{
	int x = a[0];
	int y = a[1];
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (abs(x) - abs(y) < abs(a[i]) - abs(a[j]))
			{
				x = a[i];
				y = a[j];
			}
	cout << x << " " << y;
}