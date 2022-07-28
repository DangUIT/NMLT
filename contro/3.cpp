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
void min_max(int **p, int dong, int cot)
{

    int min = p[0][0];
    int max = p[0][0];
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (p[i][j] > max)
                max = p[i][j];
            if (p[i][j] < min)
                min = p[i][j];
        }
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min;
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
    } while (dong <= 0 || cot <= 0);

    for (int i = 0; i < dong; i++)
    {
        arr[i] = new int[cot];
    }
    input(arr, dong, cot);
    output(arr, dong, cot);
    min_max(arr, dong, cot);
    for (int i = 0; i < dong; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}