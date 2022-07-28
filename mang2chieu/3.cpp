// 3.Tìm giá trị nhỏ nhất/lớn nhất của mảng
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
float max(float a[][100], int dong, int cot)
{
    float max = a[0][0];
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (a[i][j] > a[0][0])
                max = a[i][j];
        }
    }
    return max;
}
float min(float a[][100], int dong, int cot)
{
    float min = a[0][0];
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (a[i][j] < a[0][0])
                min = a[i][j];
        }
    }
    return min;
}
int main()
{
    int dong, cot;
    float a[100][100];
    nhapmang(a, dong, cot);
    xuatmang(a, dong, cot);
    cout << "Gia tri lon nhat cua mang la: " << max(a, dong, cot) << endl;
    cout << "Gia tri nho nhat cua mang la: " << min(a, dong, cot);
    return 0;
}