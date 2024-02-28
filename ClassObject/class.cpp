#include <iostream>

/* 通过 关键字 class定义类 */
class Student
{
public:
    const char *name;
    int age;

    /*定义函数 */
    void printS()
    {
        printf(" name :%s and age  %d\n", name, age);
    }
};

int main()
{
    Student stu;
    stu.name = "张三";
    stu.age = 19;
    stu.printS();

    return 0;
}