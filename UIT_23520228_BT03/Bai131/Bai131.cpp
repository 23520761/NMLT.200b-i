#include <iostream>
using namespace std;

void Nhap(int[], int&);
int Demgiatri(int[], int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	cout << Demgiatri(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Mang la: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int Demgiatri(int a[], int n)
{
	int dem = 0;
	for (int i = 1; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] >= a[i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
		return dem;
}