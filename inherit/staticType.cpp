#include <iostream>


class person
{

public:
    int m_age;

public:
    void run()
    {
        std ::cout << "person run" << std ::endl;
    }
};

class Student 
{
public:
    int m_no;
    static int  m_room; 

public:
    void study()
    {
         std ::cout << "study " << std ::endl;

    }

};

/* 静态成员变量的初始化 */
int Student :: m_room = 0;

int main()
{
    /* 1：*/
    Student stu ;
    stu.m_room = 254;
    /*2：*/
    Student ::m_room = 233;
    /*3：*/    
    Student * pStu  = new Student();
    pStu->m_room = 3333;

    return 0;
    }



/****static
 * static 变量 
 * 必须的初始化
 * 访问方式上面的3种 
 * 普通函数可以访问 
 * 是属于类的
 * ********
 * static函数 
 * 不能获取普通的变量  也不能获取普通的函数  
 * 因为静态函数内部没有this指针  this 是属于对象的。
*/
