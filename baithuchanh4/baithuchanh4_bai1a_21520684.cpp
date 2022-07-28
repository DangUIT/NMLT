#include <iostream>
using namespace std;
void sodaonguoc(int n)
{
    while (n != 0)
    {
        cout << n % 10;
        n /= 10;
    }
}
int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    } while (n <= 0);
    cout << "So dao nguoc cua n: ";
    sodaonguoc(n);
    return 0;
}