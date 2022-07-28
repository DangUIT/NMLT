// Viết chương trình Liệt kê tất cả các ước số của số nguyên dương n (có kiểm tra điều kiện nhập)

#include <iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
        if (n <= 0)
            cout << "Nhap sai roi " << endl;
    } while (n <= 0);
    cout << "Uoc so cua n la: ";
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            {cout << i << " ";}
    }
    return 0;
}