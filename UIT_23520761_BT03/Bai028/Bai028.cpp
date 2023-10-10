#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float DuongDau(float[], int);
float DuongNhoNhat(float[], int);
void LietKe(float[], int);

int main()
{
	int n;
	float a[500];
	Nhap(a, n);
	Xuat(a, n);
	LietKe(a, n);
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

float DuongDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return a[i];
	return -1;
}

float DuongNhoNhat(float a[], int n)
{
	float lc = DuongDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (a[i] > 0 && a[i] < lc)
			lc = a[i];
	return lc;
}

void LietKe(float a[], int n)
{
	float dd = DuongNhoNhat(a, n);
	cout << "\nGia tri duong nho nhat: " << dd;
	if (dd == -1)
	{
		cout << "\nKhong co gia tri duong";
		return;
	}
	cout << "\nCac vi tri co gia tri duong nho nhat trong mang: ";
	for (int i = 0; i < n; i++)
		if (a[i] == dd)
			cout << setw(6) << i;
}