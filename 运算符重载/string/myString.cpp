#include "myString.h"
#include <cstring>


const int CAPACITY = 15;
/* 无参构造 */
Mstring::Mstring()
{
    std ::cout << " 无参 " << std ::endl;
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
    std ::cout << " 带参 " << std ::endl;
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

/* 拷贝构造 */
Mstring::Mstring(const Mstring &str)
{
    std ::cout << " 拷贝 " << std ::endl;
    this->capacity = str.capacity;
    this->size = str.size;
    this->s = new char[str.capacity];
    memset(s, 0, CAPACITY);
    strcpy(this->s, str.s);
}

/* 运算符重载 + */
Mstring Mstring::operator+(const Mstring &str)
{
    /* result 将原来的保存下来 */
    Mstring result(*this);

    result.size = this->size + str.size;
    /*判断是否需要扩容  */
    if (result.size < result.capacity)
    {
        strcat(result.s, str.s);
    }
    else
    {
        result.capacity = result.size + 1;
        /* 定义一个新的数组接 */
        char *newStr = new char[result.capacity];
        memset(newStr, 0, sizeof(newStr));
        /* 将开始的字符串赋给新的数组 */
        strcpy(newStr, this->s);
        /* 将需要添加的进行追加 */
        strcat(newStr, str.s);
        delete[] result.s;
        result.s = newStr;
    }

    return result;
}
/* 运算符重载 - */
Mstring Mstring::operator-(const Mstring &str)
{
    Mstring result (*this);
    /* 找到需要删除的首字母位置 */
    char * deles = strstr(result.s, str.s);
    while(deles != nullptr)
    {
        /* 需要往前面移动的指针的位置 */
        char * backptr = deles + str.size;
        while(*backptr != '\0')
        {
        
            // *deles++ = *backptr++;
            *deles = *backptr;
            *deles++;
            *backptr++;

        }
        *deles = '\0';
        deles = strstr(result.s, str.s);
    }
    return result;


    return Mstring();
}

Mstring::~Mstring()
{
    delete[] s;
}

/* 输出 */
std::ostream &operator<<(std::ostream &os, const Mstring &str)
{
    os << str.s;
    return os;
}
