#include <iostream>

#if 0
class Student
{
    public:
    /* 构造函数 */
    Student(const char * name, int age)
    {
        m_name = name;
        m_age = age;
    }
    /*普通函数 */
    void show()
    {
        std :: cout << m_name << "的年龄为" << m_age <<std :: endl;

    }
    private:
  const   char *m_name;
    int m_age;


};
int main()
{
    Student stu("小明", 15);
    stu.show();
    return 0;
}
#endif

#if 0
class Test
{
public:
    Test()
    {
        m_a = 0;
        m_b = 0;

        std ::cout << "无参构造函数的调用" << std ::endl;
    }

    Test(int a)
    {
        m_a = a;
        m_b = 0;

        std ::cout << "有一个参构造函数的调用" << std ::endl;
    }

    Test(int a, int b)
    {
        m_a = a;
        m_b = b;

        std ::cout << "有两个参构造函数的调用" << std ::endl;
    }

    void print()
    {
        std ::cout << "a = " << m_a << ",b = " << m_b << std ::endl;
    }

private:
    int m_a;
    int m_b;
};

/***
 *  构造函数的调用方法
 * 1：括号法
 * 2：等号法
 * 3: 手动调用 
 * */
int main()
{
    /* 括号法 */
    // Test t;
    // t.print();

    // Test t1(10);
    // t1.print();

    // Test t2(10, 7);
    // t2.print();

    /* 等号法 */

    // Test t;
    // t.print();

    // Test t1 = 10;
    // t1.print();

    // Test t2 = (10, 7);
    // t2.print();

    /* 手动调用 */

    Test t = Test();
    t.print();

    Test t1 =Test(10) ;
    t1.print();

    Test t2 = Test(10, 7);
    t2.print();
}
#endif

/* 默认构造函数 */
class Demo
{
   

};
int main()
{

    Demo d; 
    Demo d1 = d;
    return 0;
}
