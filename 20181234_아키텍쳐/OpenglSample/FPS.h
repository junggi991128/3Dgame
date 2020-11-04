#pragma once
#include<Windows.h>

class FPS {
public:
	void startTime();
	void endTime();
	double getTime();
	//double getFrame();
private:
	//int frame;
	double DeltaTime;
	LARGE_INTEGER timer, start, end;
};