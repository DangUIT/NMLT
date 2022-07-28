#include <iostream>
#include <string.h>
using namespace std;
int kiemtra(char s[], int i)
{
    int kt = 0;
    for (int j = 0; j <= i; j++)
        if (s[i] == s[j])
            kt++;
    if (kt > 1)
        return 0;
    return 1;
}
int dem(char s[], int i)
{
    int dem = 0;
    for (int j = i; j < strlen(s); j++)
    {
        if (s[i] == s[j])
            dem++;
    }
    return dem;
}
int main()
{
    char s[100];
    cout << "Nhap vao chuoi: ";
    gets(s);
    cout << "Ki tu xuat hien 1 lan: " << endl;
    for (int i = 0; i < strlen(s); i++)
    {
        if ((kiemtra(s, i)) == 1)
        {
            if (dem(s, i) == 1)
                cout << s[i] << endl;
        }
    }
    return 0;
}
