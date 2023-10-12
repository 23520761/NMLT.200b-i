#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void NhapMang(float[], int&);
void XuatMang(float[], int);
int TimViTri(float[], int, float);

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

int TimViTri(float a[], int n, float x)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (abs(a[i] - x) < abs(a[lc] - x))
			lc = i;
	return lc;
}


int main()
{
	float a[500];
	int n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	NhapMang(a, n);
	cout << endl;
	XuatMang(a, n);
	cout << " ||\n";
	cout << "--------------------------------\n\n";
	cout << "--------------------------------\n";
	cout << "So vi tri gan x nhat la: ";
	cout << TimViTri(a, n, x);
	cout << "\n--------------------------------\n";
	cout << endl;
	return 0;
}