#ifndef __MAP_H
#define __MAP_H

#include "tile.h"

class Map
{
  public:
    Map(unsigned int size);
    ~Map();

    Tile& tile_at(unsigned int x, unsigned int y);

  private:
};
#endif
