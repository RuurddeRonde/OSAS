
#include <iostream>
#include "Window.h"

// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

int main()
{
    OSAS::UI::Window window(SCR_WIDTH, SCR_HEIGHT);

	while (!window.WindowShouldClose())
	{
		window.Draw();
	}

    return 0;
}

	