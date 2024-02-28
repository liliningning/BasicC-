#include <iostream>
#include <cstring>

/* 全局使用标准命名空间 */
using namespace std;



#if 1
int a = 10;

int main()
{


    int a = 20;
    /* ：：a   代表为全局的a */
    std::cout << :: a <<  std:: endl;
    return 0;
}
#endif

/****
 *  namespace 命名空间   
 *  ：： 域解析符
 *  std : 标准的命名空间 
 * 
 * 
 * 
 *  */
namespace A
{

    void insterTail()
    {
        std::cout << "frist" << std::endl;
    }
    int a = 10;
    /* 命名空间的嵌套  */
    namespace C
    {
        int a = 30;
    }
}

namespace B
{
    void insterTail()
    {
        std::cout << "secend" << std::endl;
    }
}

int main()
{
    using namespace A;
    insterTail();
    // A :: insterTail();
    B ::insterTail();
    std ::cout << A ::a << std ::endl;
    std ::cout << A ::C ::a << std ::endl;
    return 0;
}