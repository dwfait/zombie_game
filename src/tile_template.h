#ifndef __TILE_TEMPLATE_H
#define __TILE_TEMPLATE_H

#include <string>
#include <memory>
class TileTemplate
{
  public:
    TileTemplate(const std::string& template_name);
    ~TileTemplate();

    const std::string&   get_name();

    bool solid;
  private:
    std::string name;

};

typedef std::shared_ptr<TileTemplate> TileTemplatePtr;
#endif
