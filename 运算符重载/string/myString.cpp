#include "myString.h"
#include <cstring>

const int CAPACITY = 15;
/* 无参构造 */
Mstring::Mstring()
{
    // std ::cout << " 无参 " << std ::endl;
    /* 长度 */
    this->size = 0;
    /* 容量 */
    this->capacity = 15;
    /*字符串数组 */
    this->s = new char[this->capacity];
    /* 清楚脏数据 */
    memset(this->s, 0, 15);
}
/*带参构造 */
Mstring::Mstring(const char *str)
{
    // std ::cout << " 带参 " << std ::endl;
    this->size = strlen(str);
    /* 判断字符串的大小 小则正常写入 大则扩容 */
    if (this->size <= CAPACITY)
    {
        this->capacity = 16;
        this->s = new char[this->capacity];
        memset(s, 0, 16);
        strcpy(this->s, str);
    }
    /*  扩容 为\n 留位置 */
    else
    {
        this->capacity = this->size + 1;
        this->s = new char[this->capacity];
        memset(s, 0, this->capacity);
        strcpy(this->s, str);
    }
}

/* 拷贝构造 */
Mstring::Mstring(const Mstring &str)
{
    // std ::cout << " 拷贝 " << std ::endl;
    this->capacity = str.capacity;
    this->size = str.size;
    this->s = new char[str.capacity];
    memset(s, 0, str.capacity);
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
    Mstring result(*this);
    /* 找到需要删除的首字母位置 */
    char *deles = strstr(result.s, str.s);
    while (deles != nullptr)
    {
        /* 需要往前面移动的指针的位置 */
        char *backptr = deles + str.size;
        while (*backptr != '\0')
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
}
/* = */
Mstring &Mstring::operator=(const Mstring &str)
{
    this->capacity = str.capacity;
    this->size = str.size;
    /* 将旧的给删除 重新定义一个新的大小的字符串数组 */
    delete[] this->s;
    this->s = new char[str.capacity];
    strcpy(this->s, str.s);
    return *this;
}

#if 0
/* 自加 +=   自己先加后再进行赋值 */
Mstring &Mstring::operator+=( const Mstring &str)
{
    *this = *this + str.s;
    return *this;
}
#endif
/*加其他的内容 加字符   */
Mstring &Mstring::operator+=(const char c)
{
    /* +1 是加上\0的大小 */
    if (this->size + 1 == this->capacity)
    {
        this->capacity *= 2;
        char *newStr = new char[this->capacity];
        strcpy(newStr, this->s);

        delete[] this->s;
        this->s = newStr;
    }

    /* 将新的字符 添加在字符串的末尾 */
    this->s[this->size] = c;
    /*给\0添加一个位置 */
    this->s[this->size + 1] = '\0';
    this->size++;
    return *this;

    // TODO: 在此处插入 return 语句
}

/* 逻辑运算符的重载 判断 */
bool Mstring::operator==(const Mstring &str)
{
    /*将字符串进行比较 */
    if (strcmp(this->s, str.s) == 0)
    {
        return true;
    }
    return false;
}

bool Mstring::operator!=(const Mstring &str)
{
    if (strcmp(this->s, str.s) != 0)
    {
        return true;
    }
    return false;
}

bool Mstring::operator>(const Mstring &str)
{

    if (strcmp(this->s, str.s) > 0)
    {
        return true;
    }

    return false;
}
/*修改当前位置的字符 */
char &Mstring::operator[](int index)
{
    return this->s[index];
}

/* 强转为int类型 */
Mstring::operator int()
{
    return atoi(this->s);
}

Mstring::operator double()
{
    return atof(this->s);
}

/* 切割 */
StringList Mstring::split(const Mstring &str)
{
    Mstring temp(*this);
    StringList list;
    /* 定义一个数组去接切割后的字符串 */
    char *ptr = strtok(temp.s, str.s);
    // std::cout<<ptr<<std::endl;
    while (ptr != nullptr)
    {
        list += ptr;
        ptr = strtok(nullptr, str.s);
        // std::cout<<ptr<<std::endl;
    }
    return list;
}


Mstring::~Mstring()
{
    //  size = 0;

    size = 0;
    this->capacity = 0;
    delete[] this->s;
    s = nullptr;
}

/* 输出 */
std::ostream &operator<<(std::ostream &os, const Mstring &str)
{
    os << str.s;
    return os;
}

/* 字符串的输入 >>  */
std::istream &operator>>(std::istream &is, Mstring &str)
{
    /* 定义val 为输入字符串的最后一位 \0*/
    char val = '\0';
    /* 消除行缓存 */
    while (val = getchar() != '\n')
    {
        str += val;
    }
    return is;
}

/********************************************* 字符串列表StringList *************************************/

StringList::StringList()
{
    this->size = 0;
    this->capacity = 15;
    this->string = new Mstring[this->capacity];
    // memset(this->string, 0, this->capacity);
}

StringList &StringList::operator+=(const Mstring &str)
{
    /* 判断字符串的长度是否 和容量一样大 */
    if (this->size == this->capacity)
    {
        this->capacity *= 2;

        /* 定义一个新的字符串数组去接 */
        Mstring *newArray = new Mstring[this->capacity];

        for (int idx = 0; idx < this->size; idx++)
        {
            newArray[idx] = this->string[idx];
        }
        delete[] this->string;
        this->string = newArray;
    }
    /* 如果没有大于则直接重数组的最后往上加 */
    this->string[this->size++] = str; 

    return *this;
}

/* 删除想删除的值 */
StringList &StringList::operator-=(const Mstring &str)
{
    for(int idx = 0; idx < this->size; idx++)
    {
        if(this->string[idx] == str)
        {
            RemoveByIndex(idx);
            idx--;
        }
        
 
    }
    return *this;

}
/* 找找=到当前位置的并替换 */
Mstring &StringList::operator[](int index)
{
    return this->string[index];
}

/* 删除当前位置的值 */
void StringList::RemoveByIndex(int index)
{
    if (index < 0 || index >= this->size)
    {
        return;
    }
    for (int idx = 0; idx < this->size - 1; idx++)
    {
        this->string[idx] = this->string[idx + 1];
    }
    this->size--;
}

StringList::~StringList()
{
    delete[] this->string;
}

std::ostream &operator<<(std::ostream &os, const StringList &list)
{
    for (int idx = 0; idx < list.size; idx++)
    {
        os << list.string[idx] << std ::endl;
    }
    return os;
}
