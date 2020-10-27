#pragma once
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <stdlib.h>

#include "include/GL/glew.h"		
#include "include/GLFW/glfw3.h" 
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

#pragma comment(lib, "OpenGL32.lib")
#pragma comment(lib, "lib-vc2017/glew32.lib")
#pragma comment(lib, "lib-vc2017/glfw3.lib")

using namespace glm;
using namespace std;

#define FOURCC_DXT1 0x31545844 // Equivalent to "DXT1" in ASCII
#define FOURCC_DXT3 0x33545844 // Equivalent to "DXT3" in ASCII
#define FOURCC_DXT5 0x35545844 // Equivalent to "DXT5" in ASCII

class Object;

class FileManager {
public:
	static FileManager* instance()
	{
		static FileManager instance;

		return &instance;
	}

	void loadObj{
		Object * target_obj,
		std::string obj_path,
		std::string texture_path,
		std::string vs_shader_path,
		std::string fs_shader_path
	};
private:
	bool loadObj{
		const char* path,
		std::vector<glm::vec3> & out_vertices,
		std::vector<glm::vec2> & out_uvs.
		std::vector<glm::vec3> & out_normals
	};

	GLuint loadDDS(const char* imagepath);
	GLuint LoadShaders(const char* vertex_file_path, const char* fragment_file_path);
};