#pragma once
#include"Object.h"
#include"FPS.h"


class Renderer : public Object , public FPS {
public:
	Object* object;
	void init();
	void setObject(Object* obj);
	bool renderTime();
	bool UpdateTime();
	void renderer();
};