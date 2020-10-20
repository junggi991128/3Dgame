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

using namespace glm;
using namespace std;

class Object {
public:
	GLFWwindow* window;
	GLuint programID;
	GLuint Texture;
	GLuint MatrixID;
	glm::mat4 Projection;
	glm::mat4 View;
	glm::mat4 Model;
	glm::mat4 MVP;
	GLuint TextureID;
	GLuint vertexbuffer;
	GLuint uvbuffer;
	GLuint VertexArrayID;
public:
	Object();
	void setTexture(GLuint loadDDS);
	void setProgramID(GLuint LoadShaders);
};