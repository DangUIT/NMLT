/*
Viết chương trình Nhập ba số a, b, c. Kiểm tra xem chúng có thể là độ dài của các cạnh của một tam giác hay không.
Nếu có thì cho biết đó là tam giác gì: không phải tam giác, tam giác thường, cân, đều, vuông?
(sử dụng hàm)
*/

#include <iostream>
using namespace std;
void kiemtra(int a, int b, int c)
{
    if ((a <= 0) || (b <= 0) || (c <= 0))
    {
        cout << a << " " << b << " " << c << " "
             << "khong la do dai cac canh cua mot tam giac";
    }
    else if (a + b > c && a + c > b && b + c > a)
    {
        if (a < b + c && b < a + c && c < a + b)
        {
            if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
                cout << "Day la tam giac vuong";
            else if (a == b && b == c)
                cout << "Day la tam giac deu";
            else if (a == b || a == c || b == c)
                cout << "Day la tam giac can";
            else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b)
                cout << "Day la tam giac tu";
            else
                cout << "Day la tam giac nhon";
        }
    }
    else

        cout << a << " " << b << " " << c << " "
             << "khong la do dai cac canh cua mot tam giac";
}
int main()
{
    float a, b, c;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
    kiemtra(a, b, c);
    return 0;
}
