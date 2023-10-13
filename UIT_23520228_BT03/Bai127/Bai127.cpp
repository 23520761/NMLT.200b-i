#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float [], int&);
int ktCSC(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << ktCSC(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
			cin >> a[i];
}

int ktCSC(float a[], int n)
{
	if (n <= 1)
		return 0;
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if ((a[i] - a[i + 1]) != (a[0] - a[1]))
			flag = 0;
	return flag;
}