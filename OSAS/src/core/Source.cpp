
#include <iostream>
#include "../UI\WindowManager.h"
#include "../UI\viewport.h"

// settings

int main()
{
    OSAS::UI::WindowManager ui;
	ui.AddWindow(std::unique_ptr<OSAS::UI::Viewport>(new OSAS::UI::Viewport("viewport")));
	while (true)
	{
		ui.Update();
		ui.Render();
	}

    return 0;
}

	