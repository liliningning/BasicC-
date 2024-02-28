#include <iostream>



/* c++的输出方式 */



/****
 * cin 标准输入
 * cout 标准输出
 * cerr 输出警告
 * clog 错误消息
 * << 输出运算符
 * >> 输入运算符
 * ：：作用域运算符
*/

int main()
{

#if 0
    /* 输出运算符 标志输出上面打印 */
    std::cout << "enter two numbers: " << std:: endl;
    int val1 = 0; 
    int val2 = 0;
    /* 键盘输入 */
    std:: cin  >> val1 >> val2;
    std::cout << "the sum is " << val1 + val2 << std:: endl;



/*****
 * 练习 1 输出hello world
 * 练习2 用乘法输出
 * 练习3 判断对错
 * 
*/


/* 输出hello world */
    std :: cout << "enter " << std ::endl;
    /* 字符串的输入 */
    std :: string input;
    /* 键盘输入： */
    std:: cin >> input;
    std:: cout << "input: " << input << std :: endl;

/* 乘法输出  */
    std::cout << "enter two numbers: " << std:: endl;
    int val1 = 0; 
    int val2 = 0;
    /* 键盘输入 */
    std:: cin  >> val1 >> val2;
    std::cout << "the sum is " << val1 * val2 << std:: endl;

#else
/* 每个 << 逗得连续使用 不能用;将其隔开 */
    int v1 = 11, v2 = 4;
        std :: cout << "the sum of " << v1
                <<" and " << v2
                << " is " << v1 + v2 << std :: endl;


#endif    



    return 0;
}