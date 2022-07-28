#include <iostream>
using namespace std;
float tong(int n)
{
    if (n == 1)
        return 1;
    return 1.0 / n + tong(n - 1);
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