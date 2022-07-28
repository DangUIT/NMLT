#include <iostream>
using namespace std;
void input(int **&p, int &dong, int &cot)
{
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
void mutiplyofmatrix(int **p, int **p1, int dong1, int cot1, int **p2, int dong2, int cot2)
{
    p = new int *[dong1];
    for (int i = 0; i < dong1; i++)
    {
        p[i] = new int[cot2];
    }
    cout << "Mutiply: " << endl;
    for (int i = 0; i < dong1; i++)
    {
        for (int j = 0; j < cot2; j++)
        {
            p[i][j] = 0;
            for (int k = 0; k < cot1; k++)
            {
                p[i][j] += p1[i][k] * p2[k][j];
            }
        }
    }
    output(p, dong1, cot2);
}
int main()
{
    int **arr, **arr1, **arr2;
    int dong1, cot1, dong2, cot2;
    do
    {
        cout << "Nhap so dong ma tran 1: ";
        cin >> dong1;
        cout << "Nhap so cot ma tran 1: ";
        cin >> cot1;
    } while (dong1 <= 0 || cot1 <= 0);
    input(arr1, dong1, cot1);
    output(arr1, dong1, cot1);
    do
    {
        cout << "Nhap so dong ma tran 2: ";
        cin >> dong2;
        cout << "Nhap so cot ma tran 2: ";
        cin >> cot2;
    } while (dong2 <= 0 || cot2 <= 0);
    input(arr2, dong2, cot2);
    output(arr2, dong2, cot2);
    if (cot1 != dong2)
        cout << "Khong the tinh duoc";
    else
        mutiplyofmatrix(arr, arr1, dong1, cot1, arr2, dong2, cot2);
    for (int i = 0; i < dong1; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    for (int i = 0; i < dong1; i++)
    {
        delete[] arr1[i];
    }
    delete[] arr1;
    for (int i = 0; i < dong2; i++)
    {
        delete[] arr2[i];
    }
    delete[] arr2;
    return 0;
}