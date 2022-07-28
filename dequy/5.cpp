// Bai 5
#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    do
    {
        cout << "Nhap so tu nhien n: ";
        cin >> n;
        if (n < 0)
            cout << "Nhap lai" << endl;
    } while (n < 0);
    cout << "So thu " << n << " cua day Fibo la: " << fibo(n);
    return 0;
}