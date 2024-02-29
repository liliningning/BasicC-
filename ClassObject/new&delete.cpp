#include <iostream>
#include <cstdlib>

class Test
{
public:
    Test()
    {
        std ::cout << "构造函数" << std ::endl;
    }
    ~Test()
    {
        std ::cout << "析构函数" << std ::endl;
    }
};

int main()
{

    Test *p = new Test();
    std ::cout << "-------------" << std ::endl;
    Test *t1 = (Test *)malloc(sizeof(Test));
    delete p;

    
    return 0;
}


/***
 * 9. new & delete 和 malloc & free的区别
    1、new .... 是关键字 malloc... 是函数 （本质 ）
    2、不需要计算内存大小 不需要判断指针是否为空（抛出异常 终止程序）  不需要转化指针 （使用形式）
    3、new ... 会调用构造和析构函数  malloc ... 不会 （内存）

*/