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
        if (i % 2 == 0)
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
    }
    puts(s);
    return 0;
}
