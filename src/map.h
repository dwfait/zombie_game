#ifndef __MAP_H
#define __MAP_H

#include "tile.h"
#include <vector>
#include <memory>

class Map
{
  public:
    Map(unsigned int size);
    ~Map();

    Tile& tile_at(unsigned int x, unsigned int y);
    unsigned int get_size();

  private:
    std::vector<std::vector<Tile>> tiles;
    unsigned int size;

};
#endif
