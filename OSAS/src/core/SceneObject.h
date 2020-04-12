#pragma once
namespace OSAS {
	namespace core
	{
		class SceneObject
		{
		public:
			SceneObject(){}
			~SceneObject(){}
			virtual void draw() = 0;
		private:
			//transform transform
		};
	}
}