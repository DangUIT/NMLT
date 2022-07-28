#include <iostream>
#include <cmath>
using namespace std;
class diem
{
private:
    float x, y;

public:
    diem();
    diem(float, float);
    ~diem(void);
    void nhap();
    void xuat();
    void setx(float);
    void sety(float);
    diem vector(diem);
    float getx();
    float gety();
    void setxy(float, float);
    void tinhtien(float = 0, float = 0);
    void quay(float);
};

class tamgiac
{
private:
    diem A, B, C;

public:
    tamgiac();
    tamgiac(diem, diem, diem);
    ~tamgiac(void);
    void nhap();
    void xuat();
    void tinhtien(float = 0, float = 0);
    void quay(float);
    void thuphong(float);
};

diem::diem()
{
}
void diem::setx(float a)
{
    x = a;
}
void diem::sety(float a)
{
    y = a;
}
float diem::getx()
{
    return x;
}
float diem::gety()
{
    return y;
}
void diem::setxy(float a, float b)
{
    x = a;
    y = b;
}
diem::diem(float a, float b)
{
    x = a;
    y = b;
}
void diem::nhap()
{
    cout << "\nhoanh do x=";
    cin >> x;
    cout << "tung do y=";
    cin >> y;
}
void diem::xuat()
{
    cout << "( " << x << " , " << y << " )";
}
diem::~diem(void)
{
}
void diem::tinhtien(float a, float b)
{
    x += a;
    y += b;
}
void diem::quay(float rad)
{
    x = x * cos(rad) + y * sin(rad);
    y = x * sin(rad) + y * cos(rad);
}
diem diem::vector(diem a)
{
    diem t;
    t.setx(a.getx() - x);
    t.sety(a.gety() - y);
    return t;
}

tamgiac::tamgiac()
{
}
tamgiac::tamgiac(diem x, diem y, diem z)
{
    A = x;
    B = y;
    C = z;
}
tamgiac::~tamgiac(void)
{
}
void tamgiac::nhap()
{
    int kt;
    do
    {
        kt = 0;
        cout << "\nnhap dinh A";
        A.nhap();
        cout << "\nnhap dinh B";
        B.nhap();
        cout << "\nnhap dinh C";
        C.nhap();
        diem d, e;
        d = A.vector(B);
        e = A.vector(C);
        if (float(d.getx() * e.gety()) == float(d.gety() * e.getx()))
        {
            kt = 1;
            cout << "\ntam giac khong ton tai! nhap lai!";
        }
        cout << "\n";
    } while (kt);
}
void tamgiac::xuat()
{
    cout << "\ntam giac tao boi 3 diem: ";
    A.xuat();
    cout << " , ";
    B.xuat();
    cout << " , ";
    C.xuat();
}
void tamgiac::tinhtien(float m, float n)
{
    A.tinhtien(m, n);
    B.tinhtien(m, n);
    C.tinhtien(m, n);
}
void tamgiac::quay(float rad)
{
    A.quay(rad);
    B.quay(rad);
    C.quay(rad);
}
void tamgiac::thuphong(float k)
{
    A.setxy(A.getx() * k, A.gety() * k);
    B.setxy(B.getx() * k, B.gety() * k);
    C.setxy(C.getx() * k, C.gety() * k);
}

int main()
{
    float x, y, rad, k;
    tamgiac a;
    a.nhap();
    a.xuat();
    cout << "\n\ntinh tien theo vector v(x,y):\nx=";
    cin >> x;
    cout << "y=";
    cin >> y;
    a.tinhtien(x, y);
    a.xuat();
    cout << "\nquay goc: rad=";
    cin >> rad;
    a.quay(rad);
    a.xuat();
    cout << "\nnhap he so thu phong k=";
    cin >> k;
    a.thuphong(k);
    a.xuat();
    system("pause");
    return 0;
}