/*
Viết chương trình Tính tiền đi taxi từ số km nhập vào. Biết: 1 km đầu giá 15000đ, từ km thứ 2 đến km thứ 5 giá 13500đ,
từ km thứ 6 trở đi giá 11000đ, nếu trên 120km được giảm 10% trên tổng số tiền.
(sử dụng hàm)
*/

#include <iostream>
using namespace std;
int tien(int a, long long &t)
{
    if (a <= 0)
        return 0;
    else if (a == 1)
        t = 15000;
    else if (a >= 2 && a <= 5)
        t = 15000 + (a - 1) * 13500;
    else if (a > 5 && a <= 120)
        t = 15000 + 4 * 13500 + (a - 5) * 11000;
    else
        t = 0.9 * (15000 + 4 * 13500 + (a - 5) * 11000);
    return t;
}
int main()
{
    int a;
    long long t;
    do
    {
        cout << "Nhap vao so km(>0): ";
        cin >> a;
        if (a <= 0)
            cout << "Khong hop le" << endl;
    } while (a <= 0);
    cout << "So tien phai tra la: " << tien(a, t) << " dong";
    return 0;
}
