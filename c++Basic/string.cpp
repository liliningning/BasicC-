#include <iostream>
#include <string>

int main()
{
    /* 底层为动态数组 */
    std ::string s;
    s = "hello world";
    std ::string val;
    val = "ello";
    std ::string s1 = s + "hello";
    /* 求字符串的长度  */
    std ::cout << s1.size() << std ::endl;
    /* 求容量的大小 */
    std ::cout << s1.capacity() << std ::endl;

    /* 追加一个字符 */
    s1.push_back('s');
    std ::cout << s1 << std ::endl;
    /* 输出字符串的1到4位 */
    std ::cout << s1.substr(1, 4) << std ::endl;
    /* 直接比较 */
    if (s1 == s)
    {
        std ::cout << "equal" << std ::endl;
    }
    else
    {
        std ::cout << " no equal" << std ::endl;
    }

    size_t found = s1.find_first_of(val);
    /* std ::string ::npos : 表示无效或失效的字符串 */

    if (found != std ::string ::npos)
    {
        std ::cout << "position: " << std ::endl;
    }
    else
    {
        std ::cout << "no val found: " << std ::endl;
    }

    return 0;
}