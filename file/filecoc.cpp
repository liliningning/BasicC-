#include <iostream>
#include <filesystem>
#include <fstream>
using namespace std;
// class ofstream
// {
// public:
//     ofstream(){};
// };

// int
const int szie = 32;
int main()
{

#if 0  
int num = 100;
printf("num:%d\n", num);
printf("num:%12d\n", num);  //左对齐
printf("num:%-12d\n", num); //右对齐

#endif
    const char *name = "./test.txt";
    ofstream ofs(name);
    ifstream ifs (name);

    char *buf[szie] = { 0 };
    /*判断文件是否打开 */
    if (ofs.is_open())
    {
        cout << "open sucess" << endl;
    }

    ofs << "hello world";
    /* 读一行 成员函数*/

    if (ifs.is_open())
    {
        cout << "open sucess" << endl;
    }

    // ifs.getline(buf, sizeof(buf));
    ofs.close();

    // ofs.open()


 


        return 0;
}