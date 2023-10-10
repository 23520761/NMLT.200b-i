#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void Nhap(string, float[], float&);
void Xuat(float[], float);

int main()
{
	float b[500];
	float k;
	Nhap("floatdata01.inp", b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	return 0;
}

void Nhap(string filename, float a[], float& n)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i < n - 1; i++)
		fi >> a[i];
}

void Xuat(float a[], float n)
{
	for (int i = 0; i < n - 1; i++)
		cout << setw(10) << setprecision(3) << a[i];
}