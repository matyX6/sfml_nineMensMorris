#pragma once
#include <SFML/Graphics.hpp>
#include "Resources.h"
#include <vector>
#include <iostream>

class Point
{
public:
	Point(int id, sf::Vector2f position);
	void update(sf::RenderWindow &window);
	void draw(sf::RenderWindow &window);
	int getId();
	void connectTo(Point &point);
	void setPosition(sf::Vector2f position);

	void printConnections()
	{
		for (auto point : connectedPoints)
		{
			std::cout << "p" << point->getId() << " ";
		}
		std::cout << "\n";
	}
	
private:
	int id;
	sf::Vector2f position;
	std::vector<Point *> connectedPoints;
	sf::RectangleShape background;
};

