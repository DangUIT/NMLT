// Viết chương trình Nhập một số nguyên dương n (có kiểm tra điều kiện nhập) và tính tổng S=1+2+…+ n

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
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i;
    }
    cout << "Tong S la: " << s;
    return 0;
}