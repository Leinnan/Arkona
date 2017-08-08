#pragma once

#include <memory>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

namespace ar
{
    class Game
    {
    public:
        Game();
        ~Game();
        void Run();
        void Initialize();
        void HandleEvents(const sf::Event &event);
        void Update(sf::Time dt);
        void Draw();
        void End();
        void SetBgColor( const sf::Color &newColor);
        
    private:
        std::shared_ptr< sf::RenderWindow > m_window;
        sf::Color                          m_bgColor;
        bool                               m_running;
    };
    
}
