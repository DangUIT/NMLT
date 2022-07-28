#include <bits/stdc++.h>
#include <fstream>
using namespace std;
// Dung 4 bien
void c1()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << a << " " << b << " " << c << " " << d;
}
// Dung mang
void c2()
{
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3];
}
// Dung mang va vong lap do while
void C3()
{
    int a[4];
    int i = 0;
    do
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
        i++;
    } while (i < 4);
    i = 0;
    do
    {

        cout << a[i] << " ";
        i++;
    } while (i < 4);
}
// Dung mang va vong lap for
void C4()
{
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }
}
// Dung mang, vong lap for gop
void c5()
{
    int a[4], i;
    for (i = 0; i < 4; i++)
    {
        cout << "\nNhap a[" << i << "]: ";
        cin >> a[i];
        cout << "a[" << i << "] = " << a[i];
    }
}
// Dung ham tach rieng phan nhap xuat
void nhap(int a[])
{
    for (int i(0); i < 4; i++)
    {
        cout << "\nNhap phan tu a[" << i << "]: ";
        cin >> a[i];
    }
}
void xuat(int a[])
{
    cout << "Cac phan tu cua mang la: ";
    for (int i(0); i < 4; i++)
    {
        cout << a[i] << " ";
    }
}
void c6()
{
    int b[4];
    nhap(b);
    xuat(b);
}
// Dung file de nhap xuat tu file
void c7()
{
    ifstream file;
    file.open("test.txt");
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        file >> a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }
    file.close();
}
int main()
{
    int x;
    while (60)
    {
        cout << "\t\tChuong trinh" << endl;
        cout << "1.Dung 4 bien" << endl;
        cout << "2.Dung mang" << endl;
        cout << "3.Dung mang va vong lap do while" << endl;
        cout << "4.Dung mang va vong lap for" << endl;
        cout << "5.Dung mang, vong lap for gop" << endl;
        cout << "6.Dung ham tach rieng phan nhap xuat" << endl;
        cout << "7.Dung file de nhap xuat tu file" << endl;
        cout << "8.Thoat" << endl;
        cout << "\nNhap cach viet: ";
        cin >> x;
        if (x == 1)
        {
            c1();
        }
        else if (x == 2)
        {
            c2();
        }
        else if (x == 3)
        {
            C3();
        }
        else if (x == 4)
        {
            C4();
        }
        else if (x == 5)
        {
            c5();
        }
        else if (x == 6)
        {
            c6();
        }
        else if (x == 7)
        {
            c7();
        }
        else
            break;
        cout <<"\n\n\n";
    }

    return 0;
}