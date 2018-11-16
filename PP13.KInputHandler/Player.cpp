#include "Player.h"

void Player::draw()
{
	SDLGameObject::draw();
}

Player::Player(const LoaderParams * params)
	: SDLGameObject(params) {}

void Player::update()
{
	_velocity.setX(0);
	_velocity.setY(0);
	handleInput();

	_currentFrame = int(((SDL_GetTicks() / 100) % 6));
	SDLGameObject::update();
}

void Player::clean()
{
}

void Player::handleInput()
{
	if (TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_RIGHT))
		_velocity.setX(2);

	if (TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_LEFT))
		_velocity.setX(-2);

	if (TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_UP))
		_velocity.setY(-2);

	if (TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_DOWN))
		_velocity.setY(2);
}
