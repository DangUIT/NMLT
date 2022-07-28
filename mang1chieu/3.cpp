// Bai3:Tìm vị trí của phần tu có gia trị âm lớn nhất trong mảng số nguyên.
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
int vitriamlonnhat(int a[], int n)
{
    int vitri = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            vitri = i;
            break;
        }
    }
    for (int i = vitri + 1; i < n; i++)
    {
        if (a[i] > a[vitri] && a[i] < 0)
        {
            vitri = i;
        }
    }
    return vitri;
}
int main()
{
    int n;
    int a[1000];
    nhapmang(a, n);
    int VT = vitriamlonnhat(a, n);
    if (VT == -1)
        cout << "Mang khong co gia tri am";
    else
        cout << "Vi tri phan tu co gia tri am lon nhat trong mang so nguyen la: " << VT;
    return 0;
}
