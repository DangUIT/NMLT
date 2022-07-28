#include <iostream>
using namespace std;
long long tich(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n % 2 == 1)
        return n * tich(n - 2);
    return n * tich(n - 2);
}
int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    } while (n <= 0);
    cout << n << "!! = " << tich(n);
    return 0;
}