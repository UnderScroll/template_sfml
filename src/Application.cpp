#include "Application.h"

Application Application::s_Instance;

void Application::IRun() 
{
	setup();
	while (window.isOpen()) 
	{
		input();
		update();
		draw();
	}
}

//Setup up the application, runs before anything else
void Application::setup() {
	const unsigned int WINDOW_WIDTH = 800;
	const unsigned int WINDOW_HEIGHT = 450;

	window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "SMFL - TEMPLATE", sf::Style::Default);
	window.setVerticalSyncEnabled(true);
}

//Handles inputs
void Application::input()
{
	sf::Event e;
	while (window.pollEvent(e))
	{
		switch (e.type) 
		{
		case sf::Event::Closed:
			window.close();
			break;
		default:
			break;
		}
	}
}

//Runs once per frame
void Application::update()
{

}

//Draws the application screen
void Application::draw()
{
	window.clear();

	//This is where you draw to the screen

	/* Exemple draw a green circle at the center of the screen
	sf::CircleShape circle(100); //Creates a circle shape of radius 100

	circle.setOrigin(sf::Vector2f(circle.getRadius(), circle.getRadius())); //Sets the origin of the circle to its center, default is top right
	circle.setPosition(window.getSize().x / 2, window.getSize().y / 2); //Move the circle to the center of the screen
	circle.setFillColor(sf::Color::Green); //Set the circle fill color to green

	window.draw(circle); //Draws the circle
	*/

	window.display(); //This renders everything that was drown onto the application screen
}