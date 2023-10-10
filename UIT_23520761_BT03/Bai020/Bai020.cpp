#include <iostream>
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
	if (n == 1)
		return;
	cout << "\nCac gia tri cuc tieu trong mang: ";

	if (a[0] < a[1])
		cout << a[0];
	for (int i = 1; i < n - 2; i++)
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			cout << setw(6) << a[i];
	if (a[n - 1] < a[n - 2])
		cout << setw(6) << a[n - 1];
}