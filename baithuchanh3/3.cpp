// 3. Viết chương trình tính n!! (n!! = 1 x 3 x 5 x n với n lẻ, 2 x 4 x 6 … n với n chẵn)
#include <iostream>
using namespace std;
long long tich(int n)
{
    long long tich = 1;
    for (; n >= 1; n-=2)
    {   
        tich *= n;
    }
    return tich;
}
int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    } while (n <= 0);
    cout << n << "!! = " << tich(n);
    return 0;
}
