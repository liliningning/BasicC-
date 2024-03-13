#include <iostream>
#include <list>

template <typename T>
void print(const T &v)
{

    for (auto ite = v.begin(); ite != v.end(); ite++)
    {
        std ::cout << *ite << " ";
    }
    std ::cout << std ::endl;
}


int main()
{
    std ::list<int> Mylist = {1, 2, 3, 4, 5};
    print(Mylist);
    /* 逆序 */
    Mylist.reverse();
    print(Mylist);


    auto ite = Mylist.begin();
    for(int idx = 0; idx < 3; idx++)
    {
        ite++;
    }
    Mylist.insert(ite, 99);
    /* 排序 */
    Mylist.sort();
    print(Mylist);




    return 0;
}


/////双向链表
