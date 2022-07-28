#include <iostream>
using namespace std;
void input(int **&p, int dong, int cot)
{
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
    cout << "Ma tran: " << endl;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}
int matrandonvi(int **p, int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (i == j)
            {
                if (p[i][i] != 1)
                    return 0;
            }
            else
            {
                if (p[i][j] != 0)
                    return 0;
            }
        }
    }
}
int main()
{
    int dong, cot;
    int **arr;
    arr = new int *[dong];
    do
    {
        cout << "Nhap so dong: ";
        cin >> dong;
        cout << "Nhap so cot: ";
        cin >> cot;
        if (dong != cot)
            cout << "Khong phai ma tran don vi " << endl;
    } while (dong <= 0 || cot <= 0 || dong != cot);

    for (int i = 0; i < dong; i++)
    {
        arr[i] = new int[cot];
    }
    input(arr, dong, cot);
    output(arr, dong, cot);
    if (matrandonvi(arr, dong, cot) == 0)
        cout << "Khong phai ma tran don vi";
    else
        cout << "Ma tran don vi";
    for (int i = 0; i < dong; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}