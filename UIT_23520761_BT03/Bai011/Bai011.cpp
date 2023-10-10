#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool KtDang3m(int);
void LietKe(int[], int);

int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	Xuat(a, n);
	LietKe(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(int a[], int n)
{
	cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

bool KtDang3m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = n;
	while (t > 1)
	{
		int du = t % 3;
		if (du != 0)
			flag = false;
		t /= 3;
	}
	return flag;
}

void LietKe(int a[], int n)
{
	cout << "\nCac so trong mang co dang 3^m: ";
	for (int i = 0; i <= n - 1; i++)
		if (KtDang3m(a[i]))
			cout << setw(8) << a[i];
}