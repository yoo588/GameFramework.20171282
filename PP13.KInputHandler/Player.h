#pragma once

#include <iostream>
#include <SDL.h>
#include "SDLGameObject.h"
#include "LoaderParams.h"
#include "InputHandler.h"

class Player : public SDLGameObject
{
public:
	Player(const LoaderParams * params);

	void draw();
	void update();
	void clean();

private:
	void handleInput();
};