// Bai 4
#include <iostream>
using namespace std;
long long giaithua(int n)
{
    if (n == 0)
        return 1;
    return n * giaithua(n - 1);
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
    cout << n << "! = " << giaithua(n);
    return 0;
}