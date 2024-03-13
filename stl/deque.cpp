#include <iostream>
#include <deque>

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
    std ::deque<int> deq;
    deq.push_back(1);
    deq.push_front(2); 
    deq.insert(deq.begin(), 5,5);
    /* 将数组的元素个数修改为 5个 */
    deq.resize(5);
    print(deq);
    return 0;
}

////双端动态数组 
