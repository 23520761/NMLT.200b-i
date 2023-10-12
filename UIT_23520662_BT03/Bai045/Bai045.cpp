#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void NhapMang(float[], int&);
void XuatMang(float[], int);
float TrungBinhCong(float a[], int n);
float TongDuong(float a[], int n);
float DemDuong(float a[], int n);

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

float TongDuong(float a[], int n)
{
	float S = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			S += a[i];
	return S;
}
float DemDuong(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			dem++;
	return dem;
}

float TrungBinhCong(float a[], int n)
{
	float S1 = TongDuong(a, n);
	float S2 = DemDuong(a, n);
	if (S2 == 0)
		return 0;
	return S1 / S2;
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
	cout << "Trung binh cac so la: ";
	cout << TrungBinhCong(a, n);
	cout << "\n--------------------------------\n";
	cout << endl;
	return 0;
}