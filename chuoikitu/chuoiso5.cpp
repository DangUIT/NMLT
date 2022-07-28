// 5. Tìm kiếm xem ký tự nào xuất nhiện nhiều nhất trong chuỗi.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cout << "Nhap chuoi s: ";
    gets(s);
    char k;
    int dem = 1;
    int max;
    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = i + 1; j < strlen(s); j++)
        {
            if (s[j] == s[i] && dem > max)
            {
                max = dem;
                dem += 1;
                k = s[j];
            }
        }
    }
    cout << "Ki tu xuat hien nhieu nhat la: " << k;
    return 0;
}