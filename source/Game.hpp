#ifndef GAME_HPP
#define GAME_HPP

#include "Car.hpp"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <vector>

class Game
{
private:
	static int number_of_players;
	sf::RenderWindow* main_window;
	Car first_player;
	Game();
	sf::Time main_timer;//Tiempo general (unidades)
	

public:
	
	Game( int win_width, int win_height);
	~Game();
	void set_number_of_players(int num__of_players);
	int get_number_of_players();
	

};

#endif
