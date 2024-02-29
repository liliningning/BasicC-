#include <iostream>

class A
{
public:
    A(int a, int b)
    {
        m_a = a;
        m_b = b;
        printf("A的构造函数被调用, a %d, b %d\n", a, b);
    }
    ~A()
    {
        printf("A的析构函数被调用, a %d, b %d\n", m_a, m_b);
    }

private:
    int m_a;
    int m_b;
};

class B
{
public:
    /* 四个整型 用初始化列表来初始化m3 ~ f*/
    B(int a, int b, int c, int d) : m3(a, b), m2(c, d), m1(b, c), f(0)
    {
        m_c = c;
        m_d = d;
        printf("B的构造函数被调用, c %d, d %d\n", c, d);
    }
    ~B()
    {
        printf("B的析构函数被调用, c %d, d %d\n", m_c, m_d);
    }

private:

    A m1;
    A m2;
    A m3;
    int m_c;
    int m_d;
    const int f;
};
int main()
{

    std ::cout << "begin" << std ::endl;
    {
        B b(1, 2, 3, 4);
    }
    std ::cout << "end" << std ::endl;

    return 0;
}