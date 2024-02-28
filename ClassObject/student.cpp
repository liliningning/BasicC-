#include "student.h"


/* 在类的外部定义时 必须要加上类名限制 Student :: */
int Student ::getAge()
{
    return m_age;

}
void Student :: setAge(int age)
{
    m_age = age;
}