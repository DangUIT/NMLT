#include <iostream>
using namespace std;
typedef struct phanso
{
    float tuso;
    float mauso;
} phanso;
void nhap(phanso &p)
{
    cout << "Nhap tu so: ";
    cin >> p.tuso;
    fflush(stdin);
    do
    {
        cout << "Nhap mau so: ";
        cin >> p.mauso;
        if (p.mauso == 0)
            cout << "Mau so phai khac 0" << endl;
    } while (p.mauso == 0);
}
void xuat(phanso &p)
{
    if (p.mauso < 0)
    {
        p.tuso *= -1;
        p.mauso *= -1;
    }
    cout << "Phan so: " << p.tuso << "/" << p.mauso << endl;
}
void tong(phanso p1, phanso p2)
{
    phanso ketqua;
    ketqua.tuso = p1.tuso * p2.mauso + p1.mauso * p2.tuso;
    ketqua.mauso = p1.mauso * p2.mauso;
    cout << "Tong 2 phan so la: " << ketqua.tuso << "/" << ketqua.mauso << endl;
}
void hieu(phanso p1, phanso p2)
{
    phanso ketqua;
    if (p1.tuso == p2.tuso && p1.mauso == p2.mauso)
        cout << "Hieu 2 phan so la: 0" << endl;
    else
    {
        ketqua.tuso = p1.tuso * p2.mauso - p1.mauso * p2.tuso;
        ketqua.mauso = p1.mauso * p2.mauso;
        cout << "Hieu 2 phan so la: " << ketqua.tuso << "/" << ketqua.mauso << endl;
    }
}
void tich(phanso p1, phanso p2)
{
    phanso ketqua;
    ketqua.tuso = p1.tuso * p2.tuso;
    ketqua.mauso = p1.mauso * p2.mauso;
    if (ketqua.mauso < 0)
    {
        ketqua.tuso *= -1;
        ketqua.mauso *= -1;
    }
    cout << "Tich 2 phan so la: " << ketqua.tuso << "/" << ketqua.mauso << endl;
}
void thuong(phanso p1, phanso p2)
{
    phanso ketqua;
    ketqua.tuso = p1.tuso * p2.mauso;
    ketqua.mauso = p1.mauso * p2.tuso;
    if (ketqua.mauso < 0)
    {
        ketqua.tuso *= -1;
        ketqua.mauso *= -1;
    }
    cout << "Hieu 2 phan so la: " << ketqua.tuso << "/" << ketqua.mauso << endl;
}
int main()
{
    phanso phanso1;
    phanso phanso2;
    cout << "Cau a: " << endl;
    cout << "----------------------" << endl;
    cout << "Phan so thu 1: " << endl;
    nhap(phanso1);
    xuat(phanso1);
    cout << "\nPhan so thu 2: " << endl;
    nhap(phanso2);
    xuat(phanso2);
    cout << "***********************" << endl;
    cout << "Cau b: " << endl;
    cout << "--------------------------" << endl;
    tong(phanso1, phanso2);
    hieu(phanso1, phanso2);
    cout << "***********************" << endl;
    cout << "Cau c: " << endl;
    cout << "--------------------------" << endl;
    tich(phanso1, phanso2);
    thuong(phanso1, phanso2);
    return 0;
}