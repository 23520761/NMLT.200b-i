#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int[], int);
bool Kiemtra( int);
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

bool Kiemtra(int n)
{
	int dem = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int Xuat(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (Kiemtra(a[i]) == true)
			flag = 1;
	return flag;
}