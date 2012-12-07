#ifndef __TILE_H
#define __TILE_H

#include "tile_template.h"

class Tile
{
  public:
    Tile();
    ~Tile();

    void set_template(TileTemplatePtr tile_template);

  private:
    TileTemplatePtr tile_template;

};
#endif
