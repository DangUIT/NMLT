// Bai 2:
#include <iostream>
using namespace std;
int sochuso(int n)
{
    if (n / 10 == 0)
        return 1;
    return 1 + sochuso(n / 10);
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
    cout << "So cac chu so cua so nguyen duong n la: " << sochuso(n);
    return 0;
}