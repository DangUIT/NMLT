#include <iostream>
using namespace std;

class sophuc
{
private:
    float thuc, ao;

public:
    sophuc() {}
    sophuc(float t, float a)
    {
        thuc = t;
        ao = a;
    }
    void nhap();
    void xuat();
    void cong(sophuc a);
    void tru(sophuc a);
    void nhan(sophuc a);
    void chia(sophuc a);
    ~sophuc(){};
};

void sophuc::nhap()
{
    cout << "Nhap phan lan luot phan thuc ao so phuc : ";
    cin >> thuc >> ao;
}

void sophuc::xuat()
{
    cout << "(" << thuc << " ";
    if (ao >= 0)
        cout << "+ " << ao << "i)";
    else
        cout << ao << "i)";
}

void sophuc::cong(sophuc a)
{
    thuc += a.thuc;
    ao += a.ao;
}

void sophuc::tru(sophuc a)
{
    thuc -= a.thuc;
    ao -= a.ao;
}
void sophuc::nhan(sophuc a)
{
    sophuc z;
    z.thuc = thuc * a.thuc - ao * a.ao;
    z.ao = thuc * a.ao + ao * a.thuc;
    *this = z;
}

void sophuc::chia(sophuc a)
{
    sophuc z;
    z.thuc = (thuc * a.thuc + ao * a.ao) / (a.thuc * a.thuc + a.ao * a.ao);
    z.ao = (ao * a.thuc - thuc * a.ao) / (a.thuc * a.thuc + a.ao * a.ao);
    *this = z;
}

int main()
{
    sophuc a, b, z;
    a.nhap();
    b.nhap();

    z = a;
    z.cong(b);
    a.xuat();
    cout << " + ";
    b.xuat();
    cout << " = ";
    z.xuat();
    cout << endl;

    z = a;
    z.tru(b);
    a.xuat();
    cout << " - ";
    b.xuat();
    cout << " = ";
    z.xuat();
    cout << endl;

    z = a;
    z.nhan(b);
    a.xuat();
    cout << " * ";
    b.xuat();
    cout << " = ";
    z.xuat();
    cout << endl;

    z = a;
    z.chia(b);
    a.xuat();
    cout << " / ";
    b.xuat();
    cout << " = ";
    z.xuat();
    cout << endl;
    return 0;
}