#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&, int&, int&);
void Xuat(float[], int);
void LietKe(float[], int, int, int);

int main()
{
	int n;
	float a[500];
	int x, y;
	Nhap(a, n, x, y);
	Xuat(a, n);
	
	LietKe(a, n, x, y);
	return 0;
}

void Nhap(float a[], int& n, int& x, int&y)
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

void Xuat(float a[], int n)
{
	cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

void LietKe(float a[], int n, int x, int y)
{
	cout << "\nCac so thuoc trong doan[" << x << "," << y << "] la: ";
	for (int i = 0; i <= n - 1; i++)
		if (a[i] >= x && a[i] <= y)
			cout << setw(8) << a[i];
}