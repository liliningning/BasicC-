#include <iostream>
using namespace std;

int myHeight()
{
    return 22;
}

int myAge()
{
    return 21;
}

class Person
{
public:
    Person(int height, int age)
    {
#if 0
        m_height = height;
        m_age =age;
#else
        m_height = myHeight();
        m_age =myAge();
#endif
    }

public:
    int m_height;
    int m_age;
};

class Student
{
public:
    // Student(int height, int age) : m_height(height), m_age(age)
    // {
    // }
    Student(int height, int age) : m_height(myHeight()), m_age(myAge()){} 

public:
    int m_height;
    int m_age;
};

int main()
{
    Person person(60, 22);
    Student stu(90, 21);
    cout << "age: " << person.m_age << "\theight :" << person.m_height << endl;
    // cout << "age: " << stu.m_age << "\theight :" << stu.m_height << endl;
    return 0;
}


/***初始化成员列表 */


/***** 有参构造想要调用函数的两种方法：
 * 1：在内部调用：
 *  m_height = myHeight();
     m_age =myAge();

 * 2: 使用初始化列表进行调用
 *   Student(int height, int age) : m_height(myHeight()), m_age(myAge()){} 


*/