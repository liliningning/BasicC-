#include <iostream>

class Singlecton
{

public:
    /* 单例 Instance  全局只构建一次  */
    static Singlecton *Instance()
    {
        static Singlecton s;
        return &s;
    }
    /* 析构函数 */
    ~Singlecton()
    {
        std ::cout << "析构函数" << std ::endl;
    }

private:
    /* 构造函数 */
    Singlecton()
    {
        std ::cout << "构造函数" << std ::endl;
    }
};

int main()
{

    /* 不管调用多少次都是同一个函数   */
    Singlecton *s1 = Singlecton ::Instance();
    Singlecton *s2 = Singlecton ::Instance();
    Singlecton *s3 = Singlecton ::Instance();
    std ::cout << s1 << " " << s2 << " " << s3 << std ::endl;

    return 0;
}

/***
 * 单例模式 全局只有一个对象的模式
    1:防止对象在外部创建  防止构造函数在外部调用  构造函数是对象的初始化函数
        构造函数的私有化
    2：构建一个静态接口给外部使用
    3：在静态接口中构建static 返回该变量指针

    static  Singlecton *Instance()
    {
        static Singlecton s;
        return &s;

    }
*/