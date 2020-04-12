#pragma once
#include "SceneObject.h"
#include <vector>
#include <memory>
namespace OSAS
{
	namespace core
	{
		class Scene
		{
		public:
			Scene();
			~Scene();
			void addObject(std::unique_ptr<SceneObject> o);
			void renderAll();
		private:
			std::vector<std::shared_ptr<SceneObject>> sceneObjects;
		};

	}
}