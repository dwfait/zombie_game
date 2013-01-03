#include "tile_template.h"

TileTemplate::TileTemplate(const std::string& template_name) :
  name(template_name)
{
}

TileTemplate::~TileTemplate()
{
}

const std::string& TileTemplate::get_name()
{
  return this->name;
}
