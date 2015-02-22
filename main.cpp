#include <iostream>

#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
  // Open a window
  sf::RenderWindow window(sf::VideoMode(200, 200), "Point Viewer");

  // Set framerate to screen refresh rate
  window.setVerticalSyncEnabled(true);

  sf::CircleShape shape(100.f);
  shape.setFillColor(sf::Color::Green);

  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      switch (event.type)
      {
        // Window closed
        case  sf::Event::Closed:
          window.close();
          break;

        // Window Resized
        case sf::Event::Resized:

          std::cout << "new width: " << event.size.width << std::endl;
          std::cout << "new height: " << event.size.height << std::endl;

          break;

        case sf::Event::KeyPressed:

          if (event.key.code == sf::Keyboard::W)
          {
            cout << "W pressed" << endl;
          }

          break;

        default:
          break;
      }
    }

    window.clear();
    window.draw(shape);
    window.display();
  }

  return 0;
}

