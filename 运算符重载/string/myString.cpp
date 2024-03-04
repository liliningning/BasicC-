#include "myString.h"
#include <cstring>

const int CAPACITY  = 15;
/* 无参构造 */
Mstring::Mstring()
{
    /* 长度 */
     this->size = 0;
     /* 容量 */
    this->capacity = CAPACITY;
    /*字符串数组 */
    this->s = new char [this->capacity];
    /* 清楚脏数据 */
    memset(s, 0, CAPACITY);

}

Mstring::Mstring(const char *str)
{

}
