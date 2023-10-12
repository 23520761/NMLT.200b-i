#include <iostream>
#include <cmath>
using namespace std;

void Nhap(int&);
float XuLy(int);
void Xuat(int);

int main()
{
    int n;
    Nhap(n);
    Xuat(n);
    cout << "\n\nChu so nho nhat cua so nguyen la ";
    cout << XuLy(n);
    return 0;
}

void Nhap(int& nn)
{
    cout << "Nhap so: ";
    cin >> nn;
}

void Xuat(int nn)
{
    cout << "\nSo ban vua nhap la: " << nn;
}

float XuLy(int nn)
{
    int i = 1;
    int t = nn;
    int lc = nn % 10;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv < lc)
        {
            lc = dv;
        }
        t = t / 10;
    }
    return lc;
}
