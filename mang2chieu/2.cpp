// 2.Tính tổng các phần tử trên dòng/cột/toàn mảng/đường chéo chính/nửa trên/nửa dưới
#include <iostream>
using namespace std;
void nhapmang(float a[][100], int &n, int &m)
{

    do
    {
        cout << "Nhap so dong: ";
        cin >> n;
        cout << "Nhap so cot: ";
        cin >> m;
        if (n < 0 || m < 0)
            cout << "Nhap lai" << endl;
    } while (n < 0 || m < 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Nhap a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}
void xuatmang(float a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
float tongdong(float a[][100], int m, int &x)
{
    cout << "Nhap dong can tinh tong: ";
    cin >> x;
    float sum = 0;
    for (int i = 0; i < m; i++)
    {

        sum += a[x][i];
    }
    return sum;
}
float tongcot(float a[][100], int n, int &x)
{
    cout << "Nhap cot can tinh tong: ";
    cin >> x;
    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i][x];
    }
    return sum;
}
float tongtoanmang(float a[][100], int n, int m)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
}
float tongduongcheochinh(float a[][100], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i][i];
    }
    return sum;
}
float tongnuatren(float a[][100], int n, int m)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j >= i)
                sum += a[i][j];
        }
    }
    return sum;
}
float tongnuaduoi(float a[][100], int n, int m)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i >= j)
                sum += a[i][j];
        }
    }
    return sum;
}
int main()
{
    int n, m;
    float a[100][100];
    nhapmang(a, n, m);
    xuatmang(a, n, m);
    int x;
    cout << "Tong dong :" << tongdong(a, m, x) << endl;
    cout << "Tong cot :" << tongcot(a, n, x) << endl;
    cout << "Tong mang :" << tongtoanmang(a, n, m) << endl;
    cout << "Tong duong cheo chinh :" << tongduongcheochinh(a, n) << endl;
    cout << "Tong nua tren :" << tongnuatren(a, n, m) << endl;
    cout << "Tong nua duoi :" << tongnuaduoi(a, n, m) << endl;
    return 0;
}
