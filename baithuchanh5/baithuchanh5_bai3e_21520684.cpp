#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[100];
    cout << "Nhap chuoi: ";
    gets(s);
    while (s[0] == ' ')
    {
        for (int i = 0; i < strlen(s); i++)
        {
            s[i] = s[i + 1];
        }
    }
    while (s[strlen(s)] == ' ')
    {
        s[strlen(s)] = '\0';
    }
    cout << "Chuoi sau khi xoa: ";
    puts(s);
    return 0;
}
