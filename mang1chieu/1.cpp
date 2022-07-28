/* 
1. Viết chương trình nhập vào một mảng số nguyên và xuất các số
nguyên tố có trong mảng.
*/
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
int kiemtraSNT(int n)
{
    if (n < 2)
        return 0;
    else if (n == 2)
        return 1;
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                return 0;
        }
        return 1;
    }
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
    cout << "Cac so nguyen to la: ";
    for (int i = 0; i < n; i++)
    {
        if (kiemtraSNT(a[i]) == 1)
            cout << a[i] << " ";
    }
    return 0;
}
