// Viết chương trình In tất cả các số lẻ nhỏ hơn 50 trừ các số 3,9,31 (có sử dụng câu lệnh continue)

#include <iostream>
using namespace std;
int main()
{
    cout << "Cac so le nho hon 50 tru cac so 3, 9, 31 la: ";
    for (int i = 1; i < 50; i++)
    {
        if ((i % 2 == 0) || (i == 3) || (i == 9) || (i == 31))
        {
            continue;
        }
        else
            cout << i << " ";
    }
    return 0;
}