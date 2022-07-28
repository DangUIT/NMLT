#pragma once
#include<iostream>
#include<string>
using namespace std;
class sinhvien
{
private:
	string hoten;
	string ngaysinh;
	string maso;
	float diemtoan, diemoop;
public:
	sinhvien();
	sinhvien(float diemtoan, float diemoop);
	~sinhvien();
	float dtb();
	float get_toan();
	float get_oop();
	void nhap();
	void xuat();
};