#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float[], int&);
int ktBang(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << ktBang(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int ktBang(float a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n ; i++)
		if (a[i] != a[0])
			flag = 0;
	return flag;
}