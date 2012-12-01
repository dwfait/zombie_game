#include "engine.h"

//public methods:
Engine::Engine()
{
  window = new sf::Window(sf::VideoMode(800, 600, 32), "Zombie Game");
}

Engine::~Engine()
{
}

void Engine::run()
{
  loop();
}


//private methods:
void Engine::loop()
{
  while(window->IsOpened())
  {
    process_input();
  }
}

void Engine::render()
{
  window->Display();
}

void Engine::process_input()
{
  sf::Event evt;
  while(window->GetEvent(evt))
  {
    if (evt.Type == sf::Event::Closed)
    {
      window->Close();
    }
  }
}
