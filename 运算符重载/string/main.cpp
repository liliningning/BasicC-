#include <iostream>
#include "myString.h"

int main()
{
    Mstring s = "aello";
    Mstring s1 = "hello";
    // Mstring s2 = s += s1;
    if (s1 > s)
    {
        std ::cout << "true" << std ::endl;
    }
    else
    {
        std ::cout << "flase" << std ::endl;
    }
}