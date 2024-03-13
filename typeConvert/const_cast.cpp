#include <iostream>

class Person
{
public:
    Person()
    {
        std ::cout << "Person " << std ::endl;
    }

private:
    int m_age;
};

int main()
{

    const char *ptr = "hello word";
    /* 强转 c语言 */
    char *buffer = (char *)ptr;

    char *buffer1 = const_cast<char *>(ptr);


    /* 复合类型 */
    const Person *p1 = new Person();
    /* c语言 */
    Person *p2 = (Person *)p1;
    /*c++ */
    Person *p3 = const_cast<Person *>(p1);

    std ::cout << buffer1 << std ::endl;

    return 0;
}


////// 将const属性 转换为非const属性 