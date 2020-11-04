#pragma once
#include<Windows.h>

class FPS {
public:
	void startFPS();
	void endFPS();
	float getFPS();
private:
	float DeltaTime;
	LARGE_INTEGER timer, start, end;
};