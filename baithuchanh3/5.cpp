// 5. Viết chương trình in bảng cửu chương ra màn hình.
#include <iostream>
using namespace std;
int main()
{
    cout << "Bang cuu chuong "<<endl;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 9; j++)
            cout << j << " * " << i << " = " << j * i << "\t";
        cout << "\n";
    }

    return 0;
}