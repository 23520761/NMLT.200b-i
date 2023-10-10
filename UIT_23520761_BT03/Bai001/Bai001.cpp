#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int [], int &);
void Xuat(int [], int);


int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	return 0;
}

void Nhap(int a[], int &k)
{
	cout << "Nhap n: ";
	cin >> k;
	srand(time(NULL));
	for (int i = 0; i <= k - 1; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int k)
{
	for (int i = 0; i <= k - 1; i++)
		cout << setw(10) << a[i];
}