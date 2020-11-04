#include "FPS.h"

void FPS::startFPS()
{
	QueryPerformanceFrequency(&timer);
	QueryPerformanceCounter(&start);
	//frame =	timer / 60;
}

void FPS::endFPS()
{
	QueryPerformanceCounter(&end);

	DeltaTime = (end.QuadPart - start.QuadPart);
}

double FPS::getTime()
{
	return DeltaTime;
}

//double FPS::getFrame()
//{
//	return frame;
//}
