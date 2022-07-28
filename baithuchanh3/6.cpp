// 6. Nhập vào một số nguyên dương n. Đếm số lượng chữ số chẵn/ lẻ của số nguyên dương n
#include <iostream>
using namespace std;
void dem(int n)
{
    int chan = 0, le = 0;
    while (n != 0)
    {
        int i = n % 10;
        if (i % 2 == 0)
            chan += 1;
        else
            le += 1;
        n /= 10;
    }
    cout << "So luong chu so chan cua n la: " << chan << endl;
    cout << "So luong chu so le cua n la: " << le;
}
int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    } while (n <= 0);
    dem(n);
    return 0;
}
