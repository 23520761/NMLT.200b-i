#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float soLonNhat(float[], int);
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
		cout << setw(8) << a[i];
}

float soLonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

void LietKe(float a[], int n)
{

	float lc = soLonNhat(a, n);
	cout << "Gia tri lon nhat: " << lc;
	cout << "\nCac vi tri co gia tri lon nhat: ";
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == lc)
			cout << setw(5) << i;
}