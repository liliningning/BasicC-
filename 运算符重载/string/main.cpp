#include <iostream>
#include "myString.h"

int main()
{
    Mstring s = "1";
    Mstring s1 = "world";
    Mstring s2 = s = s1;

    std :: cout << s2 << std :: endl;



}