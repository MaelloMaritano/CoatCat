#include <SFML/Graphics.hpp>

class Scene
{
    private:
        sf::Sprite background;
	public:
		Scene()=default;
		Scene(sf::Texture texture);
		void draw(sf::RenderWindow window);
};
