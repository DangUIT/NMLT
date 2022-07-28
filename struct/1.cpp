#include <iostream>
using namespace std;

struct tinh
{
    char mt[30];
    char ten[100];
    long long ds;
    long long dt;
};

void nhap(tinh t[], int &n)
{
    cout << "===DANH SACH CAC TINH===\n";
    cout << "nhap so luong tinh: ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cout << "\n" << "--Tinh thu " << i+1 << " : ";
        cout << "\n" << "Nhap ma cua tinh: ";
        fflush(stdin);
        gets(t[i].mt);
        cout << "Nhap ten cua tinh: ";
        fflush(stdin);
        gets(t[i].ten);
        cout << "Nhap dan so cua tinh: ";
        cin >> t[i].ds;
        cout << "Nhap dien tich cua tinh: ";
        cin >> t[i].dt;
    }
}

void xuat(tinh t[], int n)
{
    cout << "\n" << "===DANH SACH CAC TINH===\n";
    for(int i=0; i<n; i++)
    {
        cout << "--Tinh thu " << i+1 << " : ";
        cout << "\n" << "Ma cua tinh: " << t[i].mt;
        cout << "\n" << "Ten cua tinh: " << t[i].ten;
        cout << "\n" << "Dan so cua tinh: " << t[i].ds;
        cout << "\n" << "Dien tich cua tinh: " << t[i].dt << endl << endl;
    }
}

void tim(tinh t[], int n)
{
    bool thay = false;
    cout << "Tinh co dan so tren 1 trieu la: " << endl;
    for(int i=0; i<n; i++)
    {
        if(t[i].ds > 1000000)
        {
        cout << "--Tinh thu " << i+1 << " : ";
        cout << "\n" << "Ma cua tinh: " << t[i].mt;
        cout << "\n" << "Ten cua tinh: " << t[i].ten;
        cout << "\n" << "Dan so cua tinh: " << t[i].ds;
        cout << "\n" << "Dien tich cua tinh: " << t[i].dt << endl;
        thay = true;
        }
    }
    if(thay == false) cout << "Khong co tinh nao" << endl;
}

void tim2(tinh t[], int n)
{
    tinh s = t[0];
    cout << "\n" << "Tinh co dien tich lon nhat la: ";
    for(int i=0; i<n; i++)
    {
        if(t[i].dt > s.dt) s = t[i];
    }
    cout << "\n" << "Ma cua tinh: " << s.mt;
    cout << "\n" << "Ten cua tinh: " << s.ten;
    cout << "\n" << "Dan so cua tinh: " << s.ds;
    cout << "\n" << "Dien tich cua tinh: " << s.dt << endl;
}

int main()
{
    tinh t[100];
    int n;
    nhap(t, n);
    xuat(t, n);
    tim(t, n);
    tim2(t,n);
    return 0;
}

