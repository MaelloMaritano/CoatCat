#include <SFML/Graphics.hpp>
#include "Element.hpp"

class Scene
{
	public:
		Scene()	{}
		virtual void draw(sf::RenderWindow* window);
};

class Dialogue : public Scene
{
    private:
        Background bg;
        Character rightChar;
		sf::Vector2f rightCharPos;
		//Expression rightCharExp;
        Character leftChar;
		sf::Vector2f leftCharPos;
		//Expression leftCharExp;
        Line lines;
		sf::Vector2f linesPos[];

    public:
        Dialogue();
        void Dialogue::draw(sf::RenderWindow* window);
};

class PointClick : public Scene
{
    private:
        Background bg;
        Interactable elements[];

    public:
        PointClick();
        void PointClick::draw(sf::RenderWindow* window);
};
