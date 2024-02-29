#include <iostream>
#include <string>

/* 通过 关键字 class定义类 */
class Student
{
public:
    /* 无参构造 */
    Student()
    {
        std ::cout << "无参构造" << std ::endl;
    }
    /*带参构造 */
    Student(int age, const std ::string &name)
    {
        m_age = age;
        m_name = name;
        std ::cout << "二参构造" << std ::endl;
    }

    Student(const std ::string &name)
    {
        m_age = 0;
        m_name = name;
        std ::cout << "一参构造" << std ::endl;
    }
    /* 拷贝构造函数*/
    Student(const Student &stu)
    {
        m_age = stu.m_age;
        m_name = stu.m_name;
        std ::cout << "拷贝构造函数" << std ::endl;
    }

    /* 赋值运算符的重载 */
    void operator=(const Student &stu)
    {
        m_age = stu.m_age;
        m_name = stu.m_name;
        std ::cout << "赋值运算符的重载" << std ::endl;
    }


    // ~ Studet()
    // {
    //     std ::cout << "析构函数" << std ::endl;
    // }

    /* 类内声明 */
    void Setage(int age);
    int getAge();
    void setname(const std::string &name);
    std ::string getName();

private:
    int m_age;
    std ::string m_name;
};

/* 类外定义 */
void Student::Setage(int age)
{
    m_age = age;
}
int Student ::getAge()
{
    return m_age;
}
void Student::setname(const std::string &name)
{
    m_name = name;
}
std ::string Student ::getName()
{
    return m_name;
}

int main()
{

    Student stu(10, "zhansan");
    std ::cout << "age:" << stu.getAge() << ",name:" << stu.getName() << std ::endl;
    // Student stu( "zhansan");
    // stu.Setage(10);
    // stu.setname("zhangsan");

    /* 拷贝构造的两种方法 */
    // Student s1 = stu;
    Student s1(stu);
    std ::cout << "age:" << stu.getAge() << ",name:" << stu.getName() << std ::endl;

    /*赋值运算符的重载  */
    Student s2;
    s2 = stu;
    std ::cout << "age:" << stu.getAge() << ",name:" << stu.getName() << std ::endl;

    return 0;
}
