#pragma once
#include"Sinh vien.h"
class lophoc
{
private:
	int n;
	sinhvien* sv = new sinhvien[100];
public:
	lophoc();
	~lophoc();
	void nhapds();
	void xuatds();
	void top4toan();
	void top2oop();
	void maxdtb();
	void mindtb();
};