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
        
    }return 1;
}
int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    } while (n <= 0);
    if (songuyento(n) == 1)
        cout << "n la so nguyen to ";
    else
        cout << "n khong la so nguyen to";
    return 0;
}