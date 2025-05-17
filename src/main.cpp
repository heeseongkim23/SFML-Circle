#include <SFML/Graphics.hpp>

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
    window.setFramerateLimit(144);



    // 초록색 원 생성
    sf::CircleShape circle(100.f); // 반지름 100
    circle.setFillColor(sf::Color::Green); // 초록색

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        window.clear();
        window.draw(circle);

        window.display();
    }

    return 0;
}
