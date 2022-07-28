#include <iostream>
using namespace std;
class thoigian
{
private:
    int gio;
    int phut;
    int giay;

public:
    void nhap();
    void xuat();
    thoigian cong(thoigian x);
    thoigian hieu(thoigian x);
};
void thoigian::nhap()
{
    cout << "\nNhap gio: ";
    cin >> gio;
    cout << "\nNhap phut: ";
    cin >> phut;
    cout << "\nNhap giay: ";
    cin >> giay;
}
void thoigian::xuat()
{
    long long x = gio * 3600 + phut * 60 + giay;
    int gio1 = x / 3600;
    int phut1 = (x % 3600) / 60;
    int giay1 = x - gio1 * 3600 - phut1 * 60;
    cout << gio1 << " gio " << phut1 << " phut " << giay1 << " giay " << endl;
}
thoigian thoigian::cong(thoigian x)
{
    thoigian ketqua;
    ketqua.giay = giay + x.giay;
    ketqua.phut = phut + x.phut;
    ketqua.gio = gio + x.gio;
    return ketqua;
}
thoigian thoigian::hieu(thoigian x)
{
    thoigian ketqua;
    ketqua.giay = giay - x.giay;
    ketqua.phut = phut - x.phut;
    ketqua.gio = gio - x.gio;
    return ketqua;
}
int main()
{
    thoigian a;
    cout << "Thoi gian A:" << endl;
    a.nhap();
    a.xuat();
    thoigian b;
    cout << "Thoi gian B:" << endl;
    b.nhap();
    b.xuat();
    thoigian c = a.cong(b);
    cout << "\nTong thoi gian: " << endl;
    c.xuat();
    thoigian d = a.hieu(b);
    cout << "\nHieu thoi gian: " << endl;
    d.xuat();
    return 0;
}
