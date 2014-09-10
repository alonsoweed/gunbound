#include <iostream>
#include <string>
#include <cmath>
#include "Car.hpp"
#include <vector>

Car::Car()
{
	if(!(main_texture.loadFromFile("../images/sprite1.png") && bomb_texture.loadFromFile("..//images/bomb.png")) )
	{
		std::cout << "Error loading the texture!!" ;
	}
	else
	{
		main_sprite.setTexture(main_texture);
		main_sprite.setPosition(0,297);
		bomb_sprite.setTexture(bomb_texture);
		bomb_sprite.setPosition(100,297);
		v = -.007;
		alpha = 0.7854; //pi/4 en radiones
		g = 0.00981;
	}
}

std::vector<float> Car::shoot()
{
	std::vector<float> times;
	sf::Clock shoot_clock; //inicia la cuenta del reloj
	sf::Time shoot_timer = shoot_clock.restart();
	float vx = fabs(v)*cos(alpha);
	float vy = v*sin(alpha);
	float max_time;
	max_time = ( 2*fabs(v)*cos(alpha) )/g;
	std::cout << "Max time equals to " << max_time << std::endl;
	while(shoot_timer.asMilliseconds() < max_time)
	{
		shoot_timer = shoot_clock.getElapsedTime();	
		times.push_back( shoot_timer.asMilliseconds()  );

	}


	return times;
}




