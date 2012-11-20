/**
 * Core class of the game engine (I use the word only for lack of a better one).
 * Processes the game loop. It's a glue class, nothing more.
 **/

#include "SFML/Window.hpp"

#ifndef _ENGINE__H_
#define _ENGINE__H_
class Engine
{
  public:
    Engine();
    ~Engine();

    void run();

  private:
    bool init();
    void loop();
    void render();

    sf::Window* window;
};
#endif
