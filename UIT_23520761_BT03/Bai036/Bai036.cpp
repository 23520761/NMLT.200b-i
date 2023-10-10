#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool KtChinhPhuong(int);
void LietKe(int[], int);
int TongChinhPhuong(int[], int);

int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	Xuat(a, n);
	LietKe(a, n);
	cout << "\nTong cac phan tu co gia tri la so chinh phuong trong mang so nguyen: " << TongChinhPhuong(a, n);
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

bool KtChinhPhuong(int n)
{
	for (int i = 1; i * i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

void LietKe(int a[], int n)
{
	cout << "\nCac gia tri so chinh phuong: ";
	for (int i = 0; i < n; i++)
		if (KtChinhPhuong(abs(a[i])))
			cout << setw(6) << a[i];
}

int TongChinhPhuong(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (KtChinhPhuong(a[i]))
			s += a[i];
	return s;
}