#include <iostream>

class Person
{
public:
    Person()
    {
        std ::cout << "Person " << std ::endl;
    }
    virtual ~Person()
    {
        std ::cout << "~Person " << std ::endl;
    }
    virtual void run()
    {
        std ::cout << " person run " << std ::endl;
    }

private:
    int m_age;
};

class Student : public Person
{
public:
    Student()
    {
        std ::cout << "Student " << std ::endl;
    }
    ~Student()
    {
        std ::cout << "~Student " << std ::endl;
    }
    void run()
    {
        std ::cout << "Student run " << std ::endl;
    }

private:
    int m_soure;
};

int main()
{
#if 0
    /* 父-> 子*/
    Person *p1 = new Student();
    p1->run();
    delete p1;

    /*子-> 父   c语言 */
    Student *stu1 = (Student *)new Person();
    stu1->run();
    delete stu1;
#endif
    Person *p2 = new Person();
    Person *p3 = new Student();
#if 0
    /* 错误 */
    Student *stu2 = p2;
    Student *stu3 = p3;

#endif
    /* 解决方法 c */
    // Student *stu2 = (Student *)p2;
    // Student *stu3 = (Student *)p3;
    /* 解决方法 c++ */
    Student *stu2 = dynamic_cast<Student *>(p2);
    std ::cout << "stu2 " << stu2 << std ::endl;

    Student *stu3 = dynamic_cast<Student *>(p3);
    std ::cout << "stu3 " << stu3 << std ::endl;
    return 0;
}


//////用于多态类型的转换 有运行时的安全检测 将非法的地址置为空 