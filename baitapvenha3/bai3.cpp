// Viết chương trình Đếm số lượng chữ số của số nguyên dương n (có kiểm tra điều kiện nhập)

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
    int sochuso =0;
    while(n!=0)
    {
       n/=10;
       sochuso+=1;
    }
    cout<<"So n co "<<sochuso<<" chu so";
    return 0;
}