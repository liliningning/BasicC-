#include <iostream>
using namespace std;


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

     void printInfo()
    {
        std ::cout  << "age :" << m_age  <<"\tno :" <<  std ::endl;
    }


public:
    int m_height;
    int m_age;
};



/* 继承 */
class Student :public Person
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
        std ::cout  << "age :" << m_age  <<"\tno :" <<  m_no<<  std ::endl;
    }

};

int main()
{
    // Student * p = new Student;
    // p->m_no =  1;
    // p->m_age = 21;
    // p->printInfo();

    /*父 -> 子   正确 */
    Person * per = new Student();
    per->m_age = 20;
    per->printInfo();

    /* 子-> 父  错误 */
    Student * ptr = (Student *)new  Person();


}


/*****
 * 1:子类的构造函数 默认调用父类的（无参）构造函数
 * 继承只能父类调用子类 而不能相反 
 * 
 * 
 *   ***无参函数想调用有参构造必须使用初始化列表 
 * 
 * */

 
  

