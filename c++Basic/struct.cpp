#include <iostream>

/**struct 的加强
 *
 * 结构体本身的名字就是类型
 * 内部可以定义函数
 *
 */

struct student
{

    int age;
    int height;
    void stA(int num)
    {
        int a = num;
    }
};

/* 重命名 */
using tps = student;

int main()
{
    tps s;
    s.age = 17;
    s.height = 199;
    s.stA(10);
    std ::cout << s.age << std ::endl;

    return 0;
}
