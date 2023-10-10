#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKeCacPhanTu(float[], int);
void LietKe(float[], int);

int main()
{
	int n;
	float a[500];
	Nhap(a, n);
	Xuat(a, n);
	LietKeCacPhanTu(a, n);
	cout << endl;
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

void LietKeCacPhanTu(float a[], int n)
{
	cout << "\nTat ca cac gia tri (x, y) la: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (i != j)
				cout << "(" << a[i] << "," << a[j] << ") ";
		if (i < n - 1)
			cout << endl;
	}
}

void LietKe(float a[], int n)
{
	cout << "\nTat ca cac gia tri (x, y) trong mang thoa dieu kien x <= y la: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (i != j && a[i] < a[j])
				cout << "(" << a[i] << "," << a[j] << ")";
		if (i < n - 2)
			cout << endl;
	}
}