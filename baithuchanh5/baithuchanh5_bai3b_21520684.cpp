#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[100];
    cout << "Nhap chuoi: ";
    gets(s);
    cout << "Dao nguoc chuoi: ";
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        cout << s[i];
    }
    return 0;
}
