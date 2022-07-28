// 6.  Sắp xếp mảng theo thứ tự giảm dần
#include <iostream>
using namespace std;
void nhapmang(int a[], int &n)
{
    do
    {
        cout << "Nhap so phan tu cua mang: ";
        cin >> n;
    } while (n <= 0);
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}
void xuatmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
void hoanvi(int &x, int &y)
{
    if (x < y)
    {
        int c = x;
        x = y;
        y = c;
    }
}
void sapxepgiamdan(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                hoanvi(a[i], a[j]);
            }
        }
    }
}
int main()
{
    int n;
    int a[100];
    int x;
    nhapmang(a, n);
    sapxepgiamdan(a, n);
    cout << "Mang sap xep giam dan: " << endl;
    xuatmang(a, n);
    return 0;
}