#include <iostream>

class Test
{

public:
    /* 构造函数 */
    Test(int a, int b) 
    {
        /*  this->a 是本类的a   区分本类对象 */
        this->a = a; 
        //   this->a = a == a(a) ;
        std ::cout << "构造函数  this " << this << std ::endl;
    }
    
        /* 构造函数 */
    Test(int a, int b) :a(a), b(b) 
    {
        /*  this->a 是本类的a   区分本类对象 */
        this->a = a; 
        //   this->a = a == a(a) ;
        std ::cout << "构造函数  this " << this << std ::endl;
    }



    /*拷贝 Test */
    Test clone()
    {
        return *this;
    }
    void show()
    {
        std ::cout << "hello word " << std ::endl;
    }

    /* 析构函数 */
    ~Test()
    {
        std ::cout << "析构函数" << std ::endl;
    }

private:
    int a;
    int b;
};

int main()
{

    Test t(1, 2);

    t.clone().show();
    std ::cout << "adress" << std ::endl;
    return 0;
}



/****
 * 


*/