// 6. Kiểm tra xem chuỗi có đối xứng hay không? Ví dụ : “121” là đối xứng , “abc” : không đối xứng
#include <iostream>
#include <string.h>
using namespace std;
int kiemtra(char s[100])
{

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != s[strlen(s) - i - 1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char s[100];
    cout << "Nhap chuoi: ";
    gets(s);
    if (kiemtra(s) == 1)
        cout << "Chuoi doi xung ";
    else
        cout << "Chuoi khong doi xung ";
    return 0;
}