#include <iostream>
#include <memory>
class Person
{
public:
    Person()
    {
        std ::cout << "Person" << std ::endl;
    }
    ~Person()
    {
        std ::cout << "~Person" << std ::endl;
    }

    void run()
    {
        std ::cout << "Person run" << std ::endl;
    }

private:
    int m_age;
};

int main()
{

    // {
    //     std ::shared_ptr<Person> p1(new Person);
    //     p1->run();

    //     /* 判断是否能用于数组 */
    //     std ::shared_ptr<Person[]> p2(new Person[3]{});
    // }

    {
        std ::shared_ptr<Person> p3;
        std ::shared_ptr<Person> p2;
        {
            std ::shared_ptr<Person> p1(new Person);
            p2 = p1;
            /* 当前对象被多少个强引用 */
            std ::cout << "p1:" << p1.use_count() << std ::endl;
        }
        std ::cout << "p2:" << p2.use_count() << std ::endl;
        std ::cout << "33333" << std ::endl;
        p3 = p2;
        std ::cout << "p3:" << p3.use_count() << std ::endl;
        std ::cout << "p2:" << p2.use_count() << std ::endl;
    }
    std ::cout << "334444" << std ::endl;

    return 0;
}