// Viết chương trình Nhập vào 3 số thực a, b, c. In ra theo thứ tự tăng dần.

#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
    if (a > b)
    {
        int x = a;
        a = b;
        b = x;
    }
    if (a > c)
    {
        int x = a;
        a = c;
        c = x;
    }
    if (b > c)
    {
        int x = b;
        b = c;
        c = x;
    }
    cout << "Sap xep tang dan: " << a << " " << b << " " << c;
    return 0;
}