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
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
bool kiemtrasnt(int &x)
{
    if (x < 2)
        return false;
    else if (x == 2)
        return true;
    else
    {
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
                return false;
        }
    }
    return true;
}
int main()
{
    int dong, cot;
    int a[100][100];
    nhapmang(a, dong, cot);
    xuatmang(a, dong, cot);
    cout << "Cac so nguyen to trong mang la: " << endl;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (kiemtrasnt(a[i][j]) == true)
                cout << a[i][j] << " ";
        }
    }
    return 0;
}