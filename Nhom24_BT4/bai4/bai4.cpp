#include <iostream>
#include <cmath>
#include "bai3.h"
using namespace std;
Point Point::Nhap()
{
    Point a;
    cout << "Nhap toa do cua diem vao: ";
    cin >> a.x;
    cin >> a.y;
    return a;
}
Point Point::TinhTien(Point& a, int n)
{
    a.x += n;
    a.y += n;
    return a;
}
int Point::GetX(Point a)
{
    return a.x;
}
int Point::GetY(Point a)
{
    return a.y;
}

void Point::Xuat(Point a)
{
    cout << "Toa do: (" << a.x << ',' << a.y << ")\n";
}
int main()
{
    Point a;
    int choose;
    cout << "1. Nhap diem\n"
        << "2. TinhTien\n"
        << "3. Lay X\n"
        << "4. Lay Y\n"
        << "5.EXIT\n";
    do
    {
        cout << "choose: ";
        cin >> choose;
        cout << "1. Nhap diem\n"
            << "2. TinhTien\n"
            << "3. Lay X\n"
            << "4. Lay Y\n"
            << "5.EXIT\n";
        switch (choose)
        {
        case 1:
        {
            a = a.Nhap();
            a.Xuat(a);
            break;
        }
        case 2:
        {
            int n;
            cin >> n;
            a = a.TinhTien(a, n);
            a.Xuat(a);
            break;
        }
        
        case 3:
        {
            int a1;
            a1 = a.GetX(a);
            cout << "X= " << a1 << endl;
            break;
        }
        case 4:
        {
            int a1;
            a1 = a.GetY(a);
            cout << "Y= " << a1 << endl;
            break;
        }
        }
    } while (choose != 6);
    return 0;
}