#include <iostream>

class Test
{
public:
    Test(int a, int b) : m_a(a), b(b)
    {
    }
    void show()
    {
        std ::cout << m_a << std ::endl;
    }

private:
    const int m_a;
    int b;
};

int main()
{
    Test t(10, 3);
    t.show();

    return 0;
}



/**** 
 *  初始化列表
    const:
    1、常成员变量必须在初始化列表中进行初始化
    2、普通成员变量也可以在列表中进行初始化
    3、初始化列表的操作快于构造函数的主体
*/