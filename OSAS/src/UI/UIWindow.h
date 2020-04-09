#pragma once
#include <string>
namespace OSAS
{
	namespace UI
	{
		class UIWindow
		{
		public:
			virtual void update() = 0;
			void Show();
			void Hide();
			std::string GetName();
		protected:
			bool showing;
			std::string name;
		};

	}
}