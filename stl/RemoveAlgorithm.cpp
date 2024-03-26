#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
using namespace std;



int main()
{

    
vector <int> vec = {1,2,3,4,4,3};
vector<int> v2 (7);

/* remove */
remove(vec.begin(),vec.end(),3);
for_each(vec.begin(),vec.end(),[](int num ){cout<< num << " ";});
cout << endl;


/* unique_copy   去掉相同的并且拷贝到新的区间 */
unique_copy(vec.begin(),vec.end(),v2.begin());
for_each(v2.begin(),v2.end(),[](int num ){cout<< num << " ";});
cout << endl;

return 0;

}



/*********************移除性算法 不常用 ******************************/