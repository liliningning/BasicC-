#include <iostream>
#include "namespace.h"
#include "demo.h"

/* /////// 消除重复命名 命名空间 */

/* 全局变量 */
int count = 5;

/* 运算符： :: 作用域限定符 */

/* 是相对c的升级功能（函数， 库文件， 变量 ） */
// using namespace std;

int main()
{

#if 0
    /* 默认打印的是全局变量 */
    printf("count1 %d\n", count);

    /* 打印的为mySpaseA的值 */
    printf("count2 %d\n", mySpaseA::count);

    /* 打印的为mySpaseBB的值 */
    printf("count3 %d\n", mySpaseB::mySpaseBB::index);

    printf("count4 %d\n", max);


    /* 打印 方法1  */
    // cout << "hello world"  << endl;
     /* 打印 方法2 标准是输出流    endl 把缓冲区清空  换行     */
//    std::cout << "hello world"  << std::endl;
#endif

    func();

    return 0;
}