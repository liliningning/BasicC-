#include <iostream>
#include  <forward_list>


int main()
{

    std :: forward_list <int> list;
    list.push_front(1);

    auto ite = list.end();
    

    return 0;

}