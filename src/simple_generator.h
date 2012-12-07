#ifndef __simple_generator_H
#define __simple_generator_H

#include "map_generator.h"

class SimpleGenerator :
  public MapGenerator
{
  public:
    SimpleGenerator();
    virtual ~SimpleGenerator();

    virtual void generate(Map& map);
};

#endif
