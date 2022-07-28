/*
Viết chương trình Tính tiền đi taxi từ số km nhập vào. Biết: 1 km đầu giá 15000đ, từ km thứ 2 đến km thứ 5 giá 13500đ,
từ km thứ 6 trở đi giá 11000đ, nếu trên 120km được giảm 10% trên tổng số tiền.
*/

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Nhap vao so km(>0): ";
    cin >> a;
    if (a <= 0)
        cout << "Nhap sai" << endl;
    else if (a == 1)
    {
        cout << "So tien phai tra la 15000 dong" << endl;
    }
    else if (a >= 2 && a <= 5)
    {
        cout << "So tien phai tra la: " << 15000 + (a - 1) * 13500 << " dong" << endl;
    }
    else if (a > 5 && a <= 120)
    {
        cout << "So tien phai tra la: " << 15000 + 4 * 13500 + (a - 5) * 11000 << " dong" << endl;
    }
    else
    {
        long long t = 0.9 * (15000 + 4 * 13500 + (a - 5) * 11000);
        cout << "So tien phai tra la: " << t << " dong";
    }
    return 0;
}
