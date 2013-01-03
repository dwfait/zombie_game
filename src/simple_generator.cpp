#include "simple_generator.h"

#include "point.h"
#include "box.h"

SimpleGenerator::SimpleGenerator()
{
}

SimpleGenerator::~SimpleGenerator()
{
}

void SimpleGenerator::generate(Map& map)
{
  //At the moment, simple generator will simply fill the world
  //with grass
  Point top_left {0,0};
  Point bottom_right {map.get_size()-1, map.get_size()-1};

  Box whole_map {top_left, bottom_right};

  fill_box_with(map, whole_map, "grass");
}
