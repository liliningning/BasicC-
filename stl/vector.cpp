#include <iostream>
#include <vector>


void print(const std :: vector<int> & v)
{

    for (auto ite = v.begin(); ite != v.end(); ite++)
    {
        std ::cout << *ite <<" ";
       
    }
     std ::cout   << std ::endl;

} 


int main()
{
#if 0
    std ::vector<int> vec = {1, 2, 3, 4, 5, 6};
    std ::cout << "size:" << vec.size() << std ::endl;


    for(int idx = 0; idx < vec.size(); idx++)
    {
        std :: cout << vec[idx] << std :: endl;
    }


    /* 容器遍历 */
    for (auto ite = vec.begin(); ite != vec.end(); ite++)
    {
        std ::cout << *ite << std ::endl;
    }

    /* 迭代器  指向数组的第一个元素（指针） */
    // std :: vector<int> :: iterator ite = vec.begin();
    /* 迭代器声明 开始  */
    auto ite = vec.begin();
    std ::cout << *ite << std ::endl;
    /* 是最后的*/
    auto ite_end = vec.end();
    std ::cout << *ite_end << std ::endl;

    /* 初始化方式 */
    // std :: vector<int >vec(6);
#endif
    std ::vector<int> vec;
    /* 尾插法 */
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    /* 尾删 */
    vec.pop_back();
    // for (auto ite = vec.begin(); ite != vec.end(); ite++)
    // {
    //     std ::cout << *ite << std ::endl;
    // }

    /* 插入 指定位置 */
    vec.insert(vec.begin() + 1, 44);
    print(vec);
    /* 删除 */
    vec.erase(vec.begin() + 1);
    print(vec);

    // std :: cout << vec.at(2) << std :: endl;

    std :: cout << vec[2] << std :: endl;

    std :: cout <<  vec.capacity() << std :: endl;
    /* 内存的缩减 节省内存  */
    vec.shrink_to_fit();
    std :: cout <<  vec.capacity() << std :: endl;
    



    return 0;
}