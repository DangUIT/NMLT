#include"Sinh vien.h"
sinhvien::sinhvien(){}
sinhvien::~sinhvien(){}
sinhvien::sinhvien(float diemtoan, float diemoop)
{
	this->diemtoan = diemtoan;
	this->diemoop = diemoop;
}
float sinhvien::dtb()
{
	return (diemtoan + diemoop) / 2;
}
float sinhvien::get_toan()
{
	return diemtoan;
}
float sinhvien::get_oop()
{
	return diemoop;
}
void sinhvien::nhap()
{
	cout << "Nhap ho ten: ";
	getline(cin, hoten);
	cout << "Nhap ngay sinh: ";
	getline(cin, ngaysinh);
	cout << "Nhap ma so:  ";
	getline(cin, maso);
	cout << "Nhap diem toan: ";
	cin >> diemtoan;
	cout << "Nhap diem oop: ";
	cin >> diemoop;
}
void sinhvien::xuat()
{
	cout << "Ho ten: " << hoten << endl;
	cout << "Ngay sinh: " << ngaysinh << endl;
	cout << "Ma so: " << maso << endl;
	cout << "Diem mon toan: " << diemtoan << endl;
	cout << "Diem mon oop: " << diemoop << endl;
	cout << "Diem trung binh: " << dtb() << endl;
}