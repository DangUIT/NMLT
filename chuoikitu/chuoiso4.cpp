// 4. Đếm một ký tự xuất hiện bao nhiêu lần trong chuỗi.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dem = 0;
    char s[100];
    cout << "Nhap chuoi: ";
    gets(s);
    char k;
    cout<<"Nhap ki tu k: ";
    cin>>k;
    for (int i = 0; i < strlen(s) - 1; i++)
    {
        if (s[i] == k)
            dem += 1;
    }
    cout << "So lan xuat hien ki tu " << k << " la: " << dem;
    return 0;
}