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

/* autopt的内部原理 */
template <typename T>
class smartPtr
{
public:
    smartPtr(T *obj)
    {
        m_ptr = obj;
        std ::cout << "smartPtr" << std ::endl;
    }
    ~smartPtr()
    {
        delete m_ptr;
        std ::cout << "~smartPtr" << std ::endl;
    }

    T *operator->()
    {
        return m_ptr;
    }

private:
    T *m_ptr;
};

int main()
{
#if 1
    {
        /*堆空间 需要手动释放 */
        Person *per = new Person;
        delete per;
    }

    { /****
      auto_ptr 的使用  上下两种表达意思相同   自动释放内存
      不能构造数组 因为不能一个一个的释放
     */
        std ::auto_ptr<Person> p1(new Person);
        p1->run();
    }
#endif
    smartPtr<Person> spt(new Person);
    spt->run();

    return 0;
}