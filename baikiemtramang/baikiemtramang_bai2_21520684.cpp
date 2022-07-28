// 2. Chèn phần tử X (nhập từ bàn phím) vào tất cả vị trí các phần tử là số chẵn của mảng
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
void chen1phantu(int a[], int n, int vitrichen, int giatrichen)
{
    for (int i = n; i > vitrichen; i--)
    {
        a[vitrichen] = giatrichen;
    }
}
void chenxvaomang(int a[], int n, int &x)
{
    cout << "Nhap gia tri x: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            chen1phantu(a, n, i, x);
        }
    }
}
int main()
{
    int n;
    int a[100];
    int x;
    nhapmang(a, n);
    chenxvaomang(a, n, x);
    cout << "Mang sau khi chen: " << endl;
    xuatmang(a, n);
    return 0;
}