#include <iostream>
using namespace std;
void input(int *&p, int &n)
{
    do
    {
        cout << "Nhap so phan tu cua mang: ";
        cin >> n;
    } while (n <= 0);
    p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap p[" << i << "] = ";
        cin >> p[i];
    }
}
void output(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
}
void sumofarr(int *p, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p[i];
    }
    cout << "Tong cac phan tu cua mang: " << sum;
}
void swap(int &a, int &b)
{
    if (a < b)
    {
        int c = a;
        a = b;
        b = c;
    }
}
void sort(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (p[i] < p[j])
                swap(p[i], p[j]);
        }
    }
    output(p, n);
}
void countofx(int *p, int n, int &x)
{
    cout << "Nhap phan tu x: ";
    cin >> x;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i] == x)
            count++;
    }
    cout << "So lan xuat hien cua x: " << count;
}
void evenless20(int *p, int n)
{
    cout << "Cac phan tu chan nho hon 20: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (p[i] % 2 == 0 && p[i] < 20)
            cout << p[i] << " ";
    }
}
void vitri(int *p, int n)
{
    int min = p[0], flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i] < min)
        {
            min = p[i];
            flag = i;
        }
    }
    cout << "Vi tri phan tu nho nhat: " << flag;
}
void daonguoc(int *p, int n)
{
    cout << "Dao nguoc: " << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << p[i] << " ";
    }
}
int main()
{
    int n;
    int x;
    int *arr;
    cout << "-------------Cau a: " << endl;
    input(arr, n);
    cout << "Mang mot chieu: " << endl;
    output(arr, n);
    cout << "\n-------------Cau b: " << endl;
    sumofarr(arr, n);
    cout << "\n-------------Cau d: " << endl;
    countofx(arr, n, x);
    cout << "\n-------------Cau e: " << endl;
    evenless20(arr, n);
    cout << "\n-------------Cau f: " << endl;
    vitri(arr, n);
    cout << "\n-------------Cau g: " << endl;
    daonguoc(arr, n);
    cout << "\n-------------Cau c: " << endl;
    cout << "Sap xep giam dan: " << endl;
    sort(arr, n);
    delete[] arr;
    return 0;
}