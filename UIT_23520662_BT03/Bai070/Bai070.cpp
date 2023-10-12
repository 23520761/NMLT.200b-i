#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void NhapMang(int[], int&);
void XuatMang(int[], int);
int DemGiaTri(int[], int, int[], int, int[]);
int TanSuat(int[], int, int);
void KetQua(int[], int);

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

int TanSuat(int b[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		if (b[i] == x)
		{
			dem++;
		}
	}
	return dem;
}

int DemGiaTri(int a[], int n, int b[], int k, int temp[])
{
	int tempSo = 0;
	int High = 0;
	int Small = 0;
	int Higher[500];
	int Smaller[500];
	if (n < k)
	{
		High = k;
		Small = n;
		for (int i = 0; i < High; i++)
			Higher[i] = b[i];
		for (int i = 0; i < Small; i++)
			Smaller[i] = a[i];
	}
	else
	{
		High = n;
		Small = k;
		for (int i = 0; i < High; i++)
			Higher[i] = a[i];
		for (int i = 0; i < Small; i++)
			Smaller[i] = b[i];
	}
	for (int i = 0; i < Small; i++)
	{
		int flag = 0;
		for (int j = 0; j <= High - 1; j++)
		{
			if (Higher[i] == Smaller[j])
			{
				flag = 1;
			}
		}
		int dem = TanSuat(Higher, Small, Smaller[i]);
		if (flag == 0 && dem == 0)
		{
			temp[tempSo] = Smaller[i];
			tempSo++;
		}
	}
	for (int i = 0; i < High; i++)
	{
		int flag = 0;
		for (int j = 0; j <= Small - 1; j++)
		{
			if (Higher[i] == Smaller[j])
			{
				flag = 1;
			}
		}
		int dem = TanSuat(Smaller, High, Higher[i]);
		if (flag == 0 && dem == 0)
		{
			temp[tempSo] = Higher[i];
			tempSo++;
		}
	}
	return tempSo;
}

void KetQua(int temp[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
		{
			if (temp[i] == temp[j])
				flag = 0;
		}
		if (flag == 1)
		{
			cout << " || " << temp[i];
		}
	}
}

int main()
{
	int a[500];
	int n;
	NhapMang(a, n);
	cout << endl;
	int b[500];
	int k;
	int temp[500];
	NhapMang(b, k);
	cout << endl;
	XuatMang(a, n);
	cout << " ||\n";
	XuatMang(b, k);
	cout << " ||\n";
	cout << "--------------------------------\n\n";
	cout << "--------------------------------\n";
	cout << "Cac so chi xuat hien o 1 mang la: ";
	int so = DemGiaTri(a, n, b, k, temp);
	KetQua(temp, so);
	cout << " || ";
	cout << "\n--------------------------------\n";
	cout << endl;
	return 0;
}