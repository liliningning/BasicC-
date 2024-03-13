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

    Person *p2 = new Person();
    Person *p3 = new Student();
#if 0
    /* 错误 */
    Student *stu2 = p2;
    Student *stu3 = p3;

#endif
    // Student *stu2 = reinterpret_cast<Student *>(p2);
    // std ::cout << "stu2 " << stu2 << std ::endl;

    // Student *stu3 = reinterpret_cast<Student *>(p3);
    // std ::cout << "stu3 " << stu3 << std ::endl;


    int * p = reinterpret_cast<int *>(100);
    std ::cout << "p:" << p << std ::endl;
    /* 0x64 = 16x 6 + 4  100 转化为16进制 */

    long num = reinterpret_cast<long>(p);   
    std ::cout << "num:" << num << std ::endl;
    
    return 0;
}