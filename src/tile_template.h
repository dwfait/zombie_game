#ifndef __TILE_TEMPLATE_H
#define __TILE_TEMPLATE_H

#include <string>

class TileTemplate
{
  public:
    TileTemplate(std::string template_name);
    ~TileTemplate();

    const std::string&   get_name();

  private:
    bool solid;
    std::string name;

};
#endif
