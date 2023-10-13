#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float a[], int&);
void XayDung(float [], int&,float [], int&);

int main()
{
	float a[500],b[500];
	int n, k;
	Nhap(a, n);
	XayDung(a, n, b, k);
	for (int i = 0; i < k; i++)
		cout << setw(10) << b[i];
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
void XayDung(float a[], int& n, float b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			b[k++] = a[i];
}