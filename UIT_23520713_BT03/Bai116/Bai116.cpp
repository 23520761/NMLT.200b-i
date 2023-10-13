#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int[], int);
void Kiemtra(int [], int , int , int );
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

void Kiemtra(int a[], int n,int x,int y)
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

void LietKe(int a[], int n)
{
		int x, y;
		Kiemtra(a, n, x, y);
		for (int i = 0; i <= n - 1; i++)
			for (int j = 0; j <= n - 1; j++)
				if (i != j && abs(a[i] - a[j]) == abs(x - y))
					cout <<"("<<a[i]<<" "<<a[j]<<")";
}