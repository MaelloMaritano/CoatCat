#include <SFML/Graphics.hpp>

class Element
{
	public:
		Element();
		virtual void draw(sf::RenderWindow* window);
};

class Background : public Element
{
	private:
		sf::Texture bg;
	public:
		void draw(sf::RenderWindow* window);
};

class Character : public Element
{
	private:
		std::string name;
		sf::Texture picture;
	public:
		void draw(sf::RenderWindow* window);
};

class Line : public Element
{
	private:
		std::string text;
	public:
		void draw(sf::RenderWindow* window);
};

class Interactable : public Element
{
	
};