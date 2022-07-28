#include <iostream>
using namespace std;
typedef struct tinh
{
    // mã tỉnh,	tên tỉnh,	dân số,	diện tích
    int matinh;
    char tentinh[100];
    long long danso;
    float dientich;
} tinh;
// nhập xuất thông tin 1 tỉnh và danh sách tỉnh
void nhapthongtin(tinh thongtin[], int thutu)
{
    cout << "Nhap ma tinh: ";
    cin >> thongtin[thutu].matinh;
    cin.ignore();
    cout << "Nhap ten tinh: ";
    gets(thongtin[thutu].tentinh);
    fflush(stdin);
    cout << "Dan so: ";
    cin >> thongtin[thutu].danso;
    fflush(stdin);
    cout << "Dien tich: ";
    cin >> thongtin[thutu].dientich;
}
void xuatthongtin(tinh thongtin[], int thutu)
{
    cout << "Ma tinh: " << thongtin[thutu].matinh << endl;
    cout << "Ten tinh: " << thongtin[thutu].tentinh << endl;
    cout << "Dan so: " << thongtin[thutu].danso << endl;
    cout << "Dien tich: " << thongtin[thutu].dientich << endl;
}
void dansohon1trieu(tinh thongtin[], int sotinh)
{
    cout << "Tinh co dan so hon 1000000: " << endl;
    for (int i = 1; i <= sotinh; i++)
    {
        if (thongtin[i].danso > 1000000)
        {
            xuatthongtin(thongtin, i);
        }
    }
}
void tinhcodansolonnhat(tinh thongtin[], int sotinh)
{
    cout << "Tinh co dien tich lon nhat: " << endl;
    tinh s = thongtin[0];
    for (int i = 1; i <= sotinh; i++)
    {
        if (thongtin[i].dientich > s.dientich)
            s = thongtin[i];
    }
    cout << "Ma tinh: " << s.matinh << endl;
    cout << "Ten tinh: " << s.tentinh << endl;
    cout << "Dan so: " << s.danso << endl;
    cout << "Dien tich: " << s.dientich << endl;
}
int main()
{
    tinh thongtin[100];
    int sotinh;
    cout << "Nhap so tinh: ";
    cin >> sotinh;
    cout << "-------------------------" << endl;
    for (int i = 1; i <= sotinh; i++)
    {
        nhapthongtin(thongtin, i);
        cout << "-------------------------" << endl;
    }
    for (int i = 1; i <= sotinh; i++)
    {
        xuatthongtin(thongtin, i);
        cout << "----------------------" << endl;
    }
    cout << "---------------------------" << endl;
    dansohon1trieu(thongtin, sotinh);
    cout << "---------------------------" << endl;
    tinhcodansolonnhat(thongtin, sotinh);
    return 0;
}