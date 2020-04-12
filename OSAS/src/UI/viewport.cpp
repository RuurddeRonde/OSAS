#include "viewport.h"
#include "imgui.h"
namespace OSAS
{
	namespace UI
	{

		Viewport::Viewport(std::string name) : name{ name }, renderer{1920,1080}
		{
			showing = true;
			width = 0;
			height = 0;
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
					if (width != ImGui::GetWindowWidth() || height != ImGui::GetWindowHeight())
					{
						width = ImGui::GetWindowWidth();
						height = ImGui::GetWindowHeight();
						renderer.Resize((int)width, (int)height);

					}
					auto tex = renderer.Render();

					ImGui::Image((void *)tex, ImVec2(width, height));
				}
				ImGui::End();

			}
		}

	}
}

