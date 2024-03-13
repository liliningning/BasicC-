1.  标志模板库
2. 
    1：容器  数据结构
    2：迭代器  数据结构与算法连接  算法适合迭代器 数据结构适配迭代器 
    3：算法  处理问题的方法
    4：仿函数
    5：适配器
    6：空间配置器


    容器  

    顺序容器  （序列式容器 ） ：取决于插入的时机和地点
1. vector  单端动态数组 （只能在尾部插入数据 ）
    迭代器：
    第一个
    auto ite = vec.begin();
    std :: cout << *ite << std :: endl;
    /* 是最后的*/
    auto ite_end = vec.end();
    /*范围 
    [behin, end)

    vec.at() vec[]二者的区别
    vec.at()： 越界检查 越界后会抛出异常 
    vec[] ：不会抛出异常 仍然会输出 

2. deque 双端动态数组 队列


3. list 双向链表 
    不支持随机存取 

4. forward_list 单链表

5. stack 栈

排序容器  （关联式容器 ） ： 元素的位置取决于特定的排序准则 
6. set   不能插入重复的元素   底层为红黑树 
7. multiset 可以插重复的元素



pair: 对组   key value