#include <iostream>
using namespace std;

/* 无参函数想调用有参构造必须使用初始化列表 */
class Person
{
public:
    Person()
    {
        cout << " person 无参" << endl;
    }
    ~Person()
    {
        cout << " person 析构 " << endl;
    }

public:
    /*virtual 虚函数的关键字 virtual int makeMoney() 虚函数    */
    virtual int makeMoney()
    {
        cout << "  person make money " << endl;
        return 0;
    }

    void printInfo()
    {
        std ::cout << "age :" << m_age << "\tno :" << std ::endl;
    }

public:
    int m_height;
    int m_age;
};

class Student : public Person
{
public:
    int m_no;

public:
    Student()
    {
        std ::cout << "study " << std ::endl;
    }
    void printInfo()
    {
        std ::cout << "age :" << m_age << "\tno :" << m_no << std ::endl;
    }
    ~Student()
    {
        cout << " Student 析构 " << endl;
    }

public:
        /* 重写 */
    int makeMoney()
    {
        cout << "  student make money " << endl;
        return 0;
    }
};

int main()
{
    /*父类的指针 指向子类的对象 */
    Person *per = new Student();
    /* */
    per->makeMoney();
}

/*****
 * 1:子类的构造函数 默认调用父类的（无参）构造函数
 *
 */


/****
 * virtual 虚函数  
 * 构造函数不能是虚函数 
 * 
 * 构成多态的条件
 * 1： 要有继承 父类和子类 （基类和派生类）
 *  2：子类中要由虚函数重写
 * 3：父类的指针指向子类的对象 
*/
