// 1. Viết chương trình tính n!, với n là số nguyên dương
#include <iostream>
using namespace std;
long long giaithua(int n)
{
    long long tich = 1;
    for (; n >= 1; n--)
    {
        tich *= n;
    }
    return tich;
}
int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    } while (n <= 0);
    cout << n << "! = " << giaithua(n);
    return 0;
}
