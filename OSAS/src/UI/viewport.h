#pragma once
#include "UIWindow.h"
#include "../core/viewportRenderer.h"
#include <string>
namespace OSAS
{
	namespace UI
	{
		class Viewport : public UIWindow
		{
		public:
			Viewport(std::string name);
			~Viewport();
			virtual void update() override;
		private:
			std::string name;
			core::ViewportRenderer renderer;
			float width, height;
		};
	}
}