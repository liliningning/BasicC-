#include <iostream>
#include <cstdlib>

class Test
{
public:
    /* 构造函数 */
    Test()
    {
        p = new int;
        std ::cout << "构造函数" << std ::endl;
    }
    /* 拷贝构造函数 */
    Test(const Test &t)
    {
        std ::cout << "拷贝构造" << std ::endl;
        p = new int;
        *p = *t.p;
    }

    /* 析构函数 */
    ~Test()
    {
        delete p;
        std ::cout << "析构函数" << std ::endl;
    }

private:
    int *p;
};

Test func1( Test &t)
{
    // Test t;
    return t;
    /*对象的拷贝 速度快 性能高  左值拷贝 右值优化  */
}
Test func()
{
    Test t;
    return t;
    /*返回的是一个没有名字的内存*/

}

int main()
{
    // Test t;
    // Test t2 = t;

    /* 匿名对象: 生命周期只有一行代码  将名字给它 将亡值  */
    // Test();
    // Test t =  Test();
    Test t = func1(t);
    std ::cout << "-------------" << std ::endl;

    return 0;
}