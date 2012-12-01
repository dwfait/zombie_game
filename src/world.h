#ifndef _WORLD_H
#define _WORLD_H

#include "map.h"

class World
{
  public:
    World(unsigned int size);
    ~World();
    
  private:
    void generate_world();

    int world_size;
    Map map;
};

#endif
