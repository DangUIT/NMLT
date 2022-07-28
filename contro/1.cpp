#include <iostream>
using namespace std;
void input(int **&p, int &dong, int &cot)
{
    do
    {
        cout << "Nhap so dong: ";
        cin >> dong;
        cout << "Nhap so cot: ";
        cin >> cot;
        if (dong != cot)
            cout << "Mang khong doi xung qua duong cheo chinh " << endl;
    } while (dong != cot || dong <= 0 || cot <= 0);
    p = new int *[dong];
    for (int i = 0; i < dong; i++)
    {
        p[i] = new int[cot];
    }
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout << "Nhap p[" << i << "][" << j << "] = ";
            cin >> p[i][j];
        }
    }
}
void output(int **p, int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}
void kiemtra(int **p, int dong, int cot)
{
    int flag;
    for (int i = 0; i < dong; i++)
    {
        flag = 1;
        for (int j = 0; j < cot; j++)
        {
            if (p[i][j] != p[j][i])
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
        cout << "Mang doi xung qua duong cheo chinh ";
    else
        cout << "Mang khong doi xung qua duong cheo chinh ";
}
int main()
{
    int **arr;
    int dong, cot;
    input(arr, dong, cot);
    output(arr, dong, cot);
    kiemtra(arr, dong, cot);
    return 0;
}