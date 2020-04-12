#pragma once
#include "glm/glm.hpp"
#include <string>
#include <vector>
namespace OSAS {
	namespace core
	{
		struct Vertex
		{
			glm::vec3 pos;
			glm::vec3 normal;
			glm::vec2 uv;
		};
		struct Texture {
			unsigned int id;
			std::string type;
		};
		class Mesh
		{
		public:
			Mesh(std::vector<Vertex> vertices, std::vector<unsigned int> indices, std::vector<Texture> textures); 
			~Mesh();
			void draw();
		private:
			std::vector<Vertex> vertices;
			std::vector<unsigned int> indices;
			std::vector<Texture> textures;
			unsigned int VAO, VBO, EBO;
		};
	}
}