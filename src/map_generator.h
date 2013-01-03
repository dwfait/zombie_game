#ifndef __map_generator_H
#define __map_generator_H

#include "map.h"
#include "tile_manager.h"
#include "box.h"
#include <string>

/**
 * Abstract base class for code to hook into and generate a map.
 **/
class MapGenerator
{
  public:
    MapGenerator()
    {
    }

    virtual ~MapGenerator()
    {
    }

    virtual void generate(Map& map) = 0;

  protected:
    TileManager tile_mgr;

    void fill_box_with(Map& map, Box box, std::string tile_handle);
};
#endif
