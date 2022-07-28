// 4. Tính tổng các phần tử ở vị trí chẵn trong mảng
#include <iostream>
using namespace std;
void nhapmang(int a[], int &n)
{
    do
    {
        cout << "Nhap so phan tu cua mang: ";
        cin >> n;
    } while (n <= 0);
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}
void xuatmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
int tongvitrichan(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i += 2)
    {

        s += a[i];
    }
    return s;
}
int main()
{
    int n;
    int a[100];
    int x;
    nhapmang(a, n);
    cout << "Tong vi tri chan la: " << tongvitrichan(a, n);
    return 0;
}