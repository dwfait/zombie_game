#ifndef _BOX_H
#define _BOX_H

#include "point.h"

class Box
{
  public:
    Box(Point top_left, Point bottom_right) :
      top_left{top_left},
      bottom_right{bottom_right}
    {}

    Point top_left;
    Point bottom_right;
};
#endif
