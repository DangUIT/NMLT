#include <iostream>
using namespace std;
long long giaithua(int n)
{
    if (n == 1)
        return 1;
    return n * giaithua(n - 1);
}
long long tong(int n)
{
    if (n == 1)
        return 1;
    return giaithua(n) + tong(n - 1);
}
int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    } while (n <= 0);
    cout << tong(n);
    return 0;
}