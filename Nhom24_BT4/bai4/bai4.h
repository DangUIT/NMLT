#pragma once
class Point
{
private:
    int x, y;

public:
    Point()
    {
        int x = 0;
        int y = 0;
    }
    ~Point()
    {
        int x = 0;
        int y = 0;
    }
    Point Nhap();
    Point TinhTien(Point& a, int n);
    int GetX(Point a);
    int GetY(Point a);
    void Xuat(Point a);
};
