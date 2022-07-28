// 2. Viết chương trình tính x^n, với x,n là số nguyên dương
#include <iostream>
using namespace std;
long long luythua(int x, int n)
{
    long long luythua = 1;
    for (; n >= 1; n--)
    {
        luythua *= x;
    }
    return luythua;
}
int main()
{
    int n, x;
    do
    {
        cout << "Nhap so nguyen duong x: ";
        cin >> x;
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    } while (n <= 0 || x <= 0);
    cout << x << "^" << n << " = " << luythua(x, n);
    return 0;
}