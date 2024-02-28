#include <iostream>
#include <cstring>


/*  define 
    命名空间对其没有约束 
    没有数据类型定义   由系统定义 
    
    #define SIZE 1024
    */


/***
 * (c++主要在编译期工作)
 * 函数加强：
 * 1、内联函数：
 * 内联规则：
 *      1：不能有循环
 *      2：条件分支太多
 *      3：不能取函数地址
 *      4：不能有递归
 *
 * 2、默认参数
 *      1：给它一个默认值
 *      2：函数声明时使用 添加默认参数
 *      3：必须放在参数列表的末尾
 *      4：默认参数出现时它的后面必须全部都是默认参数
 *
 * 3、函数重载(多态)
 *      含义: 函数名相同定义不同
 *      规则：
 *          1：参数类型不同
 *          2：参数数量不同
 *          3：参数顺序不同
 * 返回值不同 其他都相同则不能构成重载
 * 默认参数不能构成重载 有歧义  ( 参数数量不确定 )
 * 占位参数可以构成重载  (参数数量是确定的)
 *
 */

#if 0

/* 内联函数 */
inline int func(int a)
{
    return a + 1; 
}

int main()
{
    int a = 10;
    std :: cout << a + 1 << std ::endl;

    return 0;
}

#endif



/* 占位参数 */
int add1 (int a, int b, int)
{
    return a + b;
}

/* 默认参数  */
bool func(int a, char * errorMsg = NULL)
{
    if(errorMsg != NULL)
    {
         strcpy(errorMsg, "connect error!" );
    }
   
    return false;
}

/* 默认参数 声明     int c = 0 : 占位默认参数（无用 ） */
int add (int a, int b, int c = 0 );

int add (int a, int b, int c )
{
    return a + b + c;
}

int main()
{
    char msg[1024] = { 0 };
    if(func(1, msg) == false);
    {
        std :: cout << msg << std ::endl;
    }
    std :: cout << add(10, 1) << std ::endl;
    return 0;
}


#if 0


/* 函数重载*/
int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

void add (int a )
{
    std ::cout << "int :" << a  << std ::endl;
}
int main()
{

    std ::cout << add(10.1, 12.1) << std ::endl;

    return 0;
}
#endif