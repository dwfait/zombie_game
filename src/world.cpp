#include "world.h"

World::World(unsigned int size) : world_size(size), map(size)
{
  //Generate the data structure and preallocate memory
  //large enough to store the world
  //A world will be made up of size*size tiles.

  this->generate_world();
}

void World::generate_world()
{

}
