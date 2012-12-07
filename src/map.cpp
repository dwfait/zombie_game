#include "map.h"
#include "point.h"
#include "simple_generator.h"

Map::Map(unsigned int size) : 
  tiles{size, std::vector<Tile>{size}},
  size{size}
{
}

Map::~Map()
{
}

Tile& Map::tile_at(unsigned int x, unsigned int y)
{
  //using at() instead of [][] access,
  //as this will throw if outside of bounds

  return tiles.at(x).at(y);
}

unsigned int Map::get_size()
{
  return size;
}
