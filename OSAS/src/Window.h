#pragma once
#include "glad/glad.h"
#include "GLFW/glfw3.h"
namespace OSAS
{
	namespace UI
	{
		class Window
		{
		public:
			Window(int width, int height);
			~Window();
			void Draw()const;
			bool WindowShouldClose()const;
			int getWidth()const { return width; }
			int getHeight()const { return height; }
			void Resize(int width, int height);
		private:
			int width, height;
			GLFWwindow* window;
		};
	}
}


