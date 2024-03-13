#include <iostream>
#include <queue>

int main()
{
    std :: queue<int> que;
    for(int idx = 1; idx < 31; idx++)
    {
        que.push(idx);
    }
    int count = 0;
    while(que.size() > 1)
    {
        count++;
        int num = que.front();
        que.pop();
        if(count == 3)
        {
            std :: cout <<  num << " 出局" << std :: endl;
            count = 0;

        }
        else
        {
            que.push(num);
        }
    }
    std :: cout << que.front() << "活下来\n";
    return 0;
}