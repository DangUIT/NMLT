#include <iostream>
#include <math.h>
using namespace std;
int sochinhphuong(int n)
{
    if (sqrt(n) == float(sqrt(n)))
        return 1;
}
int tongscp(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sochinhphuong(i) == 1)
            sum += i;
    }
    return sum;
}
int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    } while (n <= 0);
    cout << "Tong cac so chinh phuong nho hon n la: " << tongscp(n);
    return 0;
}