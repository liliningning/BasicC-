#include <iostream>
#include <cmath>

/* 辗转相除法  最大公约数    第二步为除数变为被除数 余数变为除数   （被除数 % 除数 = 商 ....  余数 ）     */
int gcd(int x, int y)
{
    int max = std ::max(x, y);
    int min = std ::min(x, y);
    int r = max % min;
    while (r != 0)
    {
        max = min;
        min = r;
        r = max % min;
    }
    return min;
}

class Line;
class Point
{

public:
    friend class Line;
    friend double Distance(const Point &p1, const Point &p2);
    /* 构造函数 */
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
        std ::cout << "构造函数" << std ::endl;
    }

    /* 析构函数 */
    ~Point()
    {
        std ::cout << "析构函数" << std ::endl;
    }

    void show()
    {
        std ::cout << "(" << x << y << ")" << std ::endl;
    }

private:
    int x;
    int y;
};

double Distance(const Point &p1, const Point &p2)
{
    return sqrt(pow(p1.x - p2.x, 2) - (p1.y - p2.y, 2));
}

class Line
{
public:
    Line(double a, double b, double c) : A(a), B(b), C(c)
    {
    }
    Line(const Point &p1, const Point &p2)
    {
        A = p1.y - p2.y;
        B = p2.x - p1.x;
        C = (p1.x * p2.y) - (p2.x * p1.y);
        int r = gcd(gcd(A, B), C);

        std ::cout << r << std ::endl;
        A /= r;
        B /= r;
        C /= r;
    }
    double distance(const Point &p)
    {
        double distance = 1.0 * (abs(A * p.x + B * p.y + C) / sqrt(A * A + B * B));
        return;
    }
    void show()
    {
        std ::cout << A << "x+" << B << "y+" << C << "=0" << std ::endl;
    }

private:
    double A;
    double B;
    double C;
};

int main()
{
    Point p1(1, 3);
    Point p2(2, 8);
    Line l(p1, p2);
    l.show();
    return 0;
}

/**
 *  friend 关键字  
 *      友元函数: 访问类的私有成员 
        友元类： 该类可以访问类的所有私有成员
        友元关系不能进行传递 是单向的
    在外面定义的函数可以调用类里面的私有的变量 
*/



