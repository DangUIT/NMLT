#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << "Tong cac phan tu trong mang: " << sum;
    return 0;
}