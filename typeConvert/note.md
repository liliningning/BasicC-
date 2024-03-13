****
多态的三要素：
    1： 继承
    2：父类指针指向子类
    3：子类重写父类函数




类型转换

1. const_cast : 将const属性 转换为非const属性 
2. dybamic_cast : 用于多态类型的转换 有运行时的安全检测 将非法的地址置为空 
3. static_cast : 非const 转换为const  没有安全检测  与c语言强转一样
4. reinterpret_cast ： 没有安全检测   用于进行各种不同类型的指针之间、不同类型的引用之间以及指针和能容纳指针的整数类型之间的转换



特性
5. auto : 适用于所有类型 
6. decltype : 可以获取变量的类型
7. nullptr :  用NULL 在重载里面会模糊选择

8.  数组的三种表达方式 
    int array1[5] = {11, 22, 33, 44, 55};
    int array1[] = {11, 22, 33, 44, 55};
    int array1[]{11, 22, 33, 44, 55};

9.  快速遍历  item已经是内部的元素
    int array4[5] = {11, 22, 33, 44, 55};
    for(int item: array1)
    {
        std :: cout << "array4:" << item <<std :: endl;
    }



