#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float AmDau(float[], int);
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

float AmDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] < a[0])
			return a[i];
	return 0;
}

void LietKe(float a[], int n)
{
	float ad = AmDau(a, n);
	cout << "\nGia tri am dau tien: " << ad;
	if (ad == 0)
	{
		cout << "\nKhong co gia tri am";
		return;
	}
	cout << "\nCac vi tri co gia tri bang gia tri am dau tien trong mang: ";
	for (int i = 0; i < n; i++)
		if (a[i] == ad)
			cout << setw(6) << i;
}