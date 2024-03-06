#include <iostream>
const int Size = 32;
class person
{

public:
    int m_age;
    char *address;

public:
    person()
    {
        std ::cout << "person  构造 " << std ::endl;
        address = new char[Size];   
    }
    ~person()
    {
        std ::cout << "person  析构 " << std ::endl;
    }
};

class Student : public person
{
public:
    int m_no;
    char *name;

public:
    Student()
    {
        std ::cout << "study  构造 " << std ::endl;
        name = new char[Size];
        if(name)
        {
            delete [] name;
            name = nullptr;
        }
        delete[] name;
    }
    ~Student()
    {
        std ::cout << "study 析构 " << std ::endl;
    }
};
int main()
{
        Student stu;
        std ::cout << "s " << std ::endl;

    return 0;
}