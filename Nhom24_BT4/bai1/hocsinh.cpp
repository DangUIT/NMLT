#include "hocsinh.h"
#include <iostream>
#include <string.h>
#include <string>
using namespace std;
void hocsinh::nhap()
{
	cout << "Nhap ma so hoc sinh: ";
	cin >> a;
	cout << "Nhap ho ten hoc sinh: ";
	cin >> b;
	cout << "Nhap diem toan: ";
	cin >> toan;
	cout << "Nhap diem van: ";
	cin >> van;
}
void hocsinh::xuat()
{
	cout << "Ma so hoc sinh: " << a << endl;
	cout << "Ho ten hoc sinh: " << b << endl;
	cout << "Diem toan:" << toan <<endl;
	cout << "Diem van: " << van <<endl;
}