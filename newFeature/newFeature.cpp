#include <iostream>

int main()
{
#if 0
    int a = 100;
    auto num = 200;
    std :: cout << "num:" << num <<std :: endl;

    
    auto str = "hello word";
    std :: cout << "str:" << str <<std :: endl;

    auto * ptr = &a;
    std :: cout << "* ptr:" << * ptr <<std :: endl;

#endif
    /* decltype (num)= int  */
    int num = 888;
    decltype(num) value = 222;

    int array1[5] = {11, 22, 33, 44, 55};
    int array2[] = {11, 22, 33, 44, 55};
    int array3[]{11, 22, 33, 44, 55};

    int array4[5] = {11, 22, 33, 44, 55};
    for(int item: array1)
    {
        std :: cout << "array4:" << item <<std :: endl;
    }




    return 0;
}