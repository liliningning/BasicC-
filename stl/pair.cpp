#include <iostream>
#include <map>
#include <set>

struct Student
{
    int id;
    std :: string name;
} ;


int main()
{   
    /* key的值是唯一的  键值对 */
    std :: pair<int , Student> s = std :: make_pair<int , Student>(1,{1, "zhangsan"});
    std :: pair<int , Student> s1 = std :: make_pair<int , Student>(2,{2, "lisi"});
    std :: set < std :: pair<int , Student> > p1;
    std :: map<int, Student> p;
    /* 插入相同的是修改 value */
    p[1] = { 1, "zhangsan"};
    p[2] = { 2, "lisi"};
    p[3] = { 3, "wanwu"};
    p[3] = { 3, "nihao"};

    


    /* 插入相同的值 无法插入 */
    // p.insert(s);
    // p.insert(s1);
    // for(auto ite = p.begin(); ite != p.end(); ite++)
    // {
    //     std :: cout << ite->first << " " << ite->second.id << " " << ite->second.name << std :: endl;
    // }

    auto ite = p.find(2);
    std :: cout << ite->second.name << std :: endl;


    return 0;
}