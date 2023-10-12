#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void NhapMang(float[], int&);
void XuatMang(float[], int);
int DemGiaTri(float[], int);

void NhapMang(float a[], int& n)
{
	cout << "--------------------------------\n";
	cout << "Nhap n: ";
	cin >> n;
	cout << "--------------------------------\n\n";
	cout << "--------------------------------\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu " << i + 1 << " :";
		cin >> a[i];
	}
	cout << "--------------------------------\n";
}

void XuatMang(float a[], int n)
{
	cout << "--------------------------------\n";
	cout << "Mang ban vua nhap la: ";
	for (int i = 0; i < n; i++)
	{
		cout << " || " << a[i];
	}
}
int DemGiaTri(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	for (int i = 1; i <= n - 1; i++)
		if ((a[i] * a[i - 1] > 0) && abs(a[i]) > abs(a[i - 1]))
			dem++;
	return dem;
}


int main()
{
	float a[500];
	int n;
	NhapMang(a, n);
	cout << endl;
	XuatMang(a, n);
	cout << " ||\n";
	cout << "--------------------------------\n\n";
	cout << "--------------------------------\n";
	cout << "So luong gia tri la: ";
	cout << DemGiaTri(a, n);
	cout << "\n--------------------------------\n";
	cout << endl;
	return 0;
}