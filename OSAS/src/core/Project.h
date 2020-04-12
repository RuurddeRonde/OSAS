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
			static Project& getInstance()
			{
				static Project instance;
				return instance;
			}
			std::shared_ptr<Scene> getScene();
			Project(Project const&) = delete;
			void operator=(Project const&) = delete;
		private:
			Project();
			~Project();
			std::vector<Scene> scenes;
			int currentSceneIndex;
		};

	}
}