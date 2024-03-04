#include <iostream>


class Test 
{
public:
Test (int a) :a(a)
{}

    /* 修饰返回值指针 保护返回值 返回值不能修改  */
    const int * func()
    {
        return &a;
    }
    /* 保护引用形参  不能在函数内做修改  */
    void func2 (const int &a)
    {
        // a++;
    }
    /* 修饰整个函数 该函数不允许对成员变量做修改 */
    void func ()const 
    {
        // a++;
    }

private:
int a;


};