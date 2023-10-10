#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
void LietKe(int[], int);
int TongGiaTri(int[], int);

int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	Xuat(a, n);
	LietKe(a, n);
	cout << "\nTong cac phan tu co chu so le dau tien mang so nguyen: " << TongGiaTri(a, n);
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

int ChuSoDau(int n)
{
	int t = abs(n);
	while (t >= 10)
		t /= 10;
	return t;
}

void LietKe(int a[], int n)
{
	cout << "\nCac phan tu co chu cai dau la so le: ";
	for (int i = 0; i < n; i++)
		if (ChuSoDau(a[i]) % 2 != 0)
			cout << setw(6) << a[i];
}

int TongGiaTri(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (ChuSoDau(a[i]) & 1)
			s += a[i];
	return s;
}