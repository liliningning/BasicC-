#include "point.h"

 void Point ::setXY(int x, int y)
 {
    m_x = x;
    m_y = y;
 }

 int Point :: distance(Point &p)
 {
    int dis = (p.m_x-m_x * p.m_x-m_x) + (p.m_y-m_y * p.m_y-m_y);
    return dis;
 }

 



