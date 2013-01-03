#include "map_generator.h"
#include <memory>

void MapGenerator::fill_box_with(Map& map, Box box, std::string tile_handle)
{
  auto tile_template = tile_mgr.get_template(tile_handle);

  for (unsigned int x = box.top_left.x; x < box.bottom_right.x; ++x)
  {
    for (unsigned int y = box.top_left.y; y < box.bottom_right.y; ++y)
    {
      map.tile_at(x,y).set_template(tile_template);
    }
  }
}
