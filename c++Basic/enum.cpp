#include <iostream>

/***
 * 类型控制的增强 
 * enum ： 
 *
 */

enum RGB
{
    RED,
    GREEN,
    BLUE,
};
enum color
{
    WHITE,
    BLACK,
};
int main()
{

    if (RGB ::RED == color ::WHITE)
    {
        std::cout << "equal" << std::endl;


    }
    return 0;
}
