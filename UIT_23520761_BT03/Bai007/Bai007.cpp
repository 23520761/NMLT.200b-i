#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);


int main()
{
	int n;
	float a[500];
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(float a[], int n)
{
	cout << "Mang ban dau la: ";
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}

void LietKe(float a[], int n)
{
	cout << "\nCac so co gia tri duong la: ";
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
			cout << setw(8) << setprecision(5) << a[i];
}