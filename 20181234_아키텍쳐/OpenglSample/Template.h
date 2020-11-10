#pragma once
#include"Object.h"

class Template : public Object{
public:
	void init();
	void render();
	void update();
	void shutDown();
};