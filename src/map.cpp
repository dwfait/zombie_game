#include "map.h"

Map::Map(unsigned int size) : tiles(size, std::vector<Tile*>(size))
{
  initialise();
}

Map::~Map()
{

}

Tile& Map::tile_at(unsigned int x, unsigned int y)
{
  return *tiles.at(x).at(y);
}

void Map::initialise()
{
  // new C++11 feature for ease of iterating
  // And use of new meaning of the auto keyword
  // Pretty neat, huh?
  for (auto vec : tiles)
  {
    for (Tile* t : vec)
    {
      t = new Tile();
    }
  }
}
