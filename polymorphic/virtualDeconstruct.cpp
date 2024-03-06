#include <iostream>
using namespace std;
#include <cstring>

const int SIZE = 128;
/* 无参函数想调用有参构造必须使用初始化列表 */
class Person
{
public:
    Person()
    {
        cout << " person 无参" << endl;
    }

    /* 虚析构函数 调用后释放内存 */
    virtual ~Person()
    {
        cout << " person 析构 " << endl;
    }

    /* 导致内存泄漏 只调用父类的析构函数 */    
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
     char *m_name;

public:
    Student(const char *name)
    {
        std ::cout << "study " << std ::endl;

        m_name = (char *)malloc(sizeof(char *) * SIZE);
        strncpy(m_name, name, strlen(name) + 1);
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
    Person *per = new Student("zhangsang");
    delete per;
    /* 并没有调用多态   调用的只是父类 person  */
}

/*****
 * 1:子类的构造函数 默认调用父类的（无参）构造函数
 *
 */

/****
 *     virtual ~Person()虚析构函数
 * 保证完整的内存释放  析构是先调用当前函数的析构函数 再根据继承往上 
 * 将父类的析构函数设为虚析构 这样子类的析构函数就会自动变为虚析构
 * 
 */
