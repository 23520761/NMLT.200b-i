#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int[], int);
int ucln(int, int);
int bcnn(int, int);
int TimBCNN(int[], int);
int main()
{
	int a[150];
	cout << "nhap n ";
	int n;
	cin >> n;
	Nhap(a, n);
	cout << TimBCNN(a, n);
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

int ucln(int a, int b)
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

int bcnn(int a, int b)
{
	return abs(a * b) / ucln(a, b);
}

int TimBCNN(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		lc = bcnn(lc, a[i]);
	return lc;
}