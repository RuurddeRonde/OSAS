#pragma once
#include "Scene.h"
#include <vector>
#include <memory>
namespace OSAS
{
	namespace core
	{
		class Project
		{
		public:
			std::shared_ptr<Scene> getScene();

		private:
			std::vector<Scene> scenes;
		};

	}
}