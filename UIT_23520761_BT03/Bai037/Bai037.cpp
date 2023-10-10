#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool KtDoiXung(int);
void LietKe(int[], int);
int TongDoiXung(int[], int);

int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	Xuat(a, n);
	LietKe(a, n);
	cout << "\nTong cac phan tu co gia tri la so doi xung trong mang so nguyen: " << TongDoiXung(a, n);
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

bool KtDoiXung(int n)
{
	int temp = abs(n);
	int dn = 0;
	while (temp != 0)
	{
		dn = dn * 10 + temp % 10;
		temp /= 10;
	}
	if (dn == abs(n)) 
		return true;
	return false;
}

void LietKe(int a[], int n)
{
	cout << "\nCac gia tri doi xung: ";
	for (int i = 0; i < n; i++)
		if (KtDoiXung(a[i]))
			cout << setw(6) << a[i];	
}

int TongDoiXung(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (KtDoiXung(a[i]))
			s += a[i];
	return s;
}