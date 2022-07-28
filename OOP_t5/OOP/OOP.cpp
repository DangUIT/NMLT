#include"Lop hoc.h"
#include"Sinh vien.h"
int main()
{
	lophoc a;
	a.nhapds();
	cout << "\n------------------------------Lop hoc-------------------------------" << endl;
	a.xuatds();
	a.top4toan();
	a.top2oop();
	a.maxdtb();
	a.mindtb();
	return 0;
}