#ifndef _TILE_MANAGER__H
#define _TILE_MANAGER__H

#include "tile_template.h"
#include <map>
#include <memory>
#include <string>
#include <stdexcept>

typedef std::map<std::string, TileTemplatePtr> TileMap;

class TileManager
{
  public:
    TileManager();

    TileTemplatePtr get_template(const std::string& template_name);
    
  private:
    TileMap tile_map;

    void add_template(const TileTemplatePtr tile_template);

    void load_temp_images();
};
#endif
