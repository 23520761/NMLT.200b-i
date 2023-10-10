#include <iostream>
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
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(int a[], int n)
{
	cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

void LietKe(int a[], int n)
{
	cout << "\nCac so chan trong mang: ";
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0)
			cout << setw(5) << a[i];
	cout << "\nCac so le trong mang";
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 != 0)
			cout << setw(5) << a[i];
}