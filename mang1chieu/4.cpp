/*
 Viết hàm xóa phần tử có chỉ số k trong mảng số nguyên a có n phần tử. Nếu giá trị của k<0 hoặc k>=n thì
không xóa và hàm trả về giá trị 0. Ngược lại ta xóa giá trị phần tử a[k] và hàm trả về giá trị 1.
*/
#include <iostream>
using namespace std;
void nhapmang(int a[], int &n)
{
    do
    {
        cout << "Nhap so phan tu cua mang: ";
        cin >> n;
        if (n <= 0)
            cout << "Nhap lai" << endl;
    } while (n <= 0);
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap A[" << i << "] = ";
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
int xoagiatri(int a[], int n, int k)
{
    if (k < 0 || k >= n)
        return 0;
    else
    {
        for (int i = k; i < n; i++)
        {
            (a[i] = a[i + 1]);
        }

        return 1;
    }
}
int main()
{
    int n;
    int a[1000];
    nhapmang(a, n);
    int k;
    cout << "Nhap chi so k: ";
    cin >> k;
    if (xoagiatri(a, n, k) == 0)
    {
        cout << "Khong co phan tu nao bi xoa" << endl;
        xuatmang(a, n);
    }
    else
    {
        cout << "Mang sau khi xoa: " << endl;
        n--;
        xuatmang(a, n);
    }
    return 0;
}
