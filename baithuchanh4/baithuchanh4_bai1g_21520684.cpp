#include <iostream>
using namespace std;
int tonguocso(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
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
    cout << "Tong cac uoc so cua n: " << tonguocso(n);
    return 0;
}