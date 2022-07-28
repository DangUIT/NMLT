// 3. Cho biết mảng có phải là mảng tăng dần hay không? Ví dụ: mảng số nguyên : 1 6 7 là mảng tăng dần
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
int kiemtratangdan(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] >= a[i + 1])
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    int a[100];
    nhapmang(a, n);
    xuatmang(a, n);
    if (kiemtratangdan(a, n) == 1)
        cout << "Mang tang dan" << endl;
    else
        cout << "Mang khong tang dan";
    return 0;
}