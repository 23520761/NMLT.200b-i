#include <iostream>
using namespace std;

void Nhap1(int [], int&);
void Nhap2(int [], int&);
int TanSuat(int[], int, int);
int ktThuoc(int[], int, int[], int);

int main()
{
	int a[500];
	int b[500];
	int n1,n2;
	Nhap1(a, n1);
	Nhap2(b, n2);
	cout << ktThuoc(a, n1, b, n2);
	return 0;
}
void Nhap1(int a[], int& n1)
{
	cout << "Nhap n1: ";
	cin >> n1;
	cout << "Mang a: ";
	for (int i = 0; i < n1; i++)
		cin >> a[i];
}
void Nhap2(int b[], int& n2)
{
	cout << "Nhap n2: ";
	cin >> n2;
	cout << "Mang b: ";
	for (int i = 0; i < n2; i++)
		cin >> b[i];
}
int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
int ktThuoc(int a[], int n1, int b[], int n2)
{
	int flag = 1;
	for (int i = 0; i < n1; i++)
		if (TanSuat(b, n2, a[i]) == 0)
			flag = 0;
	return flag;
}