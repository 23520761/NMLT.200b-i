#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
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

void LietKe(float a[], int n)
{
	cout << "\nTat ca cac gia tri (x, y, z) trong mang thoa dieu kien x = y + z la: ";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				if (i != j && j != k && i != k && a[i] == a[j] + a[k])
				{
					cout << "(" << a[i] << "," << a[j] << "," << a[k] << ")" << " ";
				}
		if (i < n - 5)
			cout << endl;
	}
}