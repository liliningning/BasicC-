#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
using namespace std;





/**************************变动算法*******************/

int main()
{

    
vector <int> vec = {1,2,3,3,5};
vector<int> v2 = {1,2,3,3,5};

/*for_each */
// cout << for_each(vec.begin(),vec.end(),[](int & num){num++; cout << num << " ";});
// cout << endl;

/* copy()*/
list<int> l ;
l.resize(5);
// copy(vec.begin(),vec.end(), l.begin());
// for_each(vec.begin(),vec.end(),[](int num ){cout<< num << " ";});
// cout << endl;



/*copy_backward  反向拷贝 从末尾开始拷贝 但是结束的顺序仍然是正的3 */
// copy_backward(vec.begin(),vec.end(), l.end());
// for_each(l.begin(),l.end(),[](int num ){cout<< num << " ";});
// cout << endl;




/*transform  数据拷贝做处理 塞到另外的区间0~1*/
// transform(vec.begin(),vec.end(), l.begin(),[](int num){return num * 2;});
// for_each(l.begin(),l.end(),[](int num ){cout<< num << " ";});
// cout << endl;


/*merge   归并排序*/
// vector <int> v3;
// v3.resize(11);
// merge(vec.begin(),vec.end(), l.begin(), l.end(),v3.begin());
// for_each(v3.begin(),v3.end(),[](int num ){cout<< num << " ";});
// cout << endl;



/* swap_ranges 交换区间*/
// swap_ranges(vec.begin(),vec.end(), l.begin());
// for_each(l.begin(),l.end(),[](int num ){cout<< num << " ";});
//  cout << endl;




/*fill 设置初值 初始化 */
// fill(vec.begin(),vec.end(),0);
// for_each(vec.begin(),vec.end(),[](int num ){cout<< num << " ";});
// cout << endl;


/*fill_n */
// fill_n(vec.begin(),3,10);
// for_each(vec.begin(),vec.end(),[](int num ){cout<< num << " ";});
// cout << endl;

/*generate 原区间做改变*/
// generate(vec.begin(),vec.end(),[](){return 10;});
// for_each(vec.begin(),vec.end(),[](int num ){cout<< num << " ";});
// cout << endl;



/*generate_n */
// generate_n(vec.begin(),3,[](){return 10;});
// for_each(vec.begin(),vec.end(),[](int num ){cout<< num << " ";});
// cout << endl;


/* replace 按值修改 将里面的某一元素变为另一个元素 */
// replace(vec.begin(),vec.end(),2,100);
// for_each(vec.begin(),vec.end(),[](int num ){cout<< num << " ";});
// cout << endl;


/*  replace_if  满足某一条件进行替换  */
replace_if(vec.begin(),vec.end(),[](int num ){return num % 2 == 0;}, 77);
for_each(vec.begin(),vec.end(),[](int num ){cout<< num << " ";});
cout << endl;

/*replace_copy */
// replace_copy()



return 0;
}