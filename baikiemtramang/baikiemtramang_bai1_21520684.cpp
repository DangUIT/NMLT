// 1. Xóa tất cả các phần tử nhỏ hơn X trong mảng (X nhập từ bàn phím)
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
        cout << a[i] <<" ";
    }
}
void xoa1phantu(int a[], int &n, int vitrixoa)
{
    for (int i = vitrixoa; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}
void xoaphantunhohonx(int a[], int &n, int &x)
{
    cout << "Nhap gia tri x: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < x)
        {
            xoa1phantu(a, n, i);
            i--;
        }
    }
}
int main()
{
    int n;
    int a[100];
    int x;
    nhapmang(a, n);
    xoaphantunhohonx(a, n, x);
    cout << "Mang sau khi xoa: " << endl;
    xuatmang(a, n);
    return 0;
}