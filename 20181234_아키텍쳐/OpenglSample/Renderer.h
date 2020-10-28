#pragma once
#include"Object.h"


class Renderer : public Object {
public:
	Object* object;
	void init();
	void setObject(Object* obj);
	void renderer();
};