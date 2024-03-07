#include <iostream>
#include "temp.hpp"

class Point
{
public:
    int m_x;
    int m_y;

public:
    Point(int x, int y) : m_x(x), m_y(y) {}
    Point operator+(const Point &p);

    friend std ::ostream &operator<<(std ::ostream &os, const Point &p);
};

/* 重载输出 */
std ::ostream &operator<<(std ::ostream &os, const Point &p)
{
    return os << "(" << p.m_x << "," << p.m_y << ")";
}

Point Point::operator+(const Point &p)
{
    return Point(p.m_x + m_x, p.m_y + m_y);
}

int main()
{

    Point p1(1, 2);
    Point p2(2, 4);
    Point point = add<Point> (p1, p2);
    std :: cout << point << std :: endl;
    std ::cout << add(10, 12) << std ::endl;
    std ::cout << add<float>(10.1, 12.1) << std ::endl;

}
