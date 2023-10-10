#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int chuSoDau(int);
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
	cout << "Mang ban dau la: ";
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}

int chuSoDau(int n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt /= 10;
	return dt;
}

void LietKe(int a[], int n)
{
	cout << "\nChu so dau tien la so chan: ";
	for (int i = 0; i <= n - 1; i++)
		if (chuSoDau(a[i]) % 2 == 0)
			cout << setw(6) << a[i];
}