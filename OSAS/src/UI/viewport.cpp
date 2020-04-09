#include "viewport.h"
#include "imgui.h"
namespace OSAS
{
	namespace UI
	{

		Viewport::Viewport(std::string name) : name{ name }
		{
			showing = true;
		}
		Viewport::~Viewport()
		{

		}
		void Viewport::update()
		{
			if (showing)
			{

				if (ImGui::Begin(name.c_str(), &showing))
				{
					ImGui::Text("testing imgui setup");
				}
				ImGui::End();

			}
		}

	}
}

