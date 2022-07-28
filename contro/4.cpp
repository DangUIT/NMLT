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
void thuhoi(int **p, int dong)
{
    for (int i = 0; i < dong; i++)
    {
        delete[] p[i];
    }
    delete[] p;
}
void sumof2arr(int **p, int **p1, int **p2, int dong, int cot)
{
    p = new int *[dong];
    for (int i = 0; i < dong; i++)
    {
        p[i] = new int[cot];
    }
    cout << "Tong 2 ma tran: " << endl;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            p[i][j] = p1[i][j] + p2[i][j];
        }
    }
    output(p, dong, cot);
}

int main()
{
    int dong1, cot1, dong2, cot2;
    int **arr1, **arr2;
    int **arr;
    do
    {
        cout << "Nhap so dong: ";
        cin >> dong1;
        cout << "Nhap so cot: ";
        cin >> cot1;
    } while (dong1 <= 0 || cot1 <= 0);
    input(arr1, dong1, cot1);
    output(arr1, dong1, cot1);
    do
    {
        cout << "Nhap so dong: ";
        cin >> dong2;
        cout << "Nhap so cot: ";
        cin >> cot2;
    } while (dong2 <= 0 || cot2 <= 0);
    input(arr2, dong2, cot2);
    output(arr2, dong2, cot2);
    if (dong1 != dong2 || cot1 != cot2)
        cout << "Khong tinh duoc";
    else
        sumof2arr(arr, arr1, arr2, dong1, cot1);
    if (arr != NULL)
        thuhoi(arr, dong1);
    if (arr1 != NULL)
        thuhoi(arr1, dong1);
    if (arr2 != NULL)
        thuhoi(arr2, dong1);
    return 0;
}
