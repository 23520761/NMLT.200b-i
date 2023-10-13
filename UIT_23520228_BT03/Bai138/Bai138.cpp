#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void Sapgiam(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Nhap mang: ";
	Xuat(a, n);
	cout << "\nSap xep tang dan: \n ";
	Sapgiam(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100 + rand() / ((int)RAND_MAX / 200);
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(3) << a[i];
}
void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void Sapgiam(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
	{
		for (int i = 0; i <= n - 2; i++)
			for (int j = i + 1; j <= n - 1; j++)
				if (a[i] > a[j])
					HoanVi(a[i], a[j]);
	}
}