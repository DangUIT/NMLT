#include <iostream>
using namespace std;
long mu(int x, int n)
{
    if (n == 1)
        return x;
    if (n > 1)
        return x * mu(x, n - 1);
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
    cout << x << " ^ " << n << " = " << mu(x, n);
    return 0;
}