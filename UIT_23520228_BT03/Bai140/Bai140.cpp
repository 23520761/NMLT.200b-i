#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
void NguyenToTang(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);
	NguyenToTang(a, n);
	cout << "\nMang luc sau: ";
	Xuat(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}
bool ktNguyenTo(int x)
{
	int dem = 0;
	for (int i = 1; i <= x; i++)
		if (x % i == 0)
			dem++;
	if (dem == 2)
		return 1;
	return 0;
}
void NguyenToTang(int a[], int n)
{
	for (int i=0;i<n;i++)
		for (int j=i+1;j<n;j++)
			if (ktNguyenTo(a[i])&&ktNguyenTo(a[j])&&a[i]>a[j])
				swap(a[i],a[j]);
}