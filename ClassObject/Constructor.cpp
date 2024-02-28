#include <iostream>


class Student
{
    public:
    Student(  const char * name, int age)
    {
        m_name = name;
        m_age = age;
    }
    void show()
    {
        std :: cout << m_name << "的年龄为" << m_age <<std :: endl;

    }
    private:
  const   char *m_name;
    int m_age;


};
int main()
{
    Student stu("小明", 15);
    stu.show();
    return 0;
}
