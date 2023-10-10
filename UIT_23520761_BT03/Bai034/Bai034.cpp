#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float Tong(float[], int);

int main()
{
	int n;
	float a[500];
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nTong cac phan tu co gia tri duong trong mang so thuc: " << Tong(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(float a[], int n)
{
	cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}

float Tong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			s += a[i];
	return s;
}