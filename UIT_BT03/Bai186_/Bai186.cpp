#include <iostream>

using namespace std;

void Nhap(int[], int&, int&, int&, int&, int&, int&);
int TongCon(int[], int, int, int);
void TimCon(int[], int, int, int&, int&);

int main()
{
	int n;
	int a[500];
	int vt;
	int l;
	int vtd;
	int vtc;
	int M;
	
}

void Nhap(int a[], int& n, int& vt, int& l, int& vtd, int& vtc, int& M)
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
	cout << "Nhap M: ";
	cin >> M;
	Nhap(a, n, vt, l, vtd, vtc, M);
	TongCon(a, n, vt, l);
	TimCon(a, n, M, vtd, vtc);
}

int TongCon(int a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i <= l - 1; i++)
		s = s + a[vt + i];
	return s;
}

void TimCon(int a[], int n, int M, int& vtd, int& vtc)
{
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - 1; vt++)
			if (TongCon(a, n, vt, l) == M)
			{
				vtd = vt;
				vtc = vt + l - 1;
				return;
			}
	vtd = vtc = -1;
}

