#include <iostream>

class Test
{

public:
    /* 构造函数 */
    Test()
    {
        count++;
        std ::cout << "构造函数" << std ::endl;
    }
    /* 拷贝构造函数 */
    Test(const Test &t)
    {
        count--;
        std ::cout << "拷贝构造" << std ::endl;
    }

    /* 析构函数 */
    ~Test()
    {  
        std ::cout << "析构函数" << std ::endl;
    }
    /* 静态成员函数  由类本身进行调用  */
    static void func();

public:
    /*普通的变量 */
     int c;
     /*静态的成员变量 */
    static int count;

private:
};

/* 静态成员变量的初始化 的在类外面进行初始化 */
// int Test ::c = 10;

int Test ::count = 0;

void Test::func()
{
    std ::cout << "hello word " << std ::endl;

}




int main()
{
    // Test t1;
    // t1.c = 10;
    // Test t2;
    // // std ::cout << Test::c << std ::endl;
    // std ::cout << t2.c << std ::endl;

    Test *t1 = new Test();

    Test *t2 = new Test();

    delete t1;
    delete t2;
    std ::cout << Test ::count << std ::endl;

    Test ::func();

    return 0;
}

/**
 *   static:
    描述的变量在全局区
    c语言：
        1、局部变量：延长生命周期， 只初始化一次
        2、全局变量： 只在当前文件可见
        3、函数： 只在当前文件可使用
    c++
        1、修饰的成员变量：该变量不属于某一类的成员，而属于类，由该类的成员共享
        注意事项：
                1、初始化不由类的成员对象完成，而由类自己完成

 * 用于计数的 count

 *
*/

