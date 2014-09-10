#ifndef CAR_HPP
#define CAR_HPP

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>

class Car
{
private:

	sf::Texture main_texture;
	sf::Texture bomb_texture;
	

public:
	Car();
	//~Car();

	sf::Sprite main_sprite; //no debe estar aqui
	sf::Sprite bomb_sprite;
	std::vector<float> shoot();
	float v;
	float alpha; //pi/4 en radiones
	float g;

};





#endif 
