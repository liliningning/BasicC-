#include <iostream>

class Complex
{

public:
    Complex(int real, int vir) : real(real), vir(vir)
    {
    }
    Complex operator+(const Complex &c)
    {
        /*创建对象  实部为0 虚部也为0   */
        Complex result(0, 0);
        result.real = this->real + c.real;
        result.vir = this->vir + c.vir;
        return result;
    }

    Complex operator-(const Complex &c)
    {
        Complex result(0, 0);
        result.real = this->real - c.real;
        result.vir = this->vir - c.vir;
        return result;
    }
    /*  ++前置 ++a   先计数 再赋值 */
    Complex operator++()
    {
        this->real++;
        this->vir++;
        return *this;
    }
    /* 后置++ a++  占位参数  先返回在计算  */
    Complex operator++(int )
    {
        Complex temp = *this;
        this->real++;
        this->vir++;
        return temp;

    }
    

    /*入和输出的运算符重载  友元函数 */
    friend std ::ostream &operator<<(std ::ostream &os, const Complex &c);
    friend std ::istream &operator>>(std ::istream &is, Complex &c);

private:
    int real;
    int vir;
};
/* 输出  cout */
std ::ostream &operator<<(std ::ostream &os, const Complex &c)
{
    if (c.vir != 0)
    {
        /* 输出的格式 */
        os << c.real << " +" << c.vir << " i" << std ::endl;
    }
    else
    {
        os << c.real << std ::endl;
    }
    return os;
}
/* 输入 cin  */
std ::istream &operator>>(std ::istream &is, Complex &c)
{
    is >> c.real >> c.vir;
    return is;
}

int main()
{
    Complex c(7, 1);
    Complex c1(5, 4);
    // Complex c2  = c.operator+(c1);
    // Complex c2  = c + c1;
    // Complex c2 = c - c1;
    // operator<<(std ::cout, c2);
    // std ::cout << c2;
    // std ::cin >> c2;

    std :: cout << c.operator++() << std :: endl;
    std :: cout << c1.operator++(0) << std :: endl;
    // std :: cout << ++c1 << std :: endl;
    return 0;
}