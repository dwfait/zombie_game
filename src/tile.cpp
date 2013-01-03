#include "tile.h"
#include <iostream>

Tile::Tile()
{
  std::cout << "Tile created" << std::endl;
}

Tile::~Tile()
{
}

void Tile::set_template(TileTemplatePtr tile_template)
{
  this->tile_template = tile_template;
}
