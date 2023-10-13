#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);

int main()
{
	float a[500];
	int n,k;
	Nhap(a, n);
	cout << "Nhap mang mot chieu: ";
	Xuat(a, n);
	cout << "Ket qua: ";
	XoaViTri(a, n, k);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}
void Xuat(float a[], int n)
{
	cout << n << endl;
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}
void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}