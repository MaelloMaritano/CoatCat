#include <SFML/Graphics.hpp>
#include "Scene.hpp"

#include <vector>
#include <string>
#include <iostream>
#include <math.h>

struct State
{
	sf::RenderWindow window;
	Scene scene;
	State()
	{
		sf::Texture bg("resources/panetteria.jpg");
		scene= Scene(bg);
		window=sf::RenderWindow(sf::VideoMode({800, 600}), "CoatCat");
		window.setFramerateLimit(60);
	}
};

void handle(const sf::Event::Closed&, State& state)
{
	state.window.close();
}

void handle(const sf::Event::KeyPressed& keyPressed, State& state)
{
}

void handle(const sf::Event::MouseButtonPressed& mouseBP, State& state)
{
}

void handle(const sf::Event::Resized& resized, State& state)
{
}

template <typename T>
void handle(const T&, State& state) {}

int main()
{
	State state=State();
	
	while (state.window.isOpen())
	{
		state.window.handleEvents([&](const auto& event) { handle(event, state); });

		state.window.clear();
		state.scene.draw(state.window);
		state.window.display();
	}
}
