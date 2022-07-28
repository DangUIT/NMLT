#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
    cout << "Cac phan tu chan nho hon 20: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 20 && a[i] % 2 == 0)
            cout << a[i] << endl;
    }
    return 0;
}