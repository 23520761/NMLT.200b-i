#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void NhapMang(int[], int&);
void XuatMang(int[], int);
bool ktNguyenTo(int);
int DemNguyenTo(int[], int);
int TongNguyenTo(int[], int);
float TrungBinhCong(int[], int);

void NhapMang(int a[], int& n)
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

void XuatMang(int a[], int n)
{
	cout << "--------------------------------\n";
	cout << "Mang ban vua nhap la: ";
	for (int i = 0; i < n; i++)
	{
		cout << " || " << a[i];
	}
}

int DemNguyenTo(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
			dem++;
	return dem;
}
int TongNguyenTo(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
			s = s + a[i];
	return s;
}

float TrungBinhCong(int a[], int n)
{
	int s = TongNguyenTo(a, n);
	int dem = DemNguyenTo(a, n);
	if (dem == 0)
		return 0;
	return (float)s / dem;
}
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int main()
{
	int a[500];
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