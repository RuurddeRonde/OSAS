#pragma once
#include "Shader.h"
namespace OSAS {
	namespace core {
		class ViewportRenderer {
		public:
			ViewportRenderer(int width, int height);
			~ViewportRenderer();
			unsigned int Render();
			void Resize(int width, int height);
		private:
			Shader shader;
			unsigned int framebuffer, textureColorbuffer;
			int width, height;	
		};
	}
}