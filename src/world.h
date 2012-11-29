#ifndef _WORLD_H
#define _WORLD_H

class World
{
  public:
    World(int size);
    ~World();
    
  private:
    void generate_world();

    int world_size;
};

#endif
