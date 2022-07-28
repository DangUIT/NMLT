// 4.Tính tổng 2 ma trận (mảng được xem là ma trận)
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
void tong2matran(float a[][100], float b[][100], float c[][100], int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
int main()
{
    int dong, cot;
    float a[100][100], b[100][100], c[100][100];
    nhapmatran(a, dong, cot);
    xuatmatran(a, dong, cot);
    nhapmatran(b, dong, cot);
    xuatmatran(b, dong, cot);
    tong2matran(a, b, c, dong, cot);
    cout << "Tong 2 ma tran la: "<<endl;
    xuatmatran(c, dong, cot);
    return 0;
}
