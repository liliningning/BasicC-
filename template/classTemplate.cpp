#include <iostream>
#include <cstring>
const int default_size = 10;

template <typename Item>
class Array
{
    /* 模板函数的友元函数 */
    template <typename T>
    friend std ::ostream &operator<<(std ::ostream &os, const Array<T> &ary);

private:
    Item *m_data;
    int m_size;
    int m_capacity;

public:
    Array() : Array(10){};
    Array(int capacity)
    {
        if (capacity <= 0)
        {
            capacity = default_size;
        }
        m_data = new Item[capacity];
        if (m_data == NULL)
        {
            throw "new error";
        }
        memset(m_data, 0, sizeof(Item) * capacity);
        m_size = 0;
        m_capacity = capacity;
    }
    ~Array()
    {
        if (this->m_data)

        {
            delete[] this->m_data;
        }
    }

    void add(Item value);
    Item get(int index);
    Item &operator[](int index)
    {
        return this->m_data[index];
    }

private:
    bool checkIndexLegal(int index);
};

template <typename Item>
std ::ostream &operator<<(std ::ostream &os, const Array<Item> &ary)
{
    os << "[";
    for (int idx = 0; idx < ary.m_size; idx++)
    {
        if (idx != 0)
        {
            os << ",";
        }
        os << ary.m_data[idx];
    }
    os << "]";
    return os;
}

template <typename Item>
bool Array<Item>::checkIndexLegal(int index)
{
    if (index < 0 || index >= this->m_size)
    {
        return false;
    }
    return true;
}

template <typename Item>
void Array<Item>::add(Item value)
{
    /* 扩容 */
    if (this->m_size >= this->m_capacity)
    {
        Array result(*this);
        int newcapacity = this->m_capacity * 2;
        Item *newary = new Item[newcapacity];
        memset(newary, 0, sizeof(char) * newcapacity);
        /*将旧数据 拷到新的空间 */
        for (int idx = 0; idx < this->m_size; idx++)
        {
            newary[idx] = this->m_data[idx];
        }
        delete[] this->m_data;

        /* 更新成员变量 */
        this->m_data = newary;
        this->m_capacity = newcapacity;
    }
    m_data[this->m_size++] = value;
}

template <typename Item>
Item Array<Item>::get(int index)
{
    if (!checkIndexLegal(index))
    {
    }
    return this->m_data[index];
}

// template <typename Item>
// Item Array<Item>::operator[](int index)
// {
//     return this->m_data[index];
// }

int main()
{
    Array<int> array;
    array.add(123);
    array.add(12);
    array.add(11);
    std ::cout << array[2] << std ::endl;
    std ::cout << array << std ::endl;

    return 0;
}
