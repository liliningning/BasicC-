#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

void print(int num)
{
    cout<< num << " ";

}


class Func
{
public:
    void print(int num)
    {
        cout<< num << " ";

    }
};

int main()
{
    vector <int> vec = {1,2,3,4,5};


/****************************** 非变动**********************/
//for_each()

    //函数指针
    for_each(vec.begin(),vec.end(),print);
    

    //仿函数
    Func f;
    for_each(vec.begin(),vec.end(),f);
    cout << endl;


    //lambda表达式
    for_each(vec.begin(),vec.end(),[](int num ){cout<< num << " ";});
    cout << endl;




/*count() 计数
cout << count(vec.begin(),vec.end(), 3);
cout << endl;*/



/*count_if(); 有条件的计数*/
// cout << count_if(vec.begin(),vec.end(),[](int num){return num > 3;});
// cout << endl;


/*max_element*/
// cout << *max_element(vec.begin(),vec.end());
// cout << endl;

// /*min_element*/
// cout << *min_element(vec.begin(),vec.end());
// cout << endl;


/*find()*/
// cout << *find(vec.begin(),vec.end(),3);
// cout <<endl;


/* find_if*/
// cout << *find_if(vec.begin(),vec.end(),[](int num){return num > 3 && num % 2 == 0;});
// cout << endl;


// /* search_n 寻找区间内连续的2个3 */
// cout <<*search_n(vec.begin(),vec.end(),2, 3);
// cout << endl;


/*search   寻找v2在vec出现的位置第一次 字符串的匹配*/

string s1 = "hello worldworldwprld";
string s2 = "world";
// cout << *search(s1.begin(),s1.end(), s2.begin(),s2.end());
// cout << endl;


/* find_end() 倒着寻找 */
// cout << *find_end(s1.begin(),s1.end(),s2.begin(),s2.end());
// cout << endl;


// /* 找第二个区间里面的元素在第一个区间里面第一个出现元素*/
// vector<int> v2 = {5,5,3};
// cout << *find_first_of(vec.begin(),vec.end(),v2.begin(),v2.end());
// cout << endl;


// vector <int> vec = {1,2,3,3,5};
/* adjacent_find 寻找区间内两个相邻的元素*/                                                                       
// cout << *adjacent_find(vec.begin(),vec.end());
// cout << endl;




vector<int> v2 = {1,2,3,3,5};
// cout << equal(vec.begin(),vec.end(),v2.begin(),v2.end());
// cout << endl;



auto pair = mismatch(s1.begin(),s1.end(), s2.begin(),s2.end());
cout << *pair.first << " " << *pair.second;
cout  << endl;


    return 0;
}





















/****** 函数对象的三种表达方式：
 * 1：函数指针
 * 2： 仿函数
 * 3：lambda表达式
 * 
*/