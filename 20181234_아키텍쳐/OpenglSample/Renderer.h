#pragma once
#include"Object.h"
#include"FPS.h"


class Renderer : public Object , public FPS {
public:
	Object* object;
	void init();
	bool renderTime();
	bool UpdateTime();
	void renderer();
	void update();
	void setObject(Object* obj);
};