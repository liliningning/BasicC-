#include <iostream>
#include <cstdlib>
#include <cstring>

/* c语言的方式  写一维数组 二维数组 */
#if 0
int main()
{

    // char * str =(char *) malloc(sizeof(char ) * 10);
    // if(str == NULL)
    // {
    //     return -1;
    // }
    // strcpy(str, "hello");

    // std :: cout << str << std :: endl;
    // free(str);

    char **str = (char **)malloc(sizeof(char *) * 10);
    if (str == NULL)
    {
        return -1;
    }

    for (int idx = 0; idx < 3; idx++)
    {
        str[idx] = (char *)malloc(sizeof(char) * 10);
        if (str[idx] == NULL)
        {
            return -1;
        }
        strcpy(str[idx], "hello");
    }
    for (int idx = 0; idx < 3; idx++)

    {
        std ::cout << str[idx] << std ::endl;
    }

    for (int idx = 0; idx < 3; idx++)

    {
        free(str[idx]);
    }
    free(str);

    return 0;
}
#endif

/****
 *
 *  c++ new delete
 * 1:不需要计算内存的大小
 * 2：不需要对指针进行转换
 * 3：不需要判断指针是否为空： 抛出异常， 终止程序
 * 
 * () 赋值 [] 申请数组
 * */
#if 1
int main()
{   /*数组 */
    char *s = new char[10];
    /* 值 */
    // int * a = new int (11);

    char ** str = new char*[3];
    for(int idx = 0; idx < 3; idx++)
    {
        str[idx] = new char [10];
        strcpy(str[idx], "hello");
    }
    for(int idx = 0; idx < 3; idx++)
    {
        std ::cout << str[idx] << std ::endl;
    }
    for(int idx = 0; idx < 3; idx ++)
    {
        delete[] str[idx];
    }
    delete [] s;
    // delete a;
    return 0;
}
#endif