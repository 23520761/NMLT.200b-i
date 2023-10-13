#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int[], int&);
void vitri(int[], int);
void Vitriletang(int[], int);

int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	Vitriletang(a, n);
	HoanVi(a, n);
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

void Vitriletang(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (i % 2 != 0 && j % 2 != 0 && a[i] > a[j])
				swap(a[i], a[j]);
}
void vitri(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
