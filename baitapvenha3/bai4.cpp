/* 
Viết chương trình Kiểm tra số nguyên dương n (có kiểm tra điều kiện nhập) 
có phải là nguyên tố không ? (có sử dụng câu lệnh break) 
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    int dem = 0;
    do
    {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
        if (n <= 0)
            cout << "Nhap sai roi " << endl;
    } while (n <= 0);
    if (n == 1)
        cout << "n khong la so nguyen to";
    if ((n == 2) || (n == 3))
        cout << "n la so nguyen to";
    if (n > 3)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "n khong la so nguyen to";
                break;
            }
            else
            {
                dem += 1;
            }
        }
        if (dem != 0)
            cout << "n la so nguyen to ";
        return 0;
    }
    return 0;
}
