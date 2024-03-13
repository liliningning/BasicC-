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
    /* 非const 转 const */
    char * str = "hello word";
   const  char * buffer = static_cast<const char *>(str);
   std ::cout << "buffer " << buffer << std ::endl;
  
    return 0;
}