// 2. Đảo ngược các kí tự trong chuỗi. Ví dụ : chuỗi “abc” thành “cba"
#include <bits/stdc++.h>
using namespace std;
void nhapchuoi(char s[100])
{
    cout << "Nhap chuoi: ";
    gets(s);
}
void xuatchuoi(char s[100])
{
    cout<<"Xuat chuoi: ";
    puts(s);
}
int main()
{
    char s[100];
    nhapchuoi(s);
    strrev(s);
    xuatchuoi(s);
    return 0;
}