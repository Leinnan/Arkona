#include <Game.h>
#include <iostream>

ar::Game::Game()
{
    m_window = std::make_shared<sf::RenderWindow>();
    m_window->create(sf::VideoMode(800, 600), "SFML Game");
    m_window->setFramerateLimit(60);
    m_window->setMouseCursorVisible(false);
    m_bgColor = sf::Color(230, 102, 2);
    m_running = true;
}
    
ar::Game::~Game()
{
}
void ar::Game::Run()
{
    Initialize();
    

    sf::Clock deltaClock;
    sf::Time deltaTime;
    sf::Event GameEvent;
    
    while(m_running)
    {
        while(m_window->pollEvent(GameEvent))
        {
            if (GameEvent.type == sf::Event::Closed ||
                GameEvent.key.code == sf::Keyboard::Escape)
            {
                m_running = false;
            }
            else
                HandleEvents(GameEvent);
        }
        Update(deltaTime);
        m_window->clear(m_bgColor);
        Draw();
        m_window->display();
        deltaTime = deltaClock.restart();
    }
    End();
}
void ar::Game::Initialize()
{
}
void ar::Game::HandleEvents(const sf::Event &event)
{
}
void ar::Game::Update(sf::Time dt)
{
}
void ar::Game::Draw()
{
}
void ar::Game::End()
{
}

void ar::Game::SetBgColor(const sf::Color &newColor)
{
    m_bgColor = newColor;
}
