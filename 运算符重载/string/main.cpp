#include <iostream>
#include "myString.h"

int main()
{
    Mstring s("0.999990000");
    int s1 = s.operator double();
    // s[3] = 'h';
    // Mstring s2 = s += s1;
    // if (s1 > s)
    // {
    //     std ::cout << "true" << std ::endl;
    // }
    // else
    // {
    //     std ::cout << "flase" << std ::endl;
    // }
    std ::cout << s1 << std ::endl;
}