#include <iostream>
using namespace std;

/* 无参函数想调用有参构造必须使用初始化列表 */
class Student
{
public:
    long m_score;

public:
     Student(int score) : m_score(score)
    {
        std ::cout << "study " << std ::endl;
    }
    ~Student()
    {
        cout << " Student 析构 " << endl;
    }

public:
   virtual  int makeMoney()
    {
        cout << "  student make money " << endl;
        return 0;
    }
};

class worker
{
public:
    long m_salay;

public:
     worker(int salay) : m_salay(salay)
    {
        std ::cout << "worker " << std ::endl;
    }

public:
    /* 重写 */
  virtual  int makeMoney()
    {
        cout << "  Teacher make money " << endl;
        return 0;
    }

     ~worker()
    {
        cout << " worker 析构 " << endl;
    }

};

/* 多继承 */
class Undergraduate : public Student, public worker
{
public:
    long m_grade;

public:
    /* 多继承构造 必须使用初始化列表  且不能使用无参构造  */
    Undergraduate(int score, int sarary, int grade) : Student(m_score), worker(m_grade), m_grade(grade)
    {

        std ::cout << "Undergraduate " << std ::endl;
    }
    ~Undergraduate()
    {
        cout << " Undergraduate 析构 " << endl;
    }

public:
    int makeMoney()
    {
        cout << "  student make money " << endl;
        return 0;
    }
};
int main()
{
     Undergraduate stu(10,11,12);
    int len = sizeof(stu);
    cout << "  len: " << len << endl;
    return 0;
}

/****
 * virtual 虚函数
 */

/* 多继承 子类的内存分布 根据继承的顺序 根据初始化的顺序  而不是类定义的顺序   */
