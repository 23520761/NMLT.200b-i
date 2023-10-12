#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void NhapMang(float[], int&);
void XuatMang(float[], int);
float TichDuong(float[], int);
int DemDuong(float[], int);
float TrungBinhNhan(float[], int);

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
float TichDuong(float a[], int n)
{
	float T = 01;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			T = T * a[i];
	return T;
}


int DemDuong(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			dem++;
	return dem;
}

float TrungBinhNhan(float a[], int n)
{
	float T = TichDuong(a, n);
	int dem = DemDuong(a, n);
	if (dem == 0)
		return 0;
	return pow(T, (float)1 / dem);
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
	cout << TrungBinhNhan(a, n);
	cout << "\n--------------------------------\n";
	cout << endl;
	return 0;
}