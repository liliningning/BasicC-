#include <iostream>

int main()
{

    int idx;
    int array[40];
    array[0] = 0;
    array[1] = 1;
    std ::cout << "array[0]:" << array[0] << "\tarray[1]:" << array[0] << std ::endl;

    for(int idx = 2; idx < 40; idx++)
    {
        array[idx] = array[idx - 1] + array[idx -2];
        std :: cout << array[idx] << std :: endl;
    }

    return 0;
}

/////斐波那契数列的实现