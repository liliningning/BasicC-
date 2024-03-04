#ifndef _MYSTRING_H
#define _MYSTRING_H
#include <iostream>
class Mstring
{
public:
    /* 无参构造函数  */
    Mstring();
    /*带参构造函数 */
    Mstring(const char *str);
    /* 拷贝构造 */
    Mstring(const Mstring &str);

    /* +的重载 */
    Mstring operator+(const Mstring &str);

    /* -的重载 */
    Mstring operator-(const Mstring &str);

    /*= */
    Mstring &operator=(const Mstring &str);

    /* += 自加  */
    Mstring &operator+=(const Mstring &str);
    /* 加其他的内容 */
    Mstring &operator+=(const char c);

    /*== 判断 */
    bool operator==(const Mstring &str);
    /* != */
    bool operator!=(const Mstring &str);

    /* > */
    bool operator>(const Mstring &str);

    /* [] 修改当前位置的字符 */
    char &operator[](int index);

    /* 析构 */
    ~Mstring();

    /* 友元函数 */
    friend std ::ostream &operator<<(std ::ostream &os, const Mstring &str);
    friend std ::istream &operator>>(std ::istream &is, const Mstring &str);

private:
    /*字符串的长度 */
    int size;
    /* 容量  最大存储字符串的个数 */
    int capacity;
    /* 定义的字符串*/
    char *s;
};
/* 输出重载 */
std ::ostream &operator<<(std ::ostream &os, const Mstring &str);
/* 输入重载 */
std ::istream &operator>>(std ::istream &is, Mstring &str);

#endif