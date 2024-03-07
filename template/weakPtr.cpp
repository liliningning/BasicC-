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

public:
    std ::shared_ptr<Car> m_car = nullptr;
};

class Car
{
public:
    Car()
    {
        std ::cout << "Car" << std ::endl;
    }
    ~Car()
    {
        std ::cout << "~Car" << std ::endl;
    }

public:
    /* 弱引用 */
    std ::weak_ptr<Person> m_person;
};

int main()
{
    std ::shared_ptr<Person> person(new Person());
    std ::shared_ptr<Car> car(new Car());
    person->m_car = car;
    car->m_person = person;

     std ::cout << person->m_car.use_count() << std ::endl;
    return 0;
}