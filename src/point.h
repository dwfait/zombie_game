#ifndef _POINT_H
#define _POINT_H

class Point
{
  public:
    Point(unsigned int x, unsigned int y) :
      x{x},
      y{y}
    {}

    unsigned int x = 0;
    unsigned int y = 0;
};
#endif
