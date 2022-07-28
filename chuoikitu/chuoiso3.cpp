// 3. Đổi chữ xen kẻ 1 chữ hoa và 1 chữ thường. Ví dụ : chuỗi “Abc” ,in ra “aBC"
#include <bits/stdc++.h>
using namespace std;
void nhapchuoi(char s[100])
{
    cout << "Nhap chuoi: ";
    gets(s);
}
void xuatchuoi(char s[100])
{
    cout << "Xuat chuoi: ";
    puts(s);
}
void doixenke(char s[100])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = toupper(s[i]);
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = tolower(s[i]);
    }
}
int main()
{
    char s[100];
    nhapchuoi(s);
    doixenke(s);
    xuatchuoi(s);
    return 0;
}