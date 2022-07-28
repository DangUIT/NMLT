// 5. In ra màn hình các phần tử chẵn và nhỏ hơn 20
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
void chan(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0&&a[i]<20)
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int n;
    int a[100];
    int x;
    nhapmang(a, n);
    xuatmang(a, n);
    cout << "Cac phan tu chan nho hon 20 : " << endl;
    chan(a, n);
    return 0;
}