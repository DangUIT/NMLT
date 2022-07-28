// Bai2:Kiểm tra mảng có đối xứng hay không?
#include <iostream>
using namespace std;
void nhapmang(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap A[" << i << "] = ";
        cin >> a[i];
    }
}
int doixung(int a[], int n)
{
    for (int i = 0; i <= n/2; i++)
    {
        if (a[i] != a[n - 1 - i])
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    do
    {
        cout << "Nhap so phan tu cua mang: ";
        cin >> n;
        if (n <= 0)
            cout << "Nhap lai" << endl;
    } while (n <= 0);
    int a[n];
    nhapmang(a, n);
    if (doixung(a, n) == 1)
        cout << "Mang doi xung";
    else
        cout << "Mang khong doi xung";
    return 0;
}
