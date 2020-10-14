#pragma once
#include"Object.h"


class Renderer : public Object {
private:
	Object* object;
public:
	int init();
	void setObject(Object* obj);
	void renderer();
};