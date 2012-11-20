#include "engine.h"

//public methods:
Engine::Engine()
{
  init();
}

Engine::~Engine()
{
}

void Engine::run()
{
  //Start main loop
}


//private methods:
bool Engine::init()
{
  window = new sf::Window(sf::VideoMode(800, 600, 32), "Zombie Game");

  if (!window)
    return false;
  return true;
}

void Engine::loop()
{

}

void Engine::render()
{

}
