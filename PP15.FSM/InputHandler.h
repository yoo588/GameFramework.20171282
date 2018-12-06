#pragma once
#include "SDL.h"
#include "Game.h"
#include <vector>
#include "Vector2D.h"


enum mouse_buttons
{
	LEFT = 0,
	MIDDLE = 1,
	RIGHT = 2
};

class InputHandler
{
public:
	static InputHandler* Instance()
	{
		if (s_pInstance == 0) {
			s_pInstance = new InputHandler();
		}
		return s_pInstance;
	}



	void update();
	void clean();  // ����̽� ���� �ʱ�ȭ�� �κ��� clear

	bool isKeyDown(SDL_Scancode key);
	bool getMouseButtonState(int buttonNumber);

	void onMouseMove(SDL_Event event) {}
	void onMouseButtonDown(SDL_Event event) {}
	void onMouseButtonUp(SDL_Event event) {}
	void onKeyDown() {}
	void onKeyUp() {}

	Vector2D* getMousePosition();
private:
	InputHandler();
	~InputHandler() {}

	SDL_Event event;

	static InputHandler* s_pInstance;
	const Uint8* m_keystates;

	std::vector<bool> m_mouseButtonStates;
	Vector2D* m_mousePosition;
};

typedef InputHandler TheInputHandler;