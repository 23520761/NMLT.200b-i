#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int[], int);
bool Kiemtra(int);
int dangdautien(int[], int);

int main()
{
	int a[150];
	cout << "nhap n ";
	int n;
	cin >> n;
	Nhap(a, n);
	cout << dangdautien(a, n);
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
	int t = n;
	int flag = 0;
	while (t >1)
	{
		int d= t % 2;
		t = t / 2;
		if (d == 0)
			flag = 1;
	}
	if (flag == 1)
		return true;
	return false;
}

int dangdautien(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (Kiemtra(a[i]))
			return a[i];
	}
	return 0;
}
