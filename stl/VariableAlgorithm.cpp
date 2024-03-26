#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{

vector <int> vec = {1,2,3,3,5};
vector<int> v2 = {1,2,3,3,5};



/*reverse 逆序  必须支持逆向迭代器 首尾交换 */
// reverse(vec.begin(),vec.end());
// for_each(vec.begin(),vec.end(),[](int num ){cout<< num << " ";});
// cout << endl;


/* rotate  旋转*/
// rotate(vec.begin(),vec.begin() + 2 ,vec.end());
// for_each(vec.begin(),vec.end(),[](int num ){cout<< num << " ";});
// cout << endl;



/*next_permutation  全排列得下一个  */
// cout << next_permutation(vec.begin(),vec.end())<<  endl;
// for_each(vec.begin(),vec.end(),[](int num ){cout<< num << " ";});
// cout << endl;


// /* prev_permutation 全排列得前一个 */
// cout << prev_permutation(vec.begin(),vec.end())<<  endl;
// for_each(vec.begin(),vec.end(),[](int num ){cout<< num << " ";});
// cout << endl;


/*random_shuffle 随机数的生成*/
srandom(time(NULL));
random_shuffle(vec.begin(),vec.end());
for_each(vec.begin(),vec.end(),[](int num ){cout<< num << " ";});
cout << endl;


    return 0;
}