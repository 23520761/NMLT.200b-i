#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int HangChuc(int);
void LietKe(int[], int);
int TongHangChuc(int[], int);

int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	Xuat(a, n);
	LietKe(a, n);
	cout << "\nTong cac phan tu co gia tri chu so hang chuc la 5 mang so nguyen: " << TongHangChuc(a, n);
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

int HangChuc(int n)
{
	int t = abs(n);
	return (t / 10) % 10;
}

void LietKe(int a[], int n)
{
	cout << "\nCac gia tri hang chuc la chu so 5: ";
	for (int i = 0; i < n; i++)
		if (HangChuc(a[i]) == 5)
			cout << setw(6) << a[i];
}

int TongHangChuc(int a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		if (HangChuc(a[i]) == 5)
			s += a[i];
	return s;
}	