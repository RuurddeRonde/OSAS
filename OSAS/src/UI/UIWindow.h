#pragma once
#include <string>
namespace OSAS
{
	namespace UI
	{
		class UIWindow
		{
		public:
			UIWindow();
			~UIWindow();
			virtual void update() = 0;
			void Show();
			void Hide();
			std::string GetName();
		private:
			bool showing;
			std::string name;
		};

	}
}