
// #ifndef __NAMESPACE_H
// #define _NAMESPACE_H

/* 防止头文件重复包含的两种方法
    1. #ifndef __NAMESPACE_H
       #define _NAMESPACE_H
       #endif

    2. #pragma once

 */
#pragma once

namespace mySpaseA
{
    int count = 6;
}

/* 命名空间的嵌套 */
namespace mySpaseB
{
    int count = 7;
    namespace mySpaseBB
    {
        int index = 10;
    } // namespace name

}

namespace mySpaseC
{
    int max = 6;
}

/* 将max变为默认的全局变量 (尽量少用) */
using namespace mySpaseC;

// #endif