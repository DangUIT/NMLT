// Câu 3. Khai báo kiểu dữ liệu điểm (DIEM) trong mặt phẳng OXY. Viết các hàm sau :
// a. Nhập, Xuất tọa độ điểm
// b. Tính khoảng cách giữa hai điểm
// c. Tìm điểm đối xứng qua gốc tọa độ
// d. Tìm điểm đối xứng qua trục Ox, trục Oy
#include <iostream>
#include <cmath>
using namespace std;
typedef struct diem
{
    char name[100];
    int x;
    int y;
} diem;
void nhap(diem &toado)
{
    cout << "Nhap ten diem: ";
    gets(toado.name);
    fflush(stdin);
    cout << "Nhap toa do diem ";
    cin >> toado.x >> toado.y;
    fflush(stdin);
}
void xuat(diem toado)
{
    cout << "Toa do diem " << toado.name << ": (" << toado.x << "," << toado.y << ") ";
}
void khoangcach(diem toado1, diem toado2)
{
    diem kc;
    kc.x = pow((toado1.x - toado2.x), 2);
    kc.y = pow((toado1.y - toado2.y), 2);
    cout << "Khoang cach giua 2 diem la: " << sqrt(kc.x + kc.y);
}
void diemdoixungquaO(diem toado)
{
    cout << "Diem doi xung voi " << toado.name << " qua goc toa do la: " << toado.name << "'"
         << "(" << toado.x * (-1) << "," << toado.y * (-1) << ")";
}
void doixungquaOxOy(diem toado)
{
    cout << "Diem doi xung voi " << toado.name << " qua truc Ox: " << toado.name << "'"
         << "(" << toado.x << "," << toado.y * (-1) << ")" << endl;
    cout << "Diem doi xung voi " << toado.name << " qua truc Oy: " << toado.name << "'"
         << "(" << toado.x * (-1) << "," << toado.y << ")" << endl;
}
int main()
{
    diem a, b;
    cout << "Cau a)" << endl;
    nhap(a);
    xuat(a);
    cout << endl;
    nhap(b);
    xuat(b);
    cout << "\nCau b)" << endl;
    khoangcach(a, b);
    cout << "\nCau c)" << endl;
    diemdoixungquaO(a);
    cout << endl;
    diemdoixungquaO(b);
    cout << "\nCau d)" << endl;
    doixungquaOxOy(a);
    cout << endl;
    doixungquaOxOy(b);
    cout << endl;
    system("pause");
    return 0;
}