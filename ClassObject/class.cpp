#include <iostream>
#include <string>

/* 通过 关键字 class定义类 */
class Student
{
public:
    // Student()
    // {
    //     std ::cout << "构造" << std ::endl;
    // }

    Student(int age, const std ::string name)
    {
        m_age = age;
        m_name = name;
        std ::cout << "有参构造" << std ::endl;
    }

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

    // stu.Setage(10);
    // stu.setname("zhangsan");
    std ::cout  << "age:" << stu.getAge()<< ",name:" << stu. getName()  << std ::endl;

    return 0;
}
