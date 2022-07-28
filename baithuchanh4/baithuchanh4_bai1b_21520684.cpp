#include <iostream>
#include <math.h>
using namespace std;
void sochinhphuong(int n)
{
    if (sqrt(n) == float(sqrt(n)))
        cout << "n la so chinh phuong ";
    else
        cout << "n khong la so chinh phuong ";
}
int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    } while (n <= 0);
    sochinhphuong(n);
    return 0;
}