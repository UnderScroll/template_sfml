#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>


class Application
{
public:
	static Application& getInstance()
	{
		return s_Instance;
	}

	static void run()
	{
		getInstance().IRun();
	}
private:
	Application() {};

	//Deletes unnecessary constructors
	Application(Application& other) = delete;
	void operator=(const Application&) = delete;

	//Static Instance
	static Application s_Instance;

	//Members
	sf::RenderWindow window;

	//Methods
	void IRun();
	void setup();
	void input();
	void update();
	void draw();
};
