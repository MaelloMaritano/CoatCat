#include "Scene.hpp"

Scene::Scene()
{
    sf::Texture texture("resources/panetteria.jpg");
    background=sf::Sprite (texture);
}
Scene::Scene(sf::Texture texture)
{
    background=sf::Sprite (texture);
}
void Scene::draw(sf::RenderWindow window)
{
    window.draw(background);
}