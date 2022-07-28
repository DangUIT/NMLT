// 5.Tính tích 2 ma trận (mảng được xem là ma trận)
#include <iostream>
using namespace std;
void nhapmatran(float a[][100], int &dong, int &cot)
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
void xuatmatran(float a[][100], int dong, int cot)
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
void tich2matran(float a[][100], float b[][100], float c[][100], int donga, int cota, int cotb)
{
    for (int i = 0; i < donga; i++)
    {
        for (int j = 0; j < cotb; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < cota; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
int main()
{
    int donga, cota, cotb;
    float a[100][100], b[100][100], c[100][100];
    nhapmatran(a, donga, cota);
    xuatmatran(a, donga, cota);
    nhapmatran(b, cota, cotb);
    xuatmatran(b, cota, cotb);
    tich2matran(a, b, c, donga, cota,cotb);
    cout << "Tich 2 ma tran la: " << endl;
    xuatmatran(c, donga, cotb);
    return 0;
}
