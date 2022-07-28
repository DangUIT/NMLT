#include <iostream>
using namespace std;

int main()
{
    int x = 2;
    switch (x)
    {
    case 2:
        x = x + 2;
    case 5:
        x = x + 4;

    case 1:
        
    case 3:
        x = x + 3;
    }
    cout << x;
}