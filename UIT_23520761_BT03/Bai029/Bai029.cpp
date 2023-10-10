#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
float ChanDau(int[], int);
float ChanDauLonNhat(int[], int);
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

float ChanDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}

float ChanDauLonNhat(int a[], int n)
{
	int lc = ChanDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0 && a[i] > lc)
			lc = a[i];
	return lc;
}

void LietKe(int a[], int n)
{
	int dd = ChanDauLonNhat(a, n);
	cout << "\nGia tri lon nhat: " << dd;
	if (dd == -1)
	{
		cout << "\n Khong co gia tri chan";
		return;
	}
	cout << "\nCac vi tri co gia tri chan lon nhat trong mang: ";
	for (int i = 0; i < n; i++)
		if (a[i] == dd)
			cout << setw(6) << i;
}