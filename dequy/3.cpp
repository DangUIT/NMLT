// Bai 3
#include <iostream>
using namespace std;
float luythua(float x, float y)
{
    if (y == 0)
        return 1;
    else if (y > 0)
        return x * luythua(x, y - 1);
    else
        return (1.0 / x) * luythua(x, y + 1);
}

int main()
{
    float x, y;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    cout << x << "^" << y << "=" << luythua(x, y);
    return 0;
}