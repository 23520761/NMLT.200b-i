#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int[], int);
string Xuat(int[], int);

int main()
{
	int a[150];
	cout << "nhap n ";
	int n;
	cin >> n;
	Nhap(a, n);
	cout<<Xuat(a, n);
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

string Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] == 0 && a[i + 1] == 0)
				return "co ton tai";
	return "khong ton tai";
}