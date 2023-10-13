#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void XayDung(int[], int, int[], int&);

int main()
{
	int a[500];
	int b[500];
	int n, k;
	Nhap(a, n);
	XayDung(a, n, b, k);
	for (int i = 0; i < k; i++)
		cout << setw(10) << b[i];
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Mang a la: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
		{
			b[k] = a[i];
			k++;
		}
}