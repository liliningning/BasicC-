#include <iostream>
#include <stack>

int main()
{
    std :: stack<int> sta;
    for(int idx = 0; idx < 10; idx++)
    {
        sta.push(idx);
    }
    while(sta.empty() == false)
    {
        int val = sta.top();
        std :: cout << val << std :: endl;
        sta.pop();
    }

    return 0;
}