#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
    int x;
    cout << "Nhap phan tu x: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            count++;
    }
    cout << "So lan xuat hien cua phan tu x: " << count;
    return 0;
}