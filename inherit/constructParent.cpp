#include <iostream>
using namespace std;

/* 无参函数想调用有参构造必须使用初始化列表 */
class Person
{
public:
    Person():Person(0)
    {
        cout << "无参" << endl;
    }

    Person( int age):m_age(age){}
    

public:
    int m_height;
    int m_age;
};



class Student :public Person
{
public:
    int m_no;

public:
    Student()
    {
         std ::cout << "study " << std ::endl;
    }
    /* 3： 正确的*/
    Student(int age, int no): Person(age), m_no(no)
    {
         std ::cout << "study " << std ::endl;
    }
#if 1
    /* 1： 当前的变量不属于该类 */
     Student(int no, int age): m_age(age), m_no(no)
    {
         std ::cout << "study " << std ::endl;
    }

    /*2： 可以调用但无法正确赋值  */
 Student(int no, int age)
    {
        age = m_age;
        no = m_no;
        std ::cout << "study0 " << std ::endl;
    }
#endif

};

int main()
{

    Student stu(20,1);
    std ::cout  << "age :" << stu.m_age <<"\tno :" << stu.m_no <<  std ::endl;

}


/*****
 * 1:子类的构造函数 默认调用父类的（无参）构造函数
 * 
*/
  
  

