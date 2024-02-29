#include <iostream>
#include <cstring>


class Student
{
public:
    Student(int id,  const char  * name) :m_id(id), m_name(name)
    {
        m_id = id;
        /* 不允许字符串常量转化为非常量指针 */
        // m_name = new char[20];
        // strcpy(m_name, name);
    }
    ~Student()
    {
        // if(m_name != NULL)
        // {
        //     delete[]m_name;
        //     m_name = NULL;
            
        // }
        m_name = 0;
        m_id = 0;
    }
    /* 深拷贝 复制堆上的空间 */
    Student(const Student &obj)
    {
        m_id = obj.m_id;
        // m_name = new char[20];
        m_name = obj.m_name;
    }

    void print()
    {
        std :: cout << "id:" << m_id << "name:" << m_name << std :: endl;
    }


private:
    int m_id;
  const  char * m_name;

};


int main()
{
    Student s1(1, "小米");
    s1.print();

    Student s2 = s1;
    s2.print();


    return 0;
}