#include <iostream>
#include <SFML/Graphics.hpp>

int main() {
    // Open RenderWindow
    sf::RenderWindow window(sf::VideoMode(500, 500), "Hello World"); // VideoMode(Width, Height) & "Title"
    
    while(window.isOpen()) {
        sf::Event evt;
        
        while(window.pollEvent(evt)) {
            if (evt.type == sf::Event::Closed) {
                std::cout << "Window Closed" << std::endl;
                window.close();
            }
        }
        window.clear();
        window.display();
    }
    return 0;
}
