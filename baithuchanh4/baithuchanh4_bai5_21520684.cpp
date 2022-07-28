/*
5.Nhập vào một số nhị phân, có tối đa 8 kí số, viết hàm đổi ra số hệ thập phân tương ứng.
VD: 1111 = 1.2^3 + 1.2^2 + 1.2^1 + 1.2^0 =15
*/
#include <iostream>
#include <math.h>
using namespace std;
long long doisangthapphan(long long n)
{
    int p = 0;
    long long stp = 0;
    while (n > 0)
    {
        stp += (n % 10) * pow(2, p);
        p++;
        n /= 10;
    }
    return stp;
}
int main()
{
    long long n;
    do
    {
        cout << "Nhap so nhi phan n: ";
        cin >> n;
    } while (n < 0 || n >= 100000000 || (n % 10 != 0 && n % 10 != 1));
    cout << "So thap phan tuong ung : " << doisangthapphan(n);
    return 0;
}