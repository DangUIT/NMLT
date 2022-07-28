// Bai 1:
#include <iostream>
using namespace std;
int sum(int n)
{
    if (n / 10 == 0)
        return n;
    return n % 10 + sum(n / 10);
}
int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
        if (n <= 0)
            cout << "Nhap lai" << endl;
    } while (n <= 0);
    cout << "Tong cac chu so cua so nguyen duong n la: " << sum(n);
    system("\npause");
    return 0;
}
