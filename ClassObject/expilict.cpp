#include <iostream>

class Interger
{
public:
    /* 防止隐式转换 */
     explicit Interger(int a)
    {
        m_a = a;
         std :: cout << "有参" << std :: endl;
    }

    ~ Interger()
    {
        std :: cout << "无参" << std :: endl;
    }
    int getInterger()
    { 
        return m_a;
    }

private:
    int m_a;
};

int main()
{   
    Interger i (10);
    /* 构造函数的隐示转换： 数值会被隐式构造成类的对象*/
    // i = 20;
    std :: cout << i.getInterger() << std :: endl;

    return 0;
}


/****
 * 关键字：
    explicit: 防止隐式转换
*/