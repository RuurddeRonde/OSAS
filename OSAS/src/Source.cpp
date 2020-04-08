
#include <iostream>
#include "UI/WindowManager.h"

// settings

int main()
{
    OSAS::UI::WindowManager ui;

	while (true)
	{
		ui.Update();
		ui.Render();
	}

    return 0;
}

	