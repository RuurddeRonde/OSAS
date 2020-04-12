#include "Scene.h"
namespace OSAS
{
	namespace core
	{
		Scene::Scene()
		{
			
		}

		Scene::~Scene()
		{

		}
		void Scene::addObject(std::unique_ptr<SceneObject> o)
		{
			//sceneObjects.push_back(std::move(o));
		}

		void Scene::renderAll()
		{
			for (auto i = 0; i < sceneObjects.size(); i++)
			{
				//sceneObjects[i]->draw();
			}
		}
	}
}
