#include "myString.h"
#include <cstring>

const int CAPACITY = 15;
/* 无参构造 */
Mstring::Mstring()
{
    /* 长度 */
    this->size = 0;
    /* 容量 */
    this->capacity = CAPACITY;
    /*字符串数组 */
    this->s = new char[this->capacity];
    /* 清楚脏数据 */
    memset(s, 0, CAPACITY);
}
/*带参构造 */
Mstring::Mstring(const char *str)
{
    this->size = strlen(str);
    /* 判断字符串的大小 小则正常写入 大则扩容 */
    if (this->size < CAPACITY)
    {
        this->capacity = CAPACITY;
        this->s = new char[this->capacity];
        memset(s, 0, CAPACITY);
        strcpy(this->s, str);
    }
    /*  扩容 为\n 留位置 */
    else
    {
        this->capacity = strlen(str) + 1;
        this->s = new char[this->capacity];
        memset(s, 0, CAPACITY);
        strcpy(this->s, str);   
    }
}

Mstring Mstring::operator+(const Mstring &str)
{
    

    return Mstring();
}

Mstring::~Mstring()
{
    delete[] s;
}
