#include <iostream>

/***
 * 指针加强
 *
 * 引用：   内存的别名 本质为指针常量   int &b = a  == int *const b = &a;
 *          在编译阶段会被替换为指针常量
 * 变量名： 内存的标识
 * 指针：   内存的地址
 *
 *      const int &a : 常量引用（常引用 ）： 解决右值没有办法传递给左值问题
 */

/***
 *  左值和右值
 * 左：有内存的值
 * 右: 没有内存的值
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* 引用的使用 */
void swap1(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void show( const  int &a)
{
    std ::cout << a << std ::endl;
}

int main()
{

    int a = 10;
    /***
     *  &在这里为引用符  引用： 找到原内存  相当于给a取了一个别名为 b
     *  且定义必须初始化  初始化后不在改变朝向
     *  引用变量的大小 == 原变量的大小
     *
     *
     ****/
    // int &b = a;
    int a1 = 10;
    int b = 20;
    swap1(a1, b);
    std ::cout << sizeof(b) << std ::endl;

    return 0;
}
