// Viết chương trình Giải phương trình bậc hai ax2+bx+c=0

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, x1, x2;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                cout << "Phuong trinh co vo so nghiem ";
            else
                cout << "Phuong trinh vo nghiem ";
        }
    }
    else
    {
        float denta = (b * b - 4 * a * c);
        if (denta == 0)
            cout << "Phuong trinh co nghiem kep: x1=x2= " << -b / (2 * a);
        else if (denta > 0)
        {
            x1 = (-b + sqrt(denta)) / (2 * a);
            x2 = (-b - sqrt(denta)) / (2 * a);
            cout << "Phuong trinh co 2 nghiem phan biet: "
                 << "x1 = " << x1 << "\t"<<" x2 = "<<x2 ;
        }
        else
            cout << "Phuong trinh vo nghiem";
    }
    return 0;
}