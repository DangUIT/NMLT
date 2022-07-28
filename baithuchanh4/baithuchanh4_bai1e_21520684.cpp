#include <iostream>
using namespace std;
int songuyento(int n)
{
    if (n < 2)
        return 0;
    else if (n == 2)
        return 1;
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
                return 0;
        }
        return 1;
    }
}
int tongsonguyento(int n)
{
    int sum = 0;
    for (int i = 2; i < n; i++)
    {
        if (songuyento(i) == 1)
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
    cout << "Tong cac so nguyen to nho hon n: " << tongsonguyento(n);
    return 0;
}