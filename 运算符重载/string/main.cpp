#include <iostream>
#include "myString.h"

int main()
{
    Mstring s("lisi,zhangsan,wangwu,hello");
    // int s1 = s.operator double();
    // // s[3] = 'h';
    // // Mstring s2 = s += s1;
    // // if (s1 > s)
    // // {
    // //     std ::cout << "true" << std ::endl;
    // // }
    // // else
    // // {
    // //     std ::cout << "flase" << std ::endl;
    // // }
    // std ::cout << s1 << std ::endl;

    StringList list; 
    list+= s;
    std ::cout<< list << std ::endl;
    list= s.split(",");
    // list[1] = "nihao";/
    std ::cout << list << std ::endl;

    /* 是将s里面的所有字符全部塞到了字符串列表的第一个位置 则里面仅有一个*/

}