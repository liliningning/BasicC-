#include <iostream>


/***
 * 三目运算符的加强
 *  ？：
 * c++ 返回的是变量本身 
 * c 语言 返回的是值 
 * 
 * 
 * 关键字： const
 * c++是一个真正的常量 不能修改 
 * 命名空间对define 没有约束力 
 * 对const有约束力 
*/


/*** define 和const 的区别
 * 
 * 命名空间对define 没有约束力 
 * 对const有约束力
 * 没有数据类型定义   由系统定义 
 * 
*/


int main()
{

#if 0
    int a = 30;
    int b = 20;
    (a > b ? b : a) += 99;
    std :: cout <<  b << std :: endl;
#endif


    /* 地址改变 但值不变   不能将常量的值直接转化为指针类型 */
    const  int a1 = 10;
    // int * p = (int *)a1;
   const int  *p = &a1;
    std :: cout <<  a1 << std :: endl;
    std :: cout <<  *p  << std :: endl;
    printf("p: %p\t  &a %p\n", p, &a1);



    return 0;
}