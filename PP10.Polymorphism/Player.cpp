#include "Player.h"

void Player::load(int x, int y, int width, int height, std::string textureID)
{
	GameObject::load(x, y, width, height, textureID);
}

void Player::draw(SDL_Renderer * renderer)
{
	GameObject::draw(renderer);
}

void Player::update()
{
	_x--;
}

void Player::clean()
{
}
