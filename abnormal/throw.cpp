#include <iostream>
#include <exception>
#include <stdexcept>


class Student
{
public:
    Student(int id):m_id(id)
    {
        if(id < 0)
        {
            throw  std ::out_of_range("id不能小于0");
        }
    }
private:
    int m_id;
};

int main()
{

    try
    {
        Student s(0);
    }
    catch(std ::exception &e)
    {
        std :: cout << "捕捉异常 " <<  e.what() <<  std :: endl;
    }
    catch(...)
    {

    }

    return 0;
}