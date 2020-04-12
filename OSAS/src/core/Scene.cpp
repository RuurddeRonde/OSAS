#include "Scene.h"
#include "assimp\include\assimp\Importer.hpp"
namespace OSAS
{
	namespace core
	{
		Scene::Scene()
		{
			//Assimp::Importer;
			//aiScene scene = import
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
