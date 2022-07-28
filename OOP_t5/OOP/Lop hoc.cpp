#include"Lop hoc.h"
#include"Sinh vien.h"
lophoc::lophoc(){}
lophoc::~lophoc()
{
	delete[]sv;
}
void lophoc::nhapds()
{
	cout << "Nhap so sinh vien: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << endl;
		cout << "Nhap thong tin sinh vien thu " << i << ": " << endl;
		cin.ignore();
		sv[i].nhap();
	}
}
void lophoc::xuatds()
{
	for (int i = 1; i <= n; i++)
	{
		cout << endl;
		cout << "Sinh vien " << i << ": " << endl;
		sv[i].xuat();
	}
}
void lophoc::top4toan()
{
	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (sv[i].get_toan() < sv[j].get_toan())
				swap(sv[i], sv[j]);
		}
	}
	cout << "\n----------------------Top 4 sinh vien diem toan cao nhat--------------------------- " << endl;
	if (n <= 4)
	{
		for (int i = 1; i <= n; i++)
		{
			sv[i].xuat();
			cout << endl;
		}
	}
	else
	{
		for (int i = 1; i <= 4; i++)
		{
			sv[i].xuat();
			cout << endl;
		}
	}
}
void lophoc::top2oop()
{
	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (sv[i].get_oop() < sv[j].get_oop())
				swap(sv[i], sv[j]);
		}
	}
	cout << "\n----------------------Top 2 sinh vien diem oop cao nhat--------------------------- " << endl;
	if (n <= 2)
	{
		for (int i = 1; i <= n; i++)
		{
			sv[i].xuat();
			cout << endl;
		}
	}
	else
	{
		for (int i = 1; i <= 2; i++)
		{
			sv[i].xuat();
			cout << endl;
		}
	}
}
void lophoc::maxdtb()
{
	cout << "\n----------------------Sinh vien co diem trung binh cao nhat--------------------------- " << endl;
	sinhvien max = sv[1];
	for (int i = 2; i <= n; i++)
	{
		if (sv[i].dtb() > max.dtb())
			max = sv[i];
	}
	max.xuat();
}
void lophoc::mindtb()
{
	cout << "\n----------------------Sinh vien co diem trung binh thap nhat--------------------------- " << endl;
	sinhvien min = sv[1];
	for (int i = 2; i <= n; i++)
	{
		if (sv[i].dtb() < min.dtb())
			min = sv[i];
	}
	min.xuat();
}