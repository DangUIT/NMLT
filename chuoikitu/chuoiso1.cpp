// 1. Xuất các ký tự in hoa trong chuỗi. Ví dụ : chuỗi “Abc” ,in ra ký tự A
#include <iostream>
#include <string.h>
using namespace std;
void nhapchuoi(char s[100])
{
    cout << "Nhap chuoi: ";
    gets(s);
}
void xuatKTH(char s[100])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            cout << s[i];
    }
}
int main()
{
    char s[100];
    nhapchuoi(s);
    cout<<"Ki tu hoa: ";
    xuatKTH(s);
    return 0;
}