// 1.Kiểm tra mảng có đối xứng qua đường chéo chính hay không?
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
bool doixung(float a[][100], int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (a[i][j] != a[j][i])
                return false;
        }
    }
    return true;
}
int main()
{
    int dong, cot;
    float a[100][100];
    nhapmang(a, dong, cot);
    xuatmang(a, dong, cot);
    if (doixung(a, dong, cot) == true)
        cout << "Mang doi xung";
    else
        cout << "Mang khong doi xung";
    return 0;
}