#include "Object.h"

void Object::setTexture(GLuint loadDDS)
{
	Texture = loadDDS;
}

void Object::setProgramID(GLuint LoadShaders)
{
	programID = LoadShaders;
}
