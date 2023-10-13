#include <iostream>
using namespace std;

void Nhap(float[], int&, int&, int&, int&, int&);
float TongCon(float[], int, int, int);
void ConLonNhat(float[], int, int&, int&);

int main()
{
	int n;
	float a[5000];
	int vt;
	int l;
	int vtd;
	int vtc;
	Nhap(a ,n , vt, l, vtd, vtc);
	ConLonNhat(a, n, vtd, vtc);
	return 0;
}

void Nhap(float a[], int& n, int& vt, int& l, int& vtd, int& vtc)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Nhap vt: ";
	cin >> vt;
	cout << "Nhap l: ";
	cin >> l;
	cout << "Nhap vtd: ";
	cin >> vtd;
	cout << "Nhap vtc: ";
	cin >> vtc;
}

float TongCon(float a[], int n, int vt, int l)
{
	float s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + i];
	return s;
}

void ConLonNhat(float a[], int n, int& vtd, int& vtc)
{
	vtd = vtc = 0;
	float sln = a[0];
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (TongCon(a, n, vt, l) > sln)
			{
				vtd = vt;
				vtc = vt + l - 1;
				sln = TongCon(a, n, vt, l);
			}
	cout << sln;
}