#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[100];
    cout << "Nhap chuoi: ";
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            cout << s[i] << " ";
    }
    return 0;
}
