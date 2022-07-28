// Viết chương trình Nhập vào 3 số thực a, b, c. In ra theo thứ tự tăng dần.

#include <iostream>
using namespace std;
void sapxep(float& a, float& b, float& c)
{
	if (a > b)
	{
		int x = a;
		a = b;
		b = x;
	}
	if (a > c)
	{
		int x = a;
		a = c;
		c = x;
	}
	if (b > c)
	{
		int x = b;
		b = c;
		c = x;
	}
	return;
}

int main()
{
	float a, b, c;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	sapxep(a, b, c);
	cout << "Sap xep tang dan: ";
	cout << a << " " << b << " " << c << endl;
	return 0;
}