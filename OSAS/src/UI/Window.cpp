#include "Window.h"
#include <iostream>
namespace OSAS
{
	namespace UI
	{
		Window::Window(int width, int height) : width{ width }, height{ height }
		{
			glfwInit();
			glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
			glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
			glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
			glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // uncomment this statement to fix compilation on OS X
#endif

			window = glfwCreateWindow(width, height, "OSAS", NULL, NULL);
			if (window == NULL)
			{
				std::cout << "Failed to create GLFW window" << std::endl;
				glfwTerminate();
				return;
			}
			glfwMakeContextCurrent(window);
			//glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

			if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
			{
				std::cout << "Failed to initialize GLAD" << std::endl;
				return;
			}
		}
		Window::~Window() {
			glfwTerminate();
		}
		void Window::Draw() const
		{
			//glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
			//glClear(GL_COLOR_BUFFER_BIT);

			glfwSwapBuffers(window);
			glfwPollEvents();
		}
		bool Window::WindowShouldClose()const
		{
			return glfwWindowShouldClose(window);
		}
		void Window::Resize(int width, int height)
		{
			glViewport(0, 0, width, height);
		}

		GLFWwindow* Window::getRawWindow()
		{
			return window;
		}
	}

}
