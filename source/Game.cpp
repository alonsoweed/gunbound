#include "Game.hpp"
#include <iostream>
#include <vector>

Game::Game(int win_width, int win_height)
{
	sf::RenderWindow * window = new sf::RenderWindow(sf::VideoMode(win_width, win_height), "Fucking game");
	main_window = window;
	
	while (main_window->isOpen() )
    {
        sf::Event event;
        main_window->draw(first_player.main_sprite);
        main_window->draw(first_player.bomb_sprite);
        sf::Clock main_clock; //inicia a contar el tiempo
        std::vector<float> shoot_times;
        while (main_window->pollEvent(event))
        {
            switch(event.type)
            {
            	case sf::Event::Closed:
            	{
            		main_window->close();
            		break;
        		}
        
        		case sf::Event::MouseButtonPressed:
        		{
        			if( event.mouseButton.button == sf::Mouse::Left)
        			{
        				std::cout << "Key Pressed!" <<std::endl;
                        shoot_times = first_player.shoot();
                        size_t len = shoot_times.size();
                        std::cout << len << std::endl;
                        for( size_t i = 0; i < len; i++)
                            //std::cout << shoot_times.at(i) << "\n";
                            /* first_player.bomb_sprite.setPosition( sf::Vector2f( 100 + 10000*-1.0*first_player.v*shoot_times[i] , 
                                297 + first_player.v*shoot_times[i] + 10000*0.5*first_player.g*shoot_times[i]*shoot_times[i]  )    );
                            */           
                        

        			}
        			
        		}
        		
        		default: break;
        	}
        }

        //main_window->clear();
        main_window->display();
    }
	
}

Game::~Game()
{
	delete main_window;

}
int main()
{
	Game test( 600, 400);
	return 0;

}
