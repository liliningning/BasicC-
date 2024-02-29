#include <iostream>

class Student
{
public:
    void setId(int id)
    {
        m_id = id;
    }

    int getId()
    {
        return m_id;
    }
    void setName(const char *name)
    {
        m_name = name;
    }

   const  char *getName()
    {
        return m_name;
    }
    void disPlay()
    {
        std::cout << "id:" << m_id << "name: " << m_name << std::endl;
    }
    /*私有的 只能在类的内部使用 */
private:
    int m_id;
    const char *m_name;
};

int main()
{

    Student stul;
    stul.setId(123);
    stul.setName("张三");
    stul.disPlay();
    return 0;
}