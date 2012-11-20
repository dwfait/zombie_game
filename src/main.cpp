#include <iostream>
#include <SFML/Window.hpp>

int main(int argc, char** argv)
{
    // Create the main window
    sf::Window App(sf::VideoMode(800, 600, 32), "SFML Window");

    // Start main loop
    bool Running = true;
    while (Running)
    {
        App.Display();
    }

    return EXIT_SUCCESS;
}
