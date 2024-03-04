#ifndef _MYSTRING_H
#define _MYSTRING_H
#include <iostream>
class Mstring
{
public:

    /* 无参构造函数  */
    Mstring();
    /*带参构造函数 */
    Mstring(const  char * str);
    /* 拷贝构造 */
    Mstring(const Mstring  &str);

    /* +的重载 */
    Mstring operator+(const Mstring &str);

    /* 析构 */
    ~Mstring();



private:
    /*字符串的长度 */
    int size;
    /* 容量  最大存储字符串的个数 */
    int capacity;
   /* 定义的字符串*/
   char * s;
};
/* 输出重载 */
std :: ostream & operator<< (std :: ostream &os,  const Mstring &str);




#endif