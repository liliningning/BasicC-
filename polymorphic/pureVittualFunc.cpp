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
    /* 纯虚函数 */
    virtual int makeMoney() = 0;


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
    int makeMoney()
    {
        cout << "  student make money " << endl;
        return 0;
    }
};

int main()
{
    Person *per = new Student();
    per->makeMoney();

    Student stu;
    /* 并没有调用多态   调用的只是父类 person  */
}

/*****
 * 1:子类的构造函数 默认调用父类的（无参）构造函数
 *
 */

/****
 *    纯虚函数  virtual int makeMoney() = 0;
 *  含有纯虚函数的类称为抽象类
 * 
 */
