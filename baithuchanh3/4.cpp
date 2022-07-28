// 4. Nhập vào một số nguyên dương n. Xuất ra số ngược lại. VD: nhập 1907, xuất ra 7091.
#include <iostream>
using namespace std;
void daonguoc(int n)
{
    cout << "So nguoc lai: ";
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
    daonguoc(n);
    return 0;
}
