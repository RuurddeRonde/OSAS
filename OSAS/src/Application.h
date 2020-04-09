#pragma once
#include "Project.h"
#include <string>
namespace OSAS
{
	namespace core
	{
		class Application
		{
		public:
			Application(std::string name);
			~Application();
		private:
			Project project;
			std::string name;
		};
	}
}