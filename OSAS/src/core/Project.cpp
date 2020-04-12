#include "Project.h"

namespace OSAS
{
	namespace core {

		Project::Project()
		{
			//todo add project serialisation
			Scene s;
			scenes.push_back(s);
			currentSceneIndex = 0;
		}
		Project::~Project()
		{
			scenes.clear(); //make sure all scenes are cleared for deserialisation
		}
		std::shared_ptr<Scene> Project::getScene()
		{
			return std::make_shared<Scene>(scenes[currentSceneIndex]);
		}
	}
}