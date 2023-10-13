#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float [], int&);
void Xuat(float[], int);
void HoanVi(float&, float&);
void SapTang(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Nhap mang: ";
	Xuat(a, n);
	cout << "\nSap xep tang dan: \n ";
	SapTang(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100 + rand() / ((float)RAND_MAX / 200);
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(3) << a[i];
}
void HoanVi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;
}
void SapTang(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
	{
		for (int i = 0; i <= n - 2; i++)
			for (int j = i + 1; j <= n - 1; j++)
				if (a[i] > a[j])
					HoanVi(a[i], a[j]);
	}
}