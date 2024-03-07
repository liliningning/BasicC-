#include <iostream>
#include <memory>

class Car;
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

public:
};

int main()
{
    {

        std ::unique_ptr<Person> p1(new Person);
            p1->run();
        /* 对象的所有权 都会被转移  只有p2结束后 才能 进行析构  且所有权转移后 p1还可以使用该类的所有对象  */
        std ::unique_ptr<Person> p2 = std :: move(p1);
           std ::cout << "222222222222222222" << std ::endl;
        p2->run();
        std ::cout << "1111111111111111111" << std ::endl;
        /* 数组 */
        // std ::unique_ptr<Person[]> p3(new Person[3]{});
    }


    return 0;
}