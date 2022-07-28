/*
Viết chương trình Nhập vào tháng và năm (năm> 1975),
kiểm tra tính hợp lệ của tháng, năm và cho biết tháng đó có bao nhiêu ngày.
*/

#include <iostream>
using namespace std;
int main()
{
    int thang, nam;
    cout << "Nhap thang(1<=thang<=12): ";
    cin >> thang;
    cout << "Nhap nam(nam>1975): ";
    cin >> nam;
    if (nam < 1975)
        cout << "Nam khong hop le";
    else if (thang < 1 || thang > 12)
        cout << "Thang khong hop le";
    else if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
        cout << "Thang " << thang << " Nam " << nam << " co 31 ngay";
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
        cout << "Thang " << thang << " Nam " << nam << " co 30 ngay";
    else
    {
        if (nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0)
            cout << "Thang " << thang << " Nam " << nam << " co 29 ngay";
        else
            cout << "Thang " << thang << " Nam " << nam << " co 28 ngay";
    }
    return 0;
}