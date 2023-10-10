#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&, int&, int&);
void Xuat(int[], int);
void LietKe(int[], int, int, int);

int main()
{
	int n;
	int a[500];
	int x, y;
	Nhap(a, n, x, y);
	Xuat(a, n);

	LietKe(a, n, x, y);
	return 0;
}

void Nhap(int a[], int& n, int& x, int& y)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "nNhap mang : ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}

void Xuat(int a[], int n)
{
	cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

void LietKe(int a[], int n, int x, int y)
{
	cout << "\nCac so chan thuoc trong doan[" << x << "," << y << "] la: ";
	for (int i = 0; i <= n - 1; i++)
		if (a[i] >= x && a[i] <= y)
			if (a[i] % 2 == 0)
				cout << setw(4) << a[i];
}