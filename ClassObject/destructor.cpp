#include <iostream>




class Demo
{
    public:
     Demo()
     {
        std :: cout << "构造函数被调用 "  << std :: endl;

     }
     /* 析构函数  */
      ~Demo()
      {
         std :: cout << "析构函数被调用 "  << std :: endl;
      }
};
int main()
{
    #if 1
    std :: cout << "begin "  << std :: endl;
    {
        Demo d; 
    }     
    std :: cout << "end "  << std :: endl;
    return 0;
    #else
     std :: cout << "begin "  << std :: endl;
    
        Demo d; 
        
    std :: cout << "end "  << std :: endl;
    #endif
    return 0;
}

