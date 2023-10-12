#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void NhapMang(int[], int&);
void XuatMang(int[], int);
int DemChan(int[], int);
int DemLe(int[], int);
int TuongQuan(int[], int);

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
int DemChan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0)
			dem++;
	return dem;
}


int DemLe(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 != 0)
			dem++;
	return dem;
}
int TuongQuanChanLe(int a[], int n)
{
	int x = DemChan(a, n);
	int y = DemLe(a, n);
	if (x > y)
		return -1;
	if (x < y)
		return 1;
	return 0;
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
	if (TuongQuanChanLe(a, n) == 0)
		cout << "So le = So Chan";
	else if (TuongQuanChanLe(a, n) == 1)
		cout << "So le < So Chan";
	else if (TuongQuanChanLe(a, n) == -1)
		cout << "So le > So Chan";
	cout << "\n--------------------------------\n";
	cout << endl;
	return 0;
}