#include "tile_manager.h"
#include <stdexcept>

TileManager::TileManager()
{
  load_temp_images();
}

std::shared_ptr<TileTemplate> TileManager::get_template(const std::string& template_name)
{
  auto iter = tile_map.find(template_name);
  if (iter == tile_map.end())
  {
    throw std::runtime_error{"Unable to find: "+template_name};
  }
  return iter->second;
}


void TileManager::load_temp_images() {
  TileTemplatePtr grass { std::make_shared<TileTemplate>("grass") };
  add_template(grass);
}


void TileManager::add_template(const TileTemplatePtr tile_template) {
  tile_map[tile_template->get_name()] = tile_template;
}
