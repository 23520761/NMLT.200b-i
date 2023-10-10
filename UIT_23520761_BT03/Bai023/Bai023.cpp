#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);

int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	Xuat(a, n);
	LietKe(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(int a[], int n)
{
	cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}
void LietKe(int a[], int n)
{
	cout << "\nCac gia tri chan co it nhat 1 gia tri chan lan chan la: ";
	if (n <= 1)
		return;
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		cout << a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] % 2 == 0)
			if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
				cout << setw(6) << a[i];
	if (a[n - 2] % 2 == 0 && a[n - 1] % 2 == 0)
		cout << setw(6) <<  a[n - 1];
}