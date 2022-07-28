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
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}

void tongdong(int **p, int dong, int cot)
{

    for (int i = 0; i < dong; i++)
    {
        int sum = 0;
        for (int j = 0; j < cot; j++)
        {
            sum += p[i][j];
        }
        cout << "Tong dong " << i << ": " << sum << endl;
    }
}
void tongcot(int **p, int dong, int cot)
{
    int sum = 0;
    for (int i = 0; i < cot; i++)
    {
        int sum = 0;
        for (int j = 0; j < dong; j++)
        {
            sum += p[j][i];
        }
        cout << "Tong cot " << i << ": " << sum << endl;
    }
}
int tongtoanmang(int **p, int dong, int cot)
{
    int sum = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            sum += p[i][j];
        }
    }
    return sum;
}
int tongduongcheochinh(int **p, int dong, int cot)
{
    int sum = 0;
    for (int i = 0; i < dong; i++)
    {
        sum += p[i][i];
    }
    return sum;
}
int tongnuatren(int **p, int dong, int cot)
{
    int sum = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (j >= i)
                sum += p[i][j];
        }
    }
    return sum;
}
int tongnuaduoi(int **p, int dong, int cot)
{
    int sum = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (j <= i)
                sum += p[i][j];
        }
    }
    return sum;
}
int main()
{
    int **arr;
    int dong, cot;
    do
    {
        cout << "Nhap so dong: ";
        cin >> dong;
        cout << "Nhap so cot: ";
        cin >> cot;
    } while (dong != cot || dong <= 0 || cot <= 0);
    arr = new int *[dong];
    for (int i = 0; i < dong; i++)
    {
        arr[i] = new int[cot];
    }
    input(arr, dong, cot);
    output(arr, dong, cot);
    tongdong(arr, dong, cot);
    tongcot(arr, dong, cot);
    cout << "Tong toan mang: " << tongtoanmang(arr, dong, cot) << endl;
    cout << "Tong duong cheo chinh: " << tongduongcheochinh(arr, dong, cot) << endl;
    cout << "Tong nua tren: " << tongnuatren(arr, dong, cot) << endl;
    cout << "Tong nua duoi: " << tongnuaduoi(arr, dong, cot);
    for (int i = 0; i < dong; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
