#include "world.h"
#include <memory>
#include "simple_generator.h"

World::World(unsigned int size) : world_size(size), map(size)
{
  SimpleGenerator generator{};

  generator.generate(map);
}

World::~World()
{
}

