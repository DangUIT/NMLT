#include <iostream>
using namespace std;
int main()
{
	int *a, *c, *d;
	int b = 2, e = 3, f = 4;
	a = &b;
	c = &e;
	d = &f;
   &a= &a+&c+&d;
	cout << *a;
}