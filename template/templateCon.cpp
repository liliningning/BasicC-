#include <iostream>


template <typename T>
T add (T val1 , T val2)
{
return val1 + val2;
}

int main() 
{

    int num1 = 100, num2 = 200;  
    float n1 = 4.5, n2 = 4.3;
    /* 两者相同 */
    float sum = add<float>(n1, n2);
    int sum1 = add(num1, num2);
    std :: cout << sum << std :: endl; 
     std :: cout << sum1 << std :: endl; 

    

    return 0;
}



/****
 * 模板 函数模板 
*/

/* 为什么 << 要用友元 */