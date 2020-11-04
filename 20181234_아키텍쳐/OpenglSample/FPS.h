#pragma once
#include<Windows.h>

class FPS {
public:
	void startFPS();
	void endFPS();
	double getTime();
	//double getFrame();
private:
	//int frame;
	double DeltaTime;
	LARGE_INTEGER timer, start, end;
};