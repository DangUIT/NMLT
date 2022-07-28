#include <iostream>
using namespace std;
int tongchusole(int n)
{
    int i;
    int sum = 0;
    while (n != 0)
    {
        i = n % 10;
        if (i % 2 == 1)
            sum += i;
        n /= 10;
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
    cout << "Tong cac chu so le cua n: "<<tongchusole(n);
    return 0;
}