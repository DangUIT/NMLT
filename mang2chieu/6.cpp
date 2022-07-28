/* 6. Kiểm tra ma trận có phải là ma trận đơn vị không? (mảng được xem là ma trận)*/
#include <iostream>
using namespace std;
void nhapmang(float a[][100], int &dong, int &cot)
{
    do
    {
        cout << "Nhap so dong:";
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
void xuatmang(float a[][100], int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int kiemtra(float a[][100], int dong, int cot)
{
    if (dong != cot)
        return 0;
    for (int i = 0; i < dong; i++)
    {
        if (a[i][i] != 1)
            return 0;
    }
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (i == j)
            {
                if (a[i][i] != 1)
                    return 0;
            }
            else
            {
                if (a[i][j] != 0 || a[j][i] != 0)
                    return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int dong, cot;
    float a[100][100];
    nhapmang(a, dong, cot);
    xuatmang(a, dong, cot);
    if (kiemtra(a, dong, cot) == 1)
        cout << "Ma tran don vi";
    else
        cout << "Khong phai la ma tran don vi";
    return 0;
}