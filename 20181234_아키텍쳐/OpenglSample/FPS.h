#pragma once
#include<Windows.h>

class FPS {
public:
	void setFPS();
	int getFPS();
private:
	int StartTick;
};