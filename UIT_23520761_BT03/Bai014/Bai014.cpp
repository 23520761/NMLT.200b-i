#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool KtSoChinhPhuong(int);
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

bool KtSoChinhPhuong(int n)
{
	for (int i = 0; i * i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

void LietKe(int a[], int n)
{
	cout << "\nCac vi tri la so chinh phuong trong mang: ";
	for (int i = 0; i <= n - 1; i++)
		if (KtSoChinhPhuong(a[i]))
			cout << setw(8) << i;
}