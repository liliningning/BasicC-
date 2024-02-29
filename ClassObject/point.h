#ifndef __POINT_H_
#define __POINT_H_

class Point
{
    public:
    void setXY(int x, int y);
    /* 当前点到另一个点的距离 */
    int distance(Point &p);

    private:
    int m_x;
    int m_y;

};

#endif


