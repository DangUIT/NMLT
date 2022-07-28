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
int main()
{
    int dong, cot;
    int a[100][100];
    nhapmang(a, dong, cot);
    int max = a[0][0];
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
        }
    }
    cout << "Phan tu lon nhat cua mang la: " << max;
    return 0;
}