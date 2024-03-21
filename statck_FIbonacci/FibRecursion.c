#include <stdio.h>



int Fib(int num)
{
    if(num < 2)
    {
        return num = 0 ? 0 : 1;

    }
    return Fib(num - 1) + Fib(num -  2);
}

int main()
{
    int val;
    printf("递归打印斐波那契数列：\n");
    for(val = 0; val < 40; val++)
    {
        printf("val: %d\n",Fib(val));
    }
    return 0;

}

///////斐波那契数列的递归