#include <iostream>



/***
 *  const 常量，会被编译器放到符号表里面去
 *  const 常量时， 值是从符号表中获取的 而不是使用分配空间的值
 *  
*/
int main()
{

    const int a = 10;
    int *p = (int *)&a;
    *p = 20;

    printf("&a = %p, p = %p\n", &a, p);
    printf("a = %d, *p = %d\n", a, *p);

    return 0;
}