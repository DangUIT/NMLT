#include <iostream>
using namespace std;
void nhapmang(int a[][100], int &dong, int &cot)
{
    do
    {
        cout << "Nhap so dong: ";
        cin >> dong;
        cout << "Nhap so cot: ";
        cin >> cot;
    } while (dong <= 0 || cot <= 0);
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout << "Nhap a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}
void xuatmang(int a[][100], int dong, int cot)
{
    cout << "Ma tran: " << endl;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int nhonhattren1dong(int a[][100], int dong, int cot, int k)
{
    int min = a[k][0];
    for (int i = 0; i < cot; i++)
    {
        if (a[k][i] < min)
            min = a[k][i];
    }
    return min;
}
void nhonhattungdong(int a[][100], int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        cout << "Gia tri nho nhat dong " << i << ": " << nhonhattren1dong(a, dong, cot, i) << endl;
    }
}
int main()
{
    int dong, cot;
    int a[100][100];
    nhapmang(a, dong, cot);
    xuatmang(a, dong, cot);
    nhonhattungdong(a, dong, cot);
    return 0;
}